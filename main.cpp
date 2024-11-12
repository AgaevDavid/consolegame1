#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    sf::SoundBuffer buffer;
    buffer.loadFromFile("C:/Users/Admin/Desktop/С++/first step/nyan.ogg");

    sf::Sound sound;
    sound.setBuffer(buffer);

    sf::Texture texture;
    texture.loadFromFile("C:/Users/Admin/Desktop/С++/first step/cat.jpg");
    sf::Sprite sprite(texture);

    sf::Sprite catsprite;
    catsprite.setTexture(texture);
    catsprite.setTextureRect(sf::IntRect(30, 750, 90, 110));
    catsprite.setPosition(400, 300);

    

    float CurrentFrame = 0;
    sf::Clock clock;

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asMicroseconds();
        clock.restart();
        time = time / 800;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        CurrentFrame += 0.0035 * time;
        if (CurrentFrame > 3)
            CurrentFrame -= 3;
        catsprite.setTextureRect(sf::IntRect(15 + 140 * int(CurrentFrame), 750, 115, 110));
        catsprite.move(0, 0); // Движение влево


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            CurrentFrame += 0.01 * time;
            if (CurrentFrame > 3)
                CurrentFrame -= 3;
            catsprite.setTextureRect(sf::IntRect(15 + 140 * int(CurrentFrame), 470, 115, 110));
            catsprite.move(-0.15 * time, 0); 
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            CurrentFrame += 0.01 * time;
            if (CurrentFrame > 3)
                CurrentFrame -= 3;
            catsprite.setTextureRect(sf::IntRect(15 + 140 * int(CurrentFrame), 188, 115, 110));
            catsprite.move(0.15 * time, 0);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            CurrentFrame += 0.01 * time;
            if (CurrentFrame > 3)
                CurrentFrame -= 3;
            catsprite.setTextureRect(sf::IntRect(15 + 140 * int(CurrentFrame), 320, 115, 110));
            catsprite.move(0, -0.15 * time);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            CurrentFrame += 0.01 * time;
            if (CurrentFrame > 3)
                CurrentFrame -= 3;
            catsprite.setTextureRect(sf::IntRect(15 + 140 * int(CurrentFrame), 40, 115, 110));
            catsprite.move(0, 0.15 * time);
        }

        if (event.type == sf::Event::MouseButtonPressed) 
        {
            // Проверяем, была ли нажата левая кнопка мыши на изображении
            if (event.mouseButton.button == sf::Mouse::Left) 
            {
                if (sprite.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y))) 
                {
                    sound.play();
                }
            }
        }

        window.clear(sf::Color::White);
        window.draw(catsprite);
        window.display();
    }

    return 0;
}