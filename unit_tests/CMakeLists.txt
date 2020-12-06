# KDVStocksCoreLib
#
# Created by Dmytro Krasnianskyi on 05.12.20.

cmake_minimum_required(VERSION 3.0)


ADD_EXECUTABLE( test_hello_world testHelloWorld.cpp )
target_link_libraries(test_hello_world ${LIB_TARGET_NAME})
add_test(NAME hello_world COMMAND test_hello_world)