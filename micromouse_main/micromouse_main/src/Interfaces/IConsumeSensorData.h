/* 
 * IConsumeSensorData.h
 *
 * Author: Dylan Staatz
 */


#ifndef __I_CONSUME_SENSOR_DATA_H__
#define __I_CONSUME_SENSOR_DATA_H__


#include "../Types/SensorData.h"


class IConsumeSensorData
{
public:

    virtual void consumeSensorData(SensorData & data);

};

#endif //__I_CONSUME_SENSOR_DATA_H__