#ifndef __PROCESS_H__
#define __PROCESS_H__

/**
 *
 *	@file 		process.h
 *	@version	1.0
 *
*/

// OBJECTS
#include "camera.h"
#include "intersections.h"
#include "light_source.h"
#include "materials.h"
#include "primitive_objects.h"
#include "rays.h"
#include "scene.h"

// LIBRARIES
#include <FreeImage.h> //FreeImage inclusion
#include <SDL2/SDL.h> //SDL2 inclusion


using namespace std;


/**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
void print_image_SDL(std::string str, int width, int height);


/**
 *	@brief 		Fonction
 *	@details	
 *	@param		
 */
void generate_image(std::string filename, int width, int height);


#endif
