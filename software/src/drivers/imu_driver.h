/* 
 * imu_driver.h
 */

#ifndef __IMU_DRIVER_H__
#define __IMU_DRIVER_H__

#include "../types/types.h"

extern bool IMU_DRIVER_ENABLED;

int init_imu_driver(void);

int get_imu_data(imu_data_t *data);

#endif //__IMU_DRIVER_H__
