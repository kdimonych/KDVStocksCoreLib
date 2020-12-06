# KDVStocksCoreLib
#
# Created by Dmytro Krasnianskyi on 05.12.20.

cmake_minimum_required(VERSION 3.0)

########################################################################
# Add subdirectories
########################################################################
ADD_SUBDIRECTORY( interface )
ADD_SUBDIRECTORY( implementation )
ADD_SUBDIRECTORY( tools )

########################################################################
# Set variables
########################################################################
SET( _LIB_PUBLIC_HEADER_PATH "${CMAKE_CURRENT_SOURCE_DIR}/interface" )
SET( _LIB_IMPLEMENTATION_PATH "${CMAKE_CURRENT_SOURCE_DIR}/implementation" )
SET( _LIB_TOOLS_PATH "${CMAKE_CURRENT_SOURCE_DIR}/tools" )

LIST( APPEND _LIB_INCLUDE_DIRS ${_LIB_PUBLIC_HEADER_PATH} ${_LIB_IMPLEMENTATION_PATH} ${_LIB_TOOLS_PATH} )
LIST( APPEND _LIB_SRC ${IMPLEMENTATION_SRC} ${TOOLS_SRC} )
LIST( APPEND _LIB_HEADERS ${INTERFACE_HEADERS} ${IMPLEMENTATION_HEADERS} ${TOOLS_HEADERS} )

########################################################################
# Export variables
########################################################################
SET( LIB_PUBLIC_HEADER_PATH ${_LIB_PUBLIC_HEADER_PATH} PARENT_SCOPE )
SET( LIB_IMPLEMENTATION_PATH ${_LIB_IMPLEMENTATION_PATH} PARENT_SCOPE )
SET( LIB_TOOLS_PATH ${_LIB_TOOLS_PATH} PARENT_SCOPE )
SET( LIB_INCLUDE_DIRS ${_LIB_INCLUDE_DIRS} PARENT_SCOPE ) 

SET( LIB_PUBLIC_HEADERS ${INTERFACE_HEADERS} PARENT_SCOPE )
SET( LIB_SRC ${_LIB_SRC} PARENT_SCOPE )
SET( LIB_HEADERS ${_LIB_HEADERS} PARENT_SCOPE )
