// 
// 緯度経度が書かれたlatlng.csvを読み込み
// 1行目の位置を原点とした(x, y)に変換して
// xy.csvとして書き出す．
// 
#include <ros/ros.h>
#include "latlng2xy/latlng2xy.h"

int main(int argc, char* argv[])
{
	ros::init(argc, argv, "latlng2xy");

	LatLng2xy ll2xy;

	ll2xy.writeCSV("latlng.csv", "xy.csv");

	return 0;
}

