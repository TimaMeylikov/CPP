#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({1024, 700}), "House");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({500, 325});
    shape1.setRotation(0);
    shape1.setPosition({90, 350});
    shape1.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({80, 200});
    shape2.setPosition({150, 500});
    shape2.setFillColor(sf::Color(0xF, 0xFF, 0xFF));
    window.draw(shape2);

    sf::ConvexShape tr;
    tr.setFillColor(sf::Color(150, 0, 150));
    tr.setPosition({325, 200});
    tr.setPointCount(4);
    tr.setPoint(0, {-290, +160});
    tr.setPoint(1, {-160, 0});
    tr.setPoint(2, {+160, 0});
    tr.setPoint(3, {+290, +160});
    window.draw(tr);

    sf::RectangleShape shape3;
    shape3.setSize({50, 125});
    shape3.setPosition({250, 175});
    shape3.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({120, 50});
    shape4.setRotation(0);
    shape4.setPosition({210, 125});
    shape4.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape4);

    sf::CircleShape shape5(20);
    shape5.setPosition({250, 100});
    shape5.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape5);

    sf::CircleShape shape6(23);
    shape6.setPosition({290, 50});
    shape6.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape6);

    sf::CircleShape shape7(26);
    shape7.setPosition({350, 35});
    shape7.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape7);

    sf::CircleShape shape8(29);
    shape8.setPosition({400, 10});
    shape8.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape8);

    window.display();

    sf::sleep(sf::seconds(5));
}