#ifndef __CAMERA_H__
#define __CAMERA_H__

/**
 *
 *	@file 		camera.h
 *	@version	1.0
 *
*/

#include "libraries.h"

class Camera{
	
	public :
	
		Vector3D position;
	
		//SETTER
		void set_position(int pos_x, int pos_y, int pos_z);
		void set_direction(float dir_x, float dir_y, float dir_z);
		
		//GETTERS
		Vector3D get_direction();
		Vector3D get_position();
		int get_pos_plan_y();
		
		Camera(float dir_x, float dir_y, float dir_z, int pos_x, int pos_y, int pos_z);
		
	private :
		Vector3D direction;
};


#endif
