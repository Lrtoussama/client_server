#include "Actuator_Swc_Rte.h"
Std_ReturnType Rte_Call_ReadSensorOp_OperationPort(Sensor mySensor,float64 *Sens_Level){
    //call the server operation
    Get_temp_operation(mySensor,Sens_Level);
    return RTE_E_OK;
};