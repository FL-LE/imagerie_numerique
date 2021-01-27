#ifndef __PRIMITIVE_OBJECTS_H__
#define __PRIMITIVE_OBJECTS_H__

/**
 *
 *	@file 		primitive_objects.h
 *	@version	1.0
 *
*/

#include "libraries.h"


class Sphere{			//SPHERE : Positon (x,y,z) puis RAYON
	
	public :
		//SETTER
		void set_position(int pos_x, int pos_y, int pos_z);
		void set_radius(float radius_giv);
		
		//GETTERS
		Vector3D get_position();
		int get_radius();
		
		Sphere(float pos_x, float pos_y, float pos_z, int radius_giv);
		
	private :
		Vector3D position;
		int radius;
};



class Plan{				//PLAN (par défaut : near plane puis far plane)
	
	public :
		//SETTER
		void set_position(float pos_x, float pos_y, float pos_z);
		void set_focal_distance(float dist);
		
		//GETTERS
		Vector3D get_position();
		float get_focal_distance();
		
		Plan(float pos_x, float pos_y, float pos_z, float dist);
		
	private :
		Vector3D position;
		float focal_distance;
};


#endif
