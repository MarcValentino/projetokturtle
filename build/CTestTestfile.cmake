# CMake generated Testfile for 
# Source directory: /home/marcelo/projetokturtle
# Build directory: /home/marcelo/projetokturtle/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/marcelo/projetokturtle/build/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
subdirs("doc")
subdirs("src")
subdirs("icons")
