#ifndef ACQUISITION_HPP
#define ACQUISITION_HPP

#include <string>

struct Date {
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

struct Time {
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
};

class Acquisition {
public:
	Acquisition(Date date, Time time, double air_temp, double barometric_press, double dew_point, double relative_humidity, double wind_dir, double wind_gust, double wind_speed);
	std::string get_date();
	std::string get_time();
	double get_air_temp();
	double get_barometric_press();
	double get_dew_point();
	double get_relative_humidity();
	double get_wind_dir();
	double get_wind_gust();
	double get_wind_speed();
private:
	Date _date;
	Time _time;
	double _air_temp;
	double _barometric_press;
	double _dew_point;
	double _relative_humidity;
	double _wind_dir;
	double _wind_gust;
	double _wind_speed;
};

#endif
