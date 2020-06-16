#include "Acquisition.h"

Acquisition::Acquisition(Date data, Time time, double air_temp, double barometric_press, double dew_point, double relative_humidity, double wind_dir, double wind_gust, double wind_speed) : _date{ date }, _Time{ Time }, _air_temp{ air_temp }, _barometric_press{ barometric_press }, _dew_point{ dew_point }, _relative_umidity{ relative_umidity }, _wind_dir{ wind_dir }, _wind_gust{ wind_gust }, _wind_speed{ wind_speed } {};

Acquisition::get_date() {
	return _date;
}

Acquisition::get_time() {
	return _time;
}
Acquisition::get_air_temp() {
	return _air_temp;
}
Acquisition::get_barometric_press() {
	return _barometric_press;
}

Acquisition::get_dew_point() {
	return _dew_point;
}

Acquisition::get_relative_humidity() {
	return _relative_humidity;
}

Acquisition::get_wind_dir() {
	return _wind_dir;
}

Acquisition::get_wind_gust() {
	return _wind_gust;
}

Acquisition::get_wind_speed() {
	return _wind_speed;
}
