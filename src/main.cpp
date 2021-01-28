/**
 *
 * 	@mainpage 	Projet Imagerie Numérique - M. TEXIER
 *
 *	@file 		main.cpp
 *	@author 	COLLART Quentin, LETHU Florian, MOREAU Hugo
 *
 *	@brief 		Projet intégralement en C++ permettant l'application de l'agorithme de lancer de rayons.
 *	@details	Fichier principal. Utilisé pour effectuer les tests et vérifications de configuration.
 *
*/


#include "process.h"

using namespace std;


/**
 *	@brief Fonction d'affichage de l'aide.
 *
 *	@param int mode : type d'aide à afficher
 */
void help(){

	cout << "Syntaxe : ./lanceur [FICHIER CONFIG]" << endl << endl;
}



/**
 *	MAIN FUNCTION
 *
 *	@brief La fonction main contient le choix des modes et la gestion des arguments.
 *	@param int argc, char **argv
 *
 *	@details retour 0 : OK, retour 1 : erreur mode 0, retour 2 : erreur mode 1, retour 3 : erreur mode 2, retour 4 : erreur mode 3, retour 5 : problème de syntaxe/argument
 */
int main(int argc, char * argv[]){
	
	//If there is too much arguments
	if(argc > 2 || argc < 2){
		help();
		return 1;
	}
	//If the second argument is a config file
	else if(argc == 2){
		cout << "Chargement à partir du fichier de configuration..." << endl;

		string filename = "None";
		
		int width=600, height=400;
		
		ifstream config_file(argv[1]);
		if (config_file.is_open()){

			string line;
			while(getline(config_file, line)){

				if(line[0] == '#' || line[0] == '[' || line.empty())
					continue;

				auto delimiterPos = line.find("=");
				auto name = line.substr(0, delimiterPos);
				auto value = line.substr(delimiterPos + 1);

				if(name.compare("OUTPUT_Image") == 0){			//Output image
					filename = value;
				}
				if(name.compare("OUTPUT_width") == 0){			//Output image width
					width = stoi(value);
				}
				if(name.compare("OUTPUT_height") == 0){			//Output image height
					height = stoi(value);
				}
			}
						
			//Data processing
			generate_image(filename, width, height);
			
			


			//Print the image at the end of its process
			if(filename.compare("None") != 0){
				print_image_SDL(filename, width, height);
			}
		}
		else {
			cerr << "Couldn't open config file for reading." << endl;
		}
	}

	return 0;
}
