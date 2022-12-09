#include "temperature_data.h"

using std::cout;
using std::vector;

int main() 
{
	vector<Temperature> temps;
	temps.push_back(Temperature(3, 99));
	temps.push_back(Temperature(6, 100.1));
	temps.push_back(Temperature(9, 98.9));

	TemperatureData data;
	data.save_temps(temps);

	vector<Temperature> in_temps = data.get_temps();

	for(auto temp: in_temps)
	{
		cout<<temp.get_hour()<<" "<<temp.get_reading()<<"\n";
	}

	return 0;
}