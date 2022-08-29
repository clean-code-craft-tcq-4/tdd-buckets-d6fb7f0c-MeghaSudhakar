#include "ADCtoAmpConverter.h"

#define CONVERT_ADC_AMP(AdcValue)   ((float)((AdcParameterStruct.AdcConversionScale*(ADCValue))/(float)(AdcParameterStruct.MaxValueReadByAdc)) + (float)AdcParameterStruct.AdcConversionOffset)
#define IS_GREATER_THAN_MAX_VALUE(ADCValue)  (ADCValue > AdcParameterStruct.MaxValueReadByAdc)

int ConvertAdcToAmp(int ADCValue, int* CurrentInAmp)
{
 int returnValue = ADCToAmpConversionNotSucessful;
 
 if(IS_GREATER_THAN_MAX_VALUE(ADCValue))
 {
  returnValue = ADCToAmpConversionNotSucessful;  
 }
 else
 {
  *CurrentInAmp = CONVERT_ADC_AMP(ADCValue);
   returnValue = ADCToAmpConversionSucessful;
 }
 
  return returnValue;
}
