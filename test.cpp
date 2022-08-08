#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "TDD.h"

TEST_CASE("Test case 1") 
{
  int array[2] = {4,5};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 2") 
{
  int array[3] = {4,5,6};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 3") 
{
  int array[4] = {4,5,6,9};
  int size = sizeof(array)/sizeof(array[0]);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 4") 
{
  int array[7] = {3,10,5,7,12,15,17};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 5") 
{
  int array[7] = {3,3,5,4,10,11,12};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

