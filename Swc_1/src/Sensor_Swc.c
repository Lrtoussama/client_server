#include "Rte_Type.h" 
#include "Sensor_Swc.h"

/* Model step function */
void Runn_act(void)
{
  enum Sensor mySensor = TemSens;
  float64 TempLevel;
  boolean tmpRead_1;

  /* Inport generated from: '<Root>/Bus Element In3' */
  (void)Rte_Read_Key_KeyLevel(&tmpRead_1);
  Rte_Call_ReadSensorOp_OperationPort(Sensor_n,&TemSens)
}

/* Model initialize function */
void actuators_swc_Init(void)
{
  /* (no initialization code required) */
}