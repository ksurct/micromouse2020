/* 
 * imu_driver.h
 */

#ifndef __IMU_DRIVER_H__
#define __IMU_DRIVER_H__

#include <types.h>

extern bool IMU_DRIVER_ENABLED;

int init_imu_driver(void);

int start_get_imu_data(imu_data_t *data);

int get_imu_data(void);

int try_get_imu_data(void);

#endif //__IMU_DRIVER_H__
