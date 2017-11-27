#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode({1024, 768}), " Temur Meylikov Shuhratovich");
    window.clear(sf::Color(224, 255, 255));

    sf::RectangleShape shape1;
    shape1.setSize({20, 300});
    shape1.setPosition({140, 160});
    shape1.setRotation({0});
    shape1.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({250, 20});
    shape2.setPosition(30, 160);
    shape2.setRotation({0});
    shape2.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({15, 300});
    shape3.setPosition({330, 160});
    shape3.setRotation({0});
    shape3.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({15, 130});
    shape4.setPosition({330, 160});
    shape4.setRotation({-45});
    shape4.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({15, 130});
    shape5.setPosition({500, 150});
    shape5.setRotation({45});
    shape5.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({15, 300});
    shape6.setPosition({496, 160});
    shape6.setRotation({0});
    shape6.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({15, 300});
    shape7.setPosition({340, 160});
    shape7.setRotation(0);
    shape7.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({15, 70});
    shape8.setPosition({580, 165});
    shape8.setRotation({-65});
    shape8.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({15, 70});
    shape9.setPosition({580, 160});
    shape9.setRotation({48});
    shape9.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({15, 220});
    shape10.setPosition({525, 215});
    shape10.setRotation({-32});
    shape10.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({15, 70});
    shape11.setPosition({645, 390});
    shape11.setRotation({48});
    shape11.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({15, 70});
    shape12.setPosition({535, 415});
    shape12.setRotation({-65});
    shape12.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape12);

    sf::RectangleShape shape13;
    shape13.setSize({15, 290});
    shape13.setPosition({700, 170});
    shape13.setRotation({0});
    shape13.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape13);

    sf::RectangleShape shape14;
    shape14.setSize({15, 90});
    shape14.setPosition({800, 300});
    shape14.setRotation({90});
    shape14.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape14);
    window.display();

    sf::RectangleShape shape15;
    shape15.setSize({15, 290});
    shape15.setPosition({800, 170});
    shape15.setRotation({0});
    shape15.setFillColor(sf::Color(0xFF, 0, 0xFF));
    window.draw(shape15);
    window.display();

    sf::sleep(sf::seconds(3));
}