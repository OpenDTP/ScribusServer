ScribusServer
=============

Scribus is an open source Desktop Publishing application.

This program is a fork of Scribus, with the purpose of adding a socket and give access to an API.
The goal here is to allow foreign programs to interact with Scribus.

This fork is based on Scribus version 1.4.2.

Install on CentOS 6
-------------

### Clone the repository

<p><code>git clone https://github.com/OpenDTP/ScribusServer.git</code></p>

### Install Scribus from yum

<p><code>yum install scribus</code></p>

### Packages dependencies

You need to install the following packages with yum :

<pre><code>yum install gcc
yum install gcc-c++
yum install cmake
yum install qt4 qt4-develqtwebkit-devel
yum install poppler-devel
yum install podofo-devel
yum install ghostscript
yum install pkgconfig
yum install lcms2-devel
yum install libjpeg-devel
yum install libtiff-devel
yum install cups-devel
yum install libxml2 libxml2-devel
yum install python python-devel
yum install fontconfig-devel
yum install openssl-devel
yum install freetype freetype-devel
yum install python-imaging-devel
yum install tk tkinter
yum install hunspell hunspell-devel
yum install cairo cairo-devel
yum install boost-devel
</code></pre>

### Compiling ScribusServer

Enter the following commands in the project directory :

<pre><code>mkdir builddir && cd builddir
cmake ..
make && make install
cp scribus/plugins/opendtp/libopendtp.so /usr/lib64/scribus/plugins/
</code></pre>

### Use the INI configuration file.

Put the default configuration file to the right path :
<p><code>cp ../opendtp.conf /etc/</code></p>

You can modify this file to choose your ip address and port to bind for the UNIX socket.

### Run scribus
<p><code>scribus</code></p>

Check that Scribus has correctly created the socket (through the log file):
<p><code>tail /tmp/opendtp.log</code></p>

Troubleshooting
-------------

If you have any issue with the installation process, it can be useful to check the [scribus wiki compilation tutorial](http://wiki.scribus.net/canvas/Official:Compile_with_CMake), or even the [scribus wiki](http://wiki.scribus.net/canvas/Scribus) in general.

The wiki also contain some documentation for installing scribus on other OS (Ubuntu, Mac OS X...).
