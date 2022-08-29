#pragma once
#include "ADCtoAmpConverter.h"
#include "Detect_Range_Readings.h"

static inline void validateAdcConverter_NoError(int AdcOutput, int ExpectedCurrentInAmp)
{
  int CurrentInAmp = 0;
  
  REQUIRE(ConvertAdcToAmp(AdcOutput, &CurrentInAmp) == ADCToAmpConversionSucessful); /* function returns 0 indicating no error */
  REQUIRE(CurrentInAmp == ExpectedCurrentInAmp);
}
