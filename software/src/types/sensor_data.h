/* 
 * sensor_data.h
 */


#ifndef __SENSOR_DATA_H__
#define __SENSOR_DATA_H__


#include "types.h"


typedef struct
{
    distance_data_t distance_data;
    encoder_data_t encoder_data;
	float time_data;
#ifdef IMU_ENABLE
    imu_data_t imu_data;
#endif // IMU_ENABLE
} sensor_data_t;


#endif //__SENSOR_DATA_H__
