#include <iostream>
#include <SFML/Graphics.hpp>
#include "vector3d.h"

using namespace std;

int main(){
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    Vector3d vec(1, 1, 1);
    Vector3d vec2(1, 1, 1);

    // Create a circle
    sf::VertexArray line(sf::Lines, 2);
    line[0].position = sf::Vector2f(10, 10);
    line[1].position = sf::Vector2f(300, 300);

    // Main loop
    while (window.isOpen()){
        // Process events
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();  // close window when close event is received
        }

        // Clear the window
        window.clear();

        // draw shapes
        window.draw(line);

        // Display the contents of the window
        window.display();
    }

    return 0;
}
