//
//  testHelloWorld.cpp
//  KDVStocksCore
//
//  Created by Dimonych on 05.12.20.

#include <iostream>
#include <algorithm>

#include "KDVStocksCore.hpp"

#define ASSERT_THROW( condition )                                   \
{                                                                   \
  if( !( condition ) )                                              \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
    );                                                              \
  }                                                                 \
}

#define ASSERT_EQUAL( x, y )                                        \
{                                                                   \
  if( ( x ) != ( y ) )                                              \
  {                                                                 \
    throw std::runtime_error(   std::string( __FILE__ )             \
                              + std::string( ":" )                  \
                              + std::to_string( __LINE__ )          \
                              + std::string( " in " )               \
                              + std::string( __PRETTY_FUNCTION__ )  \
                              + std::string( ": " )                 \
                              + std::to_string( ( x ) )             \
                              + std::string( " != " )               \
                              + std::to_string( ( y ) )             \
                              + std::string( " in expr.: " )        \
                              + std::string( #x )                   \
                              + std::string( " != " )               \
                              + std::string( #y )                   \
    );                                                              \
  }                                                                 \
}

#define ASSERT_EQUAL_EXP( x, y )                                    \
{                                                                   \
if( ( x ) != ( y ) )                                                \
{                                                                   \
throw std::runtime_error(   std::string( __FILE__ )                 \
                            + std::string( ":" )                    \
                            + std::to_string( __LINE__ )            \
                            + std::string( " in " )                 \
                            + std::string( __PRETTY_FUNCTION__ )    \
                            + std::string( ": " )                   \
                            + std::string( #x )                     \
                            + std::string( " != " )                 \
                            + std::string( #y )                     \
);                                                                  \
}                                                                   \

void testMatrix()
{
    using namespace kdv_stocks_core;
    init();
}

int main(int a, char**)
{
    testMatrix();
    return 0;
}
