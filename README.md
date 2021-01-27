
# Projet d'Imagerie Numérique


Le but de ce projet est d’implémenter l’algorithme de lancer de rayon vu en cours.

Ce projet a été fait sous Linux Ubuntu 20.04. Les librairies installées sont visibles dans la section **Version**.


Les fonctions implémentées lors de ce projet sont les suivantes :
 - [x] Effectuation d'une bibliothèque mathématique de vecteurs à trois dimensions
 - [ ] Gestion des sphères, plans et faces triangulaires comme primitives
 - [ ] Effectuation d'un lancer de rayon avec un modèle de matériau de Blinn-Phong
 - [x] Sauvegarde de l'image dans un fichier de sortie (.bmp)

D'autres fonctionnalités ont aussi été implémentées :
 - [x] Chargement d’objet depuis un fichier (.obj) en paramètre
 - [x] Afficher l’image calculée dans une fenêtre SDL
 - [ ] Réflexion et réfraction avec plusieurs niveaux de récursivité



## Compilation


Afin de compiler le projet écrit en C++, il faut se placer dans le dossier src et compiler le tout à l'aide du Makefile disponible (utilise le compilateur g++). Les commandes suivantes compilent et vident les fichiers de sortie .o :

```
cd ./src
make
make clean
```

> Le **lanceur** se trouve dans le dossier *.bin*



## Usage


Pour lancer l'application :

```bash
./lanceur [FICHIER_CONFIG.obj]
```

Once the configuration file (**bin/config.obj**) has been completed, here is a launch example : 
```bash
./lanceur config.obj
```



## Version


Project version : 1.0

G++ version : (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
SDL 2 version : 2.0.14
FreeImage version : 3.18

Copyright (C) 2019 Free Software Foundation, Inc.



## Authors


COLLART Quentin, LETHU Florian, MOREAU Hugo

