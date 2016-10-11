# Authors: Justin Siekmann, Anthony Ciancio
# NetIDs: jsiekmann, shjay
# Date: 25 October, 2016
# Assignment #2


set( CMAKE_CXX_FLAGS "-Wall -g" )

file( GLOB SRCS *.cpp *.h )

add_executable( jsiekmann_shjay_dpgen ${SRCS} )

