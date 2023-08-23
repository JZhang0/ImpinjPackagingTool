#!/bin/bash

DIR="$( cd "$( dirname "$0" )" && pwd )"
GREEN_COLOR='\033[1;32m'
RED_COLOR='\033[0;31m'
NO_COLOR='\033[0m'

rm -rf ~/ImpinjBuilder
systemctl stop ImpinjBuilder
update-rc.d ImpinjBuilder remove
rm /etc/init.d/ImpinjBuilder

mkdir ~/ImpinjBuilder

# Installing 32-bit libraries

dpkg --add-architecture i386
apt-get update

BUILD_DEPENDENCIES="libc6:i386 libncurses5:i386 libstdc++6:i386 zlib1g:i386"
dpkg -s ${BUILD_DEPENDENCIES} 1> /dev/null
if [ "$?" -eq "1" ]
then
  echo "Installing $BUILD_DEPENDENCIES"
  
  apt-get install -y ${BUILD_DEPENDENCIES}
fi

# Installing dotnet dependencies

cd "$DIR/builder/server/"

BUILD_DEPENDENCIES="dotnet-sdk-6.0"
dpkg -s ${BUILD_DEPENDENCIES} 1> /dev/null
if [ "$?" -eq "1" ]
then
  echo "Installing $BUILD_DEPENDENCIES"

  wget https://packages.microsoft.com/config/ubuntu/20.04/packages-microsoft-prod.deb -O packages-microsoft-prod.deb
  dpkg -i packages-microsoft-prod.deb
  rm packages-microsoft-prod.deb

  apt-get update
  apt-get install -y ${BUILD_DEPENDENCIES}
fi

# Building backend server

dotnet build --runtime linux-x64 || { echo -e "\n${RED_COLOR}Failed building ImpinjBuilder Server${NO_COLOR}\n" ; exit 1; }
cp -r bin/Debug/net6.0/linux-x64/ ~/ImpinjBuilder/server

# Installing Node dependencies

cd "$DIR/builder/UI/"

if [ ! -d "$HOME/.nvm" ]
then
  echo "Installing Node.js and Angular"

  wget -qO- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.3/install.sh | bash

  source ~/.bashrc

  export NVM_DIR="$HOME/.nvm"
  [ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"
  [ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"

  nvm install 18.16.0

  npm install -g @angular/cli@16.0.5
  npm install -g http-server

  ln -s "$NVM_DIR/versions/node/$(nvm version)/bin/http-server" "/usr/local/bin/http-server"
  ln -s "$NVM_DIR/versions/node/$(nvm version)/bin/node" "/usr/local/bin/node"
  ln -s "$NVM_DIR/versions/node/$(nvm version)/bin/npm" "/usr/local/bin/npm"
fi

ng completion

# Building frontend UI

npm install

ng build || { echo -e "\n${RED_COLOR}Failed building ImpinjBuilder Web Interface${NO_COLOR}\n" ; exit 1; }

cp -r ./dist/ImpinjBuilder "$HOME/ImpinjBuilder/UI"

# Daemonizing the application

cp -r "$DIR/R420" ~/ImpinjBuilder
cp -r "$DIR/R700" ~/ImpinjBuilder

cp "$DIR/ImpinjBuilder" /etc/init.d/
update-rc.d ImpinjBuilder defaults
update-rc.d ImpinjBuilder enable > /dev/null 2>&1

systemctl start ImpinjBuilder

sleep 5

echo -e "\n${GREEN_COLOR}Impinj Builder is Running${NO_COLOR}\n"

exit 0
