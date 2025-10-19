#include "Rte_Type.h" 
#include "Actuator_swc.h"

/* Model step function */
void Actuator_runn(void)
{
  enum Sensor mySensor = TemSens;
  float64 TempLevel;

  (void)Rte_Call_ReadSensorOp_OperationPort(mySensor,&TempLevel);
}

/* Model initialize function */
void actuators_swc_Init(void)
{
  /* (no initialization code required) */
}