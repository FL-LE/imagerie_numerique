#include "camera.h"

/**
 *
 *	@file 		camera.cpp
 *	@brief 		Ce fichier contient toutes les fonctions déclarées dans le fichier 'camera.h'.
 *
 */
 
 
// CONSTRUCTOR
Camera::Camera(float dir_x, float dir_y, float dir_z, int pos_x, int pos_y, int pos_z){
	
	direction.x = dir_x;
	direction.y = dir_y;
	direction.z = dir_z;
	
	position.x = pos_x;
	position.y = pos_y;
	position.z = pos_z;
}


//Getters

Vector3D Camera::get_direction(){
	return direction;
}

Vector3D Camera::get_position(){
	return position;
}


// Setters

void Camera::set_position(int pos_x, int pos_y, int pos_z){
	position.x = pos_x;
	position.y = pos_y;
	position.z = pos_z;
}

void Camera::set_direction(float dir_x, float dir_y, float dir_z){
	direction.x = dir_x;
	direction.y = dir_y;
	direction.z = dir_z;
}



