#include<iostream>
#include<SFML/Graphics.hpp>
#include<vector>

using namespace std;

int windowWidth = 800, windowhight = 800;
float platformWidth = windowWidth, platformHight = windowhight;
float tunersize = 40;
float screwSize = 10;
float switchSize = 40;
float roundButtonSize = 30;
float arrowSize = 60;
float squareButtonSize = 60;
float doubleButtonWidth = 45, doubleButtonHight = 150;
float scrollWidth = 30, scrollHight = 150;
int counter = 0;
float mousePositionX, mousePositionY;
int scroll1 = 0, scroll2 = 0, scroll3 = 0, scroll4 = 0;
int tunerRotate[6] = { };


sf::RectangleShape platform;
sf::CircleShape tuner[6];
sf::CircleShape screw[4];
sf::CircleShape switch_[2];
sf::CircleShape roundButton;
sf::CircleShape arrow;
sf::RectangleShape squareButton[12];
sf::RectangleShape doubleButton[2];
sf::RectangleShape scroll[4];

sf::Texture kaplama[14];
sf::Texture tunerTexture[6];
sf::Texture squareButtonTexture[12];
string tunerKaplama[6] = { "tuner1.png","tuner2.png", "tuner3.png", "tuner4.png", "tuner5.png","tuner6.png" };
string squareKaplama[12] = { "Square Button1.png","Square Button2.png", "Square Button3.png", "Square Button4.png", "Square Button5.png", "Square Button6.png", "Square Button7.png", "Square Button8.png", "Square Button9.png", "Square Button10.png", "Square Button11.png", "Square Button12.png" };

sf::Event event;