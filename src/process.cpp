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
	
	Camera camera(0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f); //Direction and then position
	
	
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
