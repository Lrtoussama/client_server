#include "Rte_Type.h"
#include "Sensor_Swc_Rte.h"

/* Model step function */
extern void Get_temp_operation(enum Sensor mySensor,float64 *Sens_Level);

/* Model initialize function */
extern void actuators_swc_Init(void);