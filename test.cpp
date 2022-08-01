#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"


TEST_CASE("checkAndAlert two") 
{

  int array[9] = {1,2,3,4,5,10,11,12,13};
  int size = sizeof(array);
  REQUIRE(check_readings(array,size) == 1);
}
