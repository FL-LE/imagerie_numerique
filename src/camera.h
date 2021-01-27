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
		//SETTER
		void set_pos_plan(int plan_x, int plan_y);
		void set_direction(float dir_x, float dir_y, float dir_z);
		
		//GETTERS
		Vector3D get_direction();
		int get_pos_plan_x();
		int get_pos_plan_y();
		
		Camera(float dir_x, float dir_y, float dir_z, int plan_x, int plan_y);
		
	private :
		Vector3D direction;
		int pos_plan_x;
		int pos_plan_y;
};


/**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
void temp1();


#endif
