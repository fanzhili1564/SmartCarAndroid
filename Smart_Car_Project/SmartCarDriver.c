#include <stdint.h>
#include"SmartCarDriver.h"

static uint16_t * car_Switch_Adress;

static SmartCar_Wheel_Unit * Left_Front_Wheel_Unit;

static SmartCar_Wheel_Unit * Right_Front_Wheel_Unit;

static SmartCar_Wheel_Unit * Left_Rear_Wheel_Unit;

static SmartCar_Wheel_Unit * Right_Rear_Wheel_Unit;

void SmartCarDriver_Create( uint16_t *car_Switch_address ) {
	car_Switch_Adress = car_Switch_address;
	*car_Switch_Adress = 0;
}

void SmartCarDriver_init_Left_Front_Wheel_Unit( SmartCar_Wheel_Unit *front_Wheel_Unit ) {
	Left_Front_Wheel_Unit = front_Wheel_Unit;
	(*Left_Front_Wheel_Unit).Wheel_EN_IO = car_Switch_Adress;
	(*Left_Front_Wheel_Unit).Wheel_IN_A = 1;
	(*Left_Front_Wheel_Unit).Wheel_IN_B = 0;
}

void init_SmartCar_Wheel_Unit( SmartCar_Wheel_Unit *smartCar_Wheel_Unit, SmartCar_Wheel_Unit *current_Wheel_Unit ) {
	current_Wheel_Unit = smartCar_Wheel_Unit;
	(*current_Wheel_Unit).Wheel_EN_IO = car_Switch_Adress;
	(*current_Wheel_Unit).Wheel_IN_A = 1;
	(*current_Wheel_Unit).Wheel_IN_B = 0;
}

void SmartCarDriver_init_Right_Front_Wheel_Unit( SmartCar_Wheel_Unit * front_Wheel_Unit ) {
	Right_Front_Wheel_Unit = front_Wheel_Unit;
	(*Right_Front_Wheel_Unit).Wheel_EN_IO = car_Switch_Adress;
	(*Right_Front_Wheel_Unit).Wheel_IN_A = 0;
	(*Right_Front_Wheel_Unit).Wheel_IN_B = 0;
}

void SmartCarDriver_init_Left_Rear_Wheel_Unit( SmartCar_Wheel_Unit * rear_Wheel_Unit ) {
	Left_Rear_Wheel_Unit = rear_Wheel_Unit;
	(*Left_Rear_Wheel_Unit).Wheel_EN_IO = car_Switch_Adress;
	(*Left_Rear_Wheel_Unit).Wheel_IN_A = 0;
	(*Left_Rear_Wheel_Unit).Wheel_IN_B = 0;
}

void SmartCarDriver_init_Right_Rear_Wheel_Unit( SmartCar_Wheel_Unit * rear_Wheel_Unit ) {
	Right_Rear_Wheel_Unit = rear_Wheel_Unit;
	(*Right_Rear_Wheel_Unit).Wheel_EN_IO = car_Switch_Adress;
	(*Right_Rear_Wheel_Unit).Wheel_IN_A = 0;
	(*Right_Rear_Wheel_Unit).Wheel_IN_B = 0;
}

void SmartCar_TurnOn() {
	*car_Switch_Adress = 1;
}

void SmartCar_TurnOff() {
	*car_Switch_Adress = 0;
}