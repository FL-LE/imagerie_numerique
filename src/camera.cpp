#include "camera.h"

/**
 *
 *	@file 		camera.cpp
 *	@brief 		Ce fichier contient toutes les fonctions déclarées dans le fichier 'camera.h'.
 *
 */
 
 
 // CONSTRUCTOR
Camera::Camera(float dir_x, float dir_y, float dir_z, int plan_x, int plan_y){
	
	direction.x = dir_x;
	direction.y = dir_y;
	direction.z = dir_z;
	
	pos_plan_x = plan_x;
	pos_plan_y = plan_y;
}


//Getters

Vector3D Camera::get_direction(){
	
	return direction;
}

int Camera::get_pos_plan_x(){
	return pos_plan_x;
}

int Camera::get_pos_plan_y(){
	return pos_plan_y;
}


// Setters

void Camera::set_pos_plan(int plan_x, int plan_y){
	pos_plan_x = plan_x;
	pos_plan_y = plan_y;
}

void Camera::set_direction(float dir_x, float dir_y, float dir_z){
	direction.x = dir_x;
	direction.y = dir_y;
	direction.z = dir_z;
}



/************************************************
 *		Fonctions
 ************************************************/

void temp1(){
	return;
}
