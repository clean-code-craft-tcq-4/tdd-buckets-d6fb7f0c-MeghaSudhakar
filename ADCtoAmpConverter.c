#include "ADCtoAmpConverter.h"
#include<stdio.h>

#define CONVERT_ADC_AMP(AdcValue)   ((float)((AdcParameterStruct.AdcConversionScale*(ADCValue))/(float)(AdcParameterStruct.MaxValueReadByAdc)) + (float)AdcParameterStruct.AdcConversionOffset)
#define IS_GREATER_THAN_MAX_VALUE(ADCValue)  (ADCValue > AdcParameterStruct.MaxValueReadByAdc)


static int RoundOffTo_NearInteger(float num)
{
    int tempCheck, roundNum, tempNum;

    if(num>0)
    {
        tempNum = num*10;
        tempCheck = tempNum%10;
        if(tempCheck>=5)
        {
            roundNum = num;
            roundNum++;
        }
        else
        {
            roundNum = num;
        }
     return roundNum;
        printf("\nWhole number after rounding off the given real number = %d", roundNum);
    }
    else if(num<0)
    {
        num = -(num);
        tempNum = num*10;
        tempCheck = tempNum%10;
        if(tempCheck>=5)
        {
            roundNum = num;
            roundNum--;
        }
        else
        {
            roundNum = num;
        }
     return roundNum;
        printf("\nWhole number after rounding off the given real number = -%d", roundNum);
    }
    else
    {
        return 0;
        printf("\nThe given number is 0");
    }
}

int ConvertAdcToAmp(int ADCValue, int* CurrentInAmp)
{
 int returnValue = ADCToAmpConversionNotSucessful;
 
 if(IS_GREATER_THAN_MAX_VALUE(ADCValue))
 {
  returnValue = ADCToAmpConversionNotSucessful;  
 }
 else
 {
  *CurrentInAmp = RoundOffTo_NearInteger(CONVERT_ADC_AMP(ADCValue));
   returnValue = ADCToAmpConversionSucessful;
 }
 
  return returnValue;
}

