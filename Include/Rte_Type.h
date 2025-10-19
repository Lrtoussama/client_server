
/*
 * AUTOSAR RTE Type Definitions
 * Based on AUTOSAR Standard Types
 */
enum Sensor {
    TemSens,     // 0
    HumiditySens,    // 1
    PressionSens    // 2
};

/* Basic AUTOSAR types */
typedef unsigned char boolean;
typedef boolean Boolean;
typedef double Double; 

/* AUTOSAR Standard Return Type */
typedef unsigned char Std_ReturnType;
#define NULL ((void*)0)
#define TRUE ((Boolean)1)
#define FALSE ((Boolean)0)
#define float64 double
/* AUTOSAR Standard Return Values */
#define RTE_E_OK                    ((Std_ReturnType)0x00)
#define RTE_E_INVALID               ((Std_ReturnType)0x01)
#define RTE_E_UNCONNECTED          ((Std_ReturnType)0x02)
#define RTE_E_TIMEOUT              ((Std_ReturnType)0x03)
#define RTE_E_LIMIT                ((Std_ReturnType)0x04)
#define RTE_E_NO_DATA              ((Std_ReturnType)0x05)
#define RTE_E_TRANSMIT_ACK         ((Std_ReturnType)0x06)
#define RTE_E_NEVER_RECEIVED       ((Std_ReturnType)0x07)
#define RTE_E_LOST_DATA            ((Std_ReturnType)0x08)
#define RTE_E_MAX_AGE_EXCEEDED     ((Std_ReturnType)0x09) 