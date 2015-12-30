# google-earth-deb-64
patch of amd64 Google Earth, for Debian 8 Jessie (and similar), uses system Qt libraries

- install the package
``
dpkg -i google-earth-7.1.4.1529-amd64-patch.deb
``

- *run: cd /opt/google/earth/free/; ./baifaao_compile* to compile baifaao.cpp (and move Qt libs outside),
  baifaao.so solves the error with system Qt libraries (.so in package is from Debian 8 Jessie stable 64b)

- with Qt libraries deleted, the system Qt libraries are used

- will preload libfreeimage

- *because ia32-libs reference is removed you have to install lot of packages manually (!!!) - try start the app*


## based on / see / thanks to

- amirpli: https://productforums.google.com/forum/#!topic/maps/_h4t6SpY_II

- http://www.funtoo.org/Googleearth_panaramio_fix


see both resources and /opt/google/earth/free/googleearth

to build the package again:
``
dpkg-deb -b ge_amd64_patch google-earth-7.1.4.1529-amd64-patch.deb
``

## to follow this with newer version of Earth (if any):

- unpack 64b deb package downloaded from Google:
``
dpkg-deb -x google-earth-xxx.deb google-earth-xxx
dpkg-deb -e google-earth-xxx.deb google-earth-xxx/DEBIAN
``

- remove ia32-libs reference in DEBIAN/control

- copy baifaao.cpp and baifaao_compile from this project to /opt/google/earth/free/

- from /opt/google/earth/free/ run ./baifaao_compile

- copy last commands of /opt/google/earth/free/googleearth from this project to the new version (probably you can copy whole file)

- build: dpkg-deb -b google-earth-xxx google-earth-xxx.deb
