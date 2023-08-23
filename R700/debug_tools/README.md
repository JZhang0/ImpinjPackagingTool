# Debug Tools

## Installing

```
[user@machine]$ ssh root@<reader-hostname>
<reader-hostname> login: root
Password:
Last login: ...
 > osshell <password>
```

Then use `scp` to copy the desired binaries to the reader.  Note that they
_must_ be run out of the `/tmp` directory.

```
root@<reader-hostname>:/# scp <user>@<machine>:/path/to/debug_tools/* /tmp
```

## Running

To run the tools, simply execute them:

```
root@<reader-hostname>:/# /tmp/getconf PAGESIZE
```

Note that for nmap and tcpdump, the LD_LIBRARY_PATH must be set to `/tmp` for
these tools to find the required runtime libraries:

```
root@<reader-hostname>:/# LD_LIBRARY_PATH=/tmp /tmp/tcpdump
```
