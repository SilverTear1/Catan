#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

int main(char **argv, int argc)
{
    // Create the main rendering window
    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SFML Graphics");
    
    // Start game loop
	while (App.isOpen())
    {
        // Process events
        sf::Event Event;
		while (App.pollEvent(Event))
        {
            // Close window : exit
			if (Event.type == sf::Event::Closed)
				App.close();
        }

        // Clear the screen (fill it with black color)
        App.clear();

        // Display window contents on screen
        App.display();
    }

    return EXIT_SUCCESS;
}