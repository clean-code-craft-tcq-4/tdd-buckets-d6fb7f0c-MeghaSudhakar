#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "TDD.h"

TEST_CASE("Test case 0") 
{
  int array[1] = {4};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 0);
}

TEST_CASE("Test case 1") 
{
  int array[2] = {4,5};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 2);
}

/*
TEST_CASE("Test case 2") 
{
  int array[3] = {4,5,6};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 2);
}

TEST_CASE("Test case 3") 
{
  int array[4] = {4,5,6,9};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 2);
}

TEST_CASE("Test case 4") 
{
  int array[9] = {1,4,5,6,7,9,13,14,15};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 5);
}

TEST_CASE("Test case 5") 
{
  int array[8] = {1,4,5,6,7,8,9,13};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 5);
}
*/
