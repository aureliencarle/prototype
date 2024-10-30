cmake_minimum_required(VERSION 3.12)
project(app)

# Copier comparaison.py dans le répertoire de build
install(FILES comparaison.py DESTINATION ${CMAKE_INSTALL_PREFIX}/app)