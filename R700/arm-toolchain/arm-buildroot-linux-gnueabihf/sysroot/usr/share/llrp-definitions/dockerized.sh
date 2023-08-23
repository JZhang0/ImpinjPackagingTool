#!/bin/bash -ex

if [[ "$(tty -s; echo $?)" == "0" ]]; then
  t_opt="-t"
fi

image_name=octlib/llrp-defs
work=/mnt/work
mount="-v ${PWD}:${work}:Z"
user=$(id --user)

run_opts=(--rm -u ${user} -i ${t_opt})

if [ ! -z ${ARTIFACTORY_USER+x} ] && [ ! -z ${ARTIFACTORY_PASSWORD+x} ];then
  ARTIFACT_USER=${ARTIFACTORY_USER}
  ARTIFACT_TOKEN=${ARTIFACTORY_PASSWORD}
fi

docker build  \
  --build-arg UID=${user} \
  --build-arg ARTIFACTORY_USER="${ARTIFACT_USER}" \
  --build-arg ARTIFACTORY_TOKEN="${ARTIFACT_TOKEN}" \
  -t ${image_name} .

docker run "${run_opts[@]}" ${mount} ${image_name} $@
