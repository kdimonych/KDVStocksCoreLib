# KDVStocksCoreLib
#
# Created by Dmytro Krasnianskyi on 05.12.20.

cmake_minimum_required(VERSION 3.0)

########################################################################
# Collect sources
########################################################################
FILE( GLOB IMPLEMENTATION_HEADERS 
	LIST_DIRECTORIES false
	CONFIGURE_DEPENDS 
    "*.h"
    "*.hpp"
)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} _IMPLEMENTATION_SRC)

########################################################################
# Export variables
########################################################################
SET( IMPLEMENTATION_SRC ${_IMPLEMENTATION_SRC} PARENT_SCOPE )
SET( IMPLEMENTATION_HEADERS ${_IMPLEMENTATION_HEADERS} PARENT_SCOPE )