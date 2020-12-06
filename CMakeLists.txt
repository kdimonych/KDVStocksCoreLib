# KDVStocksCoreLib
#
# Created by Dmytro Krasnianskyi on 05.12.20.

cmake_minimum_required(VERSION 3.0)

PROJECT( KDVStocksCoreLib LANGUAGES CXX VERSION 1.0 )

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

########################################################################
# Set variables
########################################################################
SET( LIB_TARGET_NAME "libKDVStocksCore" )

ADD_SUBDIRECTORY( src )
message( STATUS "LIB_INCLUDE_DIRS: " "${LIB_INCLUDE_DIRS}" )
message( STATUS "LIB_SRC: " "${LIB_SRC}" )
message( STATUS "LIB_PUBLIC_HEADERS: " "${LIB_PUBLIC_HEADERS}" )
message( STATUS "LIB_HEADERS: " "${LIB_HEADERS}" )

########################################################################
# Configure IDE porject
########################################################################
source_group( TREE ${CMAKE_CURRENT_SOURCE_DIR}/src )

########################################################################
# Create target
########################################################################
add_library( ${LIB_TARGET_NAME} SHARED ${LIB_SRC} )
set_target_properties( ${LIB_TARGET_NAME} PROPERTIES PUBLIC_HEADER "${LIB_PUBLIC_HEADERS}" )

########################################################################
# Include directories
########################################################################
include_directories( ${LIB_INCLUDE_DIRS} )
message( STATUS "INCLUDE_DIRECTORIES: " ${LIB_INCLUDE_DIRS} )

########################################################################
# Add support of SQLite
########################################################################
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package( SQLite3 )
if (SQLITE3_FOUND)
  include_directories( ${SQLITE3_INCLUDE_DIRS} )
  target_link_libraries ( ${LIB_TARGET_NAME} ${SQLITE3_LIBRARIES} )
  message( STATUS "SQLite3 library was found" )
else ()
  message( FATAL_ERROR "SQLite3 library wasn't found!" )
endif (SQLITE3_FOUND)

########################################################################
# Add support of LibCurl
########################################################################
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package( CURL REQUIRED COMPONENTS HTTP HTTPS)
if (CURL_FOUND)
  include_directories( ${CURL_INCLUDE_DIRS} )
  target_link_libraries ( ${LIB_TARGET_NAME} ${CURL_LIBRARIES} )
  message( STATUS "CURL library was found" )
else ()
  message( FATAL_ERROR "CURL library wasn't found!" )
endif (CURL_FOUND)

########################################################################
# Tests
########################################################################
ENABLE_TESTING()
ADD_SUBDIRECTORY( unit_tests )

