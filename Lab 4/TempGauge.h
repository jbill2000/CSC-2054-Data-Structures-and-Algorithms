//Created by Jeremy Bill as part of Lab 4.
#pragma once
class TemperatureGauge
{
	//public members
public:
	TemperatureGauge();
    TemperatureGauge(double temperature_in);
	double getTempinF()const;
	void setTempinF(double temperature);
	double getTempinC();
	//private members
private:
	double temperature;
};