
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "test_converter.h"
#include <string.h>
#include "ADCtoAmpConverter.h"
#include "Detect_Range_Readings.h"


const AdcParameters AdcParameterStruct = {
  0,      // MinCurrentSensedByAdc in Amp
  10,     // MaxCurrentSensedByAdc in Amp
  10,     // AdcConversionScale -> Since this is single direction, maxCurrentSensedByAdc is considered as scale
  0,      // AdcConversionOffset
  4094    // MaxValueReadByAdc
};


TEST_CASE("To check if ADC o/p 0 is read as 0A by the converter")
{
  int AdcOutput = 0;
  int expectedCurrentInAmp = 0;
  validateAdcConverter_NoError(AdcOutput, expectedCurrentInAmp);
}
