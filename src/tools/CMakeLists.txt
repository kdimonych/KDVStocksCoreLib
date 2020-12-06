# KDVStocksCoreLib
#
# Created by Dmytro Krasnianskyi on 05.12.20.

cmake_minimum_required(VERSION 3.0)

########################################################################
# Set variables
########################################################################
FILE( GLOB _TOOLS_HEADERS 
	LIST_DIRECTORIES false
	CONFIGURE_DEPENDS
    "*.h"
    "*.hpp"
)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} _TOOLS_SRC)

########################################################################
# Export variables
########################################################################
SET( TOOLS_SRC ${_TOOLS_SRC} PARENT_SCOPE )
SET( TOOLS_HEADERS ${_TOOLS_HEADERS} PARENT_SCOPE )