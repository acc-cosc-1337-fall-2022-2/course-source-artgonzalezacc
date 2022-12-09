//temperature.h
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
public:
    Temperature(int h, double r) : hour(h), reading(r){/*empty code block*/}
    int get_hour() const{return hour;}
    double get_reading() const {return reading;}
private:
    int hour;
    double reading;

};

#endif