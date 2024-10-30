cmake_minimum_required(VERSION 3.12)
project(projet1)

# Indique où se trouvent les fichiers d'en-tête
include_directories(header)

# Rechercher la bibliothèque pybind11
find_package(pybind11 REQUIRED)

# Ajouter les fichiers source
set(SOURCES src/my_class.cpp bindings/bindings.cpp)

# Créer un module Python avec pybind11
pybind11_add_module(my_module ${SOURCES})


# Ajouter un exécutable pour test.cpp
add_executable(test_my_class main.cpp src/my_class.cpp)

# Lier le nouvel exécutable avec les sources de my_class
target_link_libraries(test_my_class PRIVATE pybind11::module)