//temperature_data.h
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include "temperature.h"

#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

class TemperatureData
{
public:
    void save_temps(const std::vector<Temperature>& temps);
    std::vector<Temperature> get_temps();

private:
    std::string file_name{"temps.dat"};
};

#endif