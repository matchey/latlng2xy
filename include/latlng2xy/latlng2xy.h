// (latitude, longitude) --> (x, y)
// 狭い範囲限定 経線を並行と近似して
// #include<ros/ros.h>
//
#ifndef LATLNG2XY_H
#define LATLNG2XY_H

class LatLng2xy
{
	// ros::NodeHandle n;
	// ros::Publisher pub;
	
	double lat1, lng1;
	double lat2, lng2;
	double x, y;

	public:
	LatLng2xy();
	void set1(double, double); //latitude1, langitude1
	void set2(double, double); //latitude2, langitude2
	void get(double&, double&); //x, y
	void calc();
	void calc(double(&)[2], double(&)[2], double(&)[2]);
	int writeCSV(const std::string, const std::string);
	void pub4vis();
};

#endif

