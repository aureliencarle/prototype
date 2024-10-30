#include "my_sfml_class.h"
#include <SFML/Window.hpp>

MySFMLClass::MySFMLClass() : window(sf::VideoMode(800, 600), "SFML Window") {}

void MySFMLClass::run()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // Vous pouvez dessiner ici
        window.display();
    }
}
