# google-earth-deb-64
patch of amd64 Google Earth, for Debian 8 Jessie (and similar), uses system Qt libraries

- *run /opt/google/earth/free/baifaao_compile to compile baifaao.cpp (and move Qt libs outside)*,
  baifaao.so solves the error with system Qt libraries (.so in package is from Debian 8 Jessie stable 64b)

- with Qt libraries deleted, the system Qt libraries are used

- will preload libfreeimage

- *because ia32-libs reference is removed you have to install lot of packages manually (!!!) - try start the app*


based on / see / thanks to

- amirpli: https://productforums.google.com/forum/#!topic/maps/_h4t6SpY_II

- http://www.funtoo.org/Googleearth_panaramio_fix


see both resources and /opt/google/earth/free/


to build the package again:
``
dpkg-deb -b ge_amd64_patch google-earth-7.1.4.1529-amd64-patch.deb
``