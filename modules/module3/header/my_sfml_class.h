#ifndef MY_SFML_CLASS_H
#define MY_SFML_CLASS_H

#include <SFML/Graphics.hpp>

class MySFMLClass
{
public:
    MySFMLClass();
    void run();

private:
    sf::RenderWindow window;
};

#endif // MY_SFML_CLASS_H