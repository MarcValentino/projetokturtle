# CMake generated Testfile for 
# Source directory: /home/marcelo/kturtle
# Build directory: /home/marcelo/kturtle/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/marcelo/kturtle/build/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
subdirs("doc")
subdirs("src")
subdirs("icons")
