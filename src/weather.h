/* 
 * Read temperature and humility sensor  
 * Libraries (Sketch >> Include Library >> Manage Libraies)  
 *  SimpleDHT
 */
#ifndef WEATHER_H
#define WEATHER_H

#include <Arduino.h>
#include <SimpleDHT.h>
#include <sensoriandoData.h>
#include "gpio.h"

/*
 * MACROS
 */
#define WEATHER_DEBUG

#define WEATHER_LEN     2    //Account of sensors  
#define TEMPERATURE_ID  4    //id of temperature on table Sensors
#define HUMIDITY_ID     15   //id of himidity on table Sensors

/*
 * Prototypes
 */
int weather_init(SensoriandoSensorDatum *);
int weather_read(SensoriandoSensorDatum *);

#endif
