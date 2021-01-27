#include "primitive_objects.h"

/**
 *
 *	@file 		primitive_objects.cpp
 *	@brief 		Ce fichier contient toutes les fonctions déclarées dans le fichier 'camera.h'.
 *
 */


/************************************************
 *		Fonctions
 ************************************************/

/**
 *				SPHERE
 */
 
//CONSTRUCTOR
Sphere::Sphere(float pos_x, float pos_y, float pos_z, int radius_giv){
	position.x = pos_x;
	position.y = pos_y;
	position.z = pos_z;
	
	radius = radius_giv;
}

//SETTERS
void Sphere::set_position(int pos_x, int pos_y, int pos_z){
	position.x = pos_x;
	position.y = pos_y;
	position.z = pos_z;
}

void Sphere::set_radius(float radius_giv){
	radius = radius_giv;
}

//GETTERS
Vector3D Sphere::get_position(){
	return position;
}

int Sphere::get_radius(){
	return radius;
}


/**
 *				PLAN
 */

//CONSTRUCTOR
Plan::Plan(float pos_x, float pos_y, float pos_z, float dist){
	position.x = pos_x;
	position.y = pos_y;
	position.z = pos_z;
	
	focal_distance = dist;
}

//SETTERS
void Plan::set_position(float pos_x, float pos_y, float pos_z){
	position.x = pos_x;
	position.y = pos_y;
	position.z = pos_z;
}

void Plan::set_focal_distance(float dist){
	focal_distance = dist;
}


//GETTERS
Vector3D Plan::get_position(){
	return position;
}

float Plan::get_focal_distance(){
	return focal_distance;
}
