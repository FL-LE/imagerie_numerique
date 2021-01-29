#ifndef __LIBRARIES_H__
#define __LIBRARIES_H__

/**
 *
 *	@file 		libraries.h
 *	@version	1.0
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iterator>

#include <cmath>
#include <vector>


struct Vector3D{	// Vecteur à trois dimensions
	float x;
	float y;
	float z;
};



/**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
float length(Vector3D v);


/**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
float scalar_product(Vector3D v1, Vector3D v2);


/**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
Vector3D vectorial_product(Vector3D v1, Vector3D v2);
 
 
 /**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
void reflected_ray(Vector3D v);

#endif
