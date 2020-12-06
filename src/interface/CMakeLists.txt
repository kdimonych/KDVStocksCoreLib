# KDVStocksCoreLib
#
# Created by Dmytro Krasnianskyi on 05.12.20.

cmake_minimum_required(VERSION 3.0)

########################################################################
# Collect sources
########################################################################
FILE( GLOB _INTERFACE_HEADERS
	LIST_DIRECTORIES false
	CONFIGURE_DEPENDS 
    "*.h"
    "*.hpp"
)
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} _INTERFACE_HEADERS)

########################################################################
# Export variables
########################################################################
SET( INTERFACE_HEADERS ${_INTERFACE_HEADERS} PARENT_SCOPE )