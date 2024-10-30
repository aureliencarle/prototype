cmake_minimum_required(VERSION 3.12)
project(module3)

# Inclure les fichiers d'en-tête
include_directories(header)

# Ajouter les fichiers source
set(SOURCES src/my_sfml_class.cpp main.cpp)

# Trouver la bibliothèque SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Créer l'exécutable
add_executable(module3 ${SOURCES})

# Lier SFML à l'exécutable
target_link_libraries(module3 sfml-graphics sfml-window sfml-system)