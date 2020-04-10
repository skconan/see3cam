#include <ros/ros.h>
#include <nodelet/loader.h>

#include "uvc_camera/tara_ros.h"
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
	ros::init(argc, argv, "tara_ros");
	  	
	cout <<  "Tara Ros Node" << " " << "Init" << endl;
	
	uvc_camera::taraCamera camera(ros::NodeHandle(), ros::NodeHandle("~"));

	cout << "Is Camera Stereo" << " " << camera.isCameraStereo << endl;

	if ( camera.isCameraStereo == false )
	{
		ros::shutdown();
	}
	else
	{  
		ros::spin();
	}
	return 0;
}

