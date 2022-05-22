/*
	Copyright 2022 Fan Ziqi

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

#ifndef BSP_VIN_H
#define BSP_VIN_H
#include "bsp_define.h"
#include "main.h"

enum
{
	IS_FULL = 1,
	NEED_CHARGE,
	NEED_POWEROFF
};

void VIN_Init(void);

void init_vrefint_reciprocal(void);
float get_temprate(void);
float get_battery_voltage(void);

uint16_t adcx_get_chx_value(ADC_HandleTypeDef *ADCx, uint32_t ch);
float adcx_get_chx_value_average(ADC_HandleTypeDef *ADCx, uint32_t ch, uint8_t times);


#endif