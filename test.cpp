#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"


TEST_CASE("Test case 1") 
{
  int array[2] = {4,5};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 2);
}

TEST_CASE("Test case 2") 
{
  int array[3] = {4,5,6};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 3);
}

