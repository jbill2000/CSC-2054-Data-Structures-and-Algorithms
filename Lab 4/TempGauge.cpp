//Created by Jeremy Bill as part of Lab 4.
#include <iostream>
#include "TempGauge.h"
using namespace std;
//defualt constructor
TemperatureGauge::TemperatureGauge()
{
    temperature = 0;
   
}
//constructor that takes in double
TemperatureGauge:: TemperatureGauge(double temperature_in)
{
    temperature = temperature_in;
    
}
//accessor to return temp in f
double TemperatureGauge::getTempinF()const
{
	return temperature;
}
//sets temp in f by mutating a double
void TemperatureGauge::setTempinF(double temperature_in)
{
    if (temperature_in < -30)
    {
        temperature = -30;
    }

    else if (temperature_in > 180)
    {
        temperature = 180;
    }

    else
        temperature = temperature_in;

}
//gets temp in c after doing some math
double TemperatureGauge::getTempinC()
{
    double ctemp = (temperature - 32)*5/9;
    
    return ctemp;
}