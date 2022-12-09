//temperature_data.cpp
#include "temperature_data.h"

using std::cout; using std::ifstream; using std::ofstream;

void TemperatureData::save_temps(const std::vector<Temperature>& temps)
{
    ofstream file;

    cout<<"Open file\n";
    file.open(file_name);
    
    cout<<"Writing to file...\n";

    for(auto temp: temps)
    {
        file<<temp.get_hour();
        file<<" ";
        file<<temp.get_reading();
        file<<"\n";
    }
    cout<<"close file\n";
    file.close();
}

std::vector<Temperature> TemperatureData::get_temps()
{
    std::vector<Temperature> temps;

    auto hour = 0;
    auto reading = .1;
    
    ifstream file;
    cout<<"\nOpen file\n";
    file.open(file_name);

    cout<<"Read from file\n";
    if(file.is_open())
    {
        while(file>>hour>>reading)
        {
            Temperature temp(hour, reading);
            temps.push_back(temp);
        }
    }
    cout<<"Close file\n";
    file.close();

    return temps;
}