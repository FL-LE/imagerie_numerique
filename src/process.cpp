#include "process.h"

/**
 *
 *	@file 		process.cpp
 *	@brief 		Ce fichier contient toutes les fonctions déclarées dans le fichier 'process.h'.
 *
 */




/************************************************
 *		Fonctions
 ************************************************/

/**
 *	@brief Fonction d'affichage d'image.
 *
 *	@param str : nom de l'image
 *	@param int : longueur de l'image
 *	@param int : largeur de l'image
 */
void print_image_SDL(std::string str, int width, int height){

	SDL_Window *win = NULL;
	SDL_Renderer *renderer = NULL;
	SDL_Texture *bitmapTex = NULL;
	SDL_Surface *bitmapSurface = NULL;

	SDL_Init(SDL_INIT_VIDEO);

	win = SDL_CreateWindow("Image finale", 50, 50, width, height, 0);

	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

	bitmapSurface = SDL_LoadBMP((char *)str.c_str());
	bitmapTex = SDL_CreateTextureFromSurface(renderer, bitmapSurface);
	SDL_FreeSurface(bitmapSurface);

	while (1) {
	SDL_Event e;
	if (SDL_PollEvent(&e)) {
	    if (e.type == SDL_QUIT) {
		break;
	    }
	}

	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, bitmapTex, NULL, NULL);
	SDL_RenderPresent(renderer);
	}

	SDL_DestroyTexture(bitmapTex);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);

	SDL_Quit();

	return;
}


/**
 *	@brief Fonction d'affichage d'image.
 *
 *	@param str : nom de l'image
 *	@param int : longueur de l'image
 *	@param int : largeur de l'image
 */
void generate_image(std::string filename, int width, int height){
	
	const char * file = (const char *)filename.c_str();

	RGBQUAD color;
	color.rgbRed = 0;
	color.rgbBlue = 125;
	
	FIBITMAP* image = FreeImage_Allocate(width, height, 32);
	
	if(!image){
		cerr << "Can't allocate image" << endl;
		return;
	}
	
	//Default objects and behavior set here
	float focal_distance = 1.0f;
	
	Camera camera(0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f); //Direction and then position
	
	// PLANS
	
	//Image plan
	Plan image_plane(camera.position.x*camera.direction.x, camera.position.y*camera.direction.y, (camera.position.z + focal_distance)*camera.direction.z, focal_distance); // si distance focale = 1 de caméra à plan de l'image
	
	if((float)(width/height) == 1.33f){	// RATIO : 4/3
		Vector3D image_plane_top_left;
		image_plane_top_left.x = -1.0f;
		image_plane_top_left.y = 0.75f;
		image_plane_top_left.z = -1.0f;

		Vector3D image_plane_bottom_right;
		image_plane_bottom_right.x = 1.0f;
		image_plane_bottom_right.y = -0.75f;
		image_plane_bottom_right.z = -1.0f;
	}
	else{
		cerr << "This program does not support another image ratio than the 4/3, please, check the image configuration in the config.obj file." << endl;
		return;
	}
	
	
	Plan near_plane(camera.position.x*camera.direction.x, camera.position.y*camera.direction.y, (camera.position.z + focal_distance + 0.5f)*camera.direction.z, focal_distance + 0.5f);
	Plan far_plane(camera.position.x*camera.direction.x, camera.position.y*camera.direction.y, (camera.position.z + focal_distance + 150.0f)*camera.direction.z, focal_distance + 150.0f);
	
	
	// DATA PROCESSING HERE......................... TODO !!!!!
	
	
	//BASIC GENERATION EXAMPLE
	for (size_t i = 0; i < width; i++)
	{
		for (size_t j = 0; j < height; j++)
		{
			color.rgbGreen = (double) i / width * 255.0;

			FreeImage_SetPixelColor(image, i, j, &color);
		}
	}

	if(FreeImage_Save(FIF_BMP, image, file))
		cout << "Image saved at " << filename << endl;

	return;
}
