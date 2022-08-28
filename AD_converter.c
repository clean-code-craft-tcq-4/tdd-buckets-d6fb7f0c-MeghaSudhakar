
AD_Converter(int value)
{
  //If the A2D reports 1146, it is 10 Amps * 1146 / 4094 = 2.799 Amps, which is rounded-off to the nearest integer 3
  amps = 10 * value / 4094;
}
