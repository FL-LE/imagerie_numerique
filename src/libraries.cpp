#include "libraries.h"


/**
 *
 *	@file 		libraries.cpp
 *	@brief 		Ce fichier contient toutes les fonctions déclarées dans le fichier 'libraries.h'. Il s'occupe du traitement des vecteurs.
 *
 */


/************************************************
 *		Fonctions
 ************************************************/

float length(Vector3D v){
	return sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z));
}


int normalize(Vector3D * v){
	
	float nb;

	nb = length(*v);
		
	v->x = (1/nb) * v->x;
	v->y = (1/nb) * v->y;
	v->z = (1/nb) * v->z;
		
	return 1;
}


float scalar_product(Vector3D v1, Vector3D v2){	
	
	float scalar_product = 0.0f;
	
	scalar_product += v1.x*v2.x;
	scalar_product += v1.y*v2.y;
	scalar_product += v1.z*v2.z;
	
	return scalar_product;
}


Vector3D vectorial_product(Vector3D v1, Vector3D v2){
	
	Vector3D v;
	
	v.x = v1.y*v2.z - v1.z*v2.y;
	v.y = v1.z*v2.x - v1.x*v2.z;
	v.z = v1.x*v2.y - v1.y*v2.x;
	
	return v;
}


void reflected_ray(Vector3D v){ //TODO
	
	return;
}
