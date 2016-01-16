#pragma once
#include <stdint.h>

typedef struct {
	uint16_t * Wheel_EN_IO;
	uint16_t Wheel_IN_A;
	uint16_t Wheel_IN_B;

} SmartCar_Wheel_Unit;

void SmartCarDriver_Create( uint16_t *wheelAddress_EN_a );

void SmartCarDriver_init_Left_Front_Wheel_Unit( SmartCar_Wheel_Unit *wheel_unit );

void SmartCarDriver_init_Right_Front_Wheel_Unit( SmartCar_Wheel_Unit *front_Wheel_Unit );

void SmartCarDriver_init_Left_Rear_Wheel_Unit( SmartCar_Wheel_Unit *rear_Wheel_Unit );

void SmartCarDriver_init_Right_Rear_Wheel_Unit( SmartCar_Wheel_Unit *rear_Wheel_Unit );

void SmartCar_TurnOn();

void SmartCar_TurnOff();

void init_SmartCar_Wheel_Unit( SmartCar_Wheel_Unit *smartCar_Wheel_Unit, SmartCar_Wheel_Unit *current_Wheel_Unit );
