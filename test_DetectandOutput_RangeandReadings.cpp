#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "DetectandOutput_RangeandReadings.h"

TEST_CASE("Test case 1") 
{
  printf("Test case 1\n");
  int array[2] = {4,5};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 2") 
{
  printf("Test case 2\n");
  int array[3] = {4,5,6};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 3") 
{
  printf("Test case 3\n");
  int array[4] = {4,5,6,9};
  int size = sizeof(array)/sizeof(array[0]);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 4") 
{
  printf("Test case 4\n");
  int array[7] = {3,10,5,7,12,15,17};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 5") 
{
  printf("Test case 5\n");
  int array[7] = {3,3,5,4,10,11,12};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("Test case 6") 
{
  printf("Test case 6\n");
  int array[10] = {3,3,5,4,10,11,12,23,21,22};
  int size = sizeof(array)/sizeof(array[0]);
  sort_array(array,size);
  REQUIRE(check_readings(array,size) == 1);
}

TEST_CASE("ignoring error-readings - Test case 7") 
{
  printf("ignoring error-readings - Test case 6\n");
  REQUIRE(AD_Converter(1000) == 0);
  REQUIRE(converter_check(1000) == 0);
}

