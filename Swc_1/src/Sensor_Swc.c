#include "Sensor_Swc.h"
/* Model step function */
void Get_temp_operation(Sensor mySensor,float64 *Sens_Level)
{
  if (mySensor == TemSens)
  {
    *Sens_Level = 25.0;
  }else if (mySensor == HumiditySens)
  {
    *Sens_Level = 60.0;
  }else if (mySensor == PressionSens) 
  {
    *Sens_Level = 1013.25;
  }

}

/* Model initialize function */
void sensor_Swc_Init(void)
{
  /* (no initialization code required) */
}