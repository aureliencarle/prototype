
cmake_minimum_required(VERSION 3.12)
project(MyProject)

# Set the C++ standard for the entire project
set(CMAKE_CXX_STANDARD 17)

# Add subdirectories for projet1 and projet2
add_subdirectory(modules/projet1)
add_subdirectory(modules/projet2)

add_subdirectory(modules/module3)

# Ajouter le sous-dossier app
add_subdirectory(app)