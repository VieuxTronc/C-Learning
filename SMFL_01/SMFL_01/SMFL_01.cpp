// SMFL_01.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

//Mettre fichier include dans cpp plutot que dans H

#include "pch.h"
#include <iostream>
#include "Vehicule.h"
#include "MonsterTruck.h"
#include "FormulaOne.h"
#include <conio.h>
#include <vector>
//#include <Window/Window.hpp>
//#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
//#include <SFML/Graphics/RenderWindow.hpp>
//#include <SFML/Graphics/Texture.hpp>
//#include <SFML/Graphics/Sprite.hpp>

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML 2.1 Template");
	sf::Clock deltaClock;

	float speed = 0.0f; 

	// Start the game loop
	while (window.isOpen())
	{
		sf::Time dt = deltaClock.restart();
		printf("%f\n", 1.0f / dt.asSeconds());

		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Close window : exit
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear screen
		window.clear();

		//Game loop
		sf::Texture myTex;
		myTex.loadFromFile("../data/image.jpg");
		sf::Sprite sprite; 
		sprite.setTexture(myTex);
		speed += dt.asMilliseconds() * 0.1f;
		sprite.setPosition(sf::Vector2f(speed, speed));
		window.draw(sprite);


		// Update the window
		window.display();
	}

	return 0;
	//FormulaOne* pF1 = new FormulaOne();
	//MonsterTruck* pMonster = new MonsterTruck();
	//
	//
	//pF1->Print();
	//
	//std::vector<Vehicule*> vehiculeList; //Le vector est un tableau flexible, on va y mettre des pointeurs de la classe vehicule
	//
	//vehiculeList.push_back(pF1); //On met une F1 dans un liste de vehicules pointer parce que F1 hérite de Vehicule :) 
	//vehiculeList.push_back(pMonster);
	//
	//pF1->wheel = 4.0f;
	//float test = pF1->wheel + 5.0f;
	//
	//for (size_t i = 0; i < vehiculeList.size(); i++)
	//{
	//	vehiculeList[i]->Print(); 
	//}
	//
	//for (size_t i = 0; i < vehiculeList.size(); i++)
	//{
	//	delete vehiculeList[i];
	//}
	//
	//_getch();
	//
	//return 0;
}