/* 
 * encoder_driver.h
 */

#ifndef __ENCODER_DRIVER_H__
#define __ENCODER_DRIVER_H__

#include "../types/types.h"

extern bool ENCODER_DRIVER_ENABLED;

int init_encoder_driver(void);

int get_encoder_values(encoder_data_t *values);

#endif //__ENCODER_DRIVER_H__
