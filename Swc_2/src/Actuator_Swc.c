#include "Actuator_Swc.h"
#include <stdio.h>
/* Model step function */
void Actuator_runn(void)
{
  printf(" we are in the Actuator runnable\n");
  Sensor mySensor = TemSens;
  float64 TempLevel;

  (void)Rte_Call_ReadSensorOp_OperationPort(mySensor,&TempLevel);
  printf(" The temperature level is : %f \n",TempLevel);
}

/* Model initialize function */
void actuators_Swc_Init(void)
{
  /* (no initialization code required) */
}