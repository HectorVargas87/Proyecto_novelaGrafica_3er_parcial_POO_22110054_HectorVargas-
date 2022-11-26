#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Novel {

public:
	void intro();
	void spring();
	void summer();
	void autumn();
	void winter();
	void ending();
};

void Novel::intro() {
	RenderWindow window(VideoMode(800, 534), "Mi Historia");
	sf::Texture _intro;
	_intro.loadFromFile("IMAGEN/_inicio.png");
	sf::Sprite spriteIntro;
	Music music0;
	music0.openFromFile("MUSIC/_intro.ogg");
	music0.play();
	spriteIntro.setTexture(_intro);
	window.clear();
	window.draw(spriteIntro);
	window.display();
	system("pause");
	
}

void Novel::spring() {
	RenderWindow window(VideoMode(800, 534), "Mi Historia");
	sf::Texture _spring;
	_spring.loadFromFile("IMAGEN/_primavera.png");
	sf::Sprite spriteSpring;
	Music music1;
	music1.openFromFile("MUSIC/_spring.ogg");
	music1.play();
	spriteSpring.setTexture(_spring);
	window.clear();
	window.draw(spriteSpring);
	window.display();
	system("pause");
}

void Novel::summer() {
	RenderWindow window(VideoMode(800, 534), "Mi Historia");
	sf::Texture _summer;
	_summer.loadFromFile("IMAGEN/_verano.png");
	sf::Sprite spriteSummer;
	Music music2;
	music2.openFromFile("MUSIC/_summer.ogg");
	music2.play();
	spriteSummer.setTexture(_summer);
	window.clear();
	window.draw(spriteSummer);
	window.display();
	system("pause");
}

void Novel::autumn() {
	RenderWindow window(VideoMode(800, 534), "Mi Historia");
	sf::Texture _autumn;
	_autumn.loadFromFile("IMAGEN/_otoño.png");
	sf::Sprite spriteAutumn;
	Music music3;
	music3.openFromFile("MUSIC/_autumn.ogg");
	music3.play();
	spriteAutumn.setTexture(_autumn);
	window.clear();
	window.draw(spriteAutumn);
	window.display();
	system("pause");
}

void Novel::winter() {
	RenderWindow window(VideoMode(800, 534), "Mi Historia");
	sf::Texture _winter;
	_winter.loadFromFile("IMAGEN/_invierno.png");
	sf::Sprite spriteWinter;
	Music music4;
	music4.openFromFile("MUSIC/_winter.ogg");
	music4.play();
	spriteWinter.setTexture(_winter);
	window.clear();
	window.draw(spriteWinter);
	window.display();
	system("pause");
}

void Novel::ending() {
	RenderWindow window(VideoMode(800, 534), "Mi Historia");
	sf::Texture _ending;
	_ending.loadFromFile("IMAGEN/_final.png");
	sf::Sprite spriteEnding;
	Music music5;
	music5.openFromFile("MUSIC/_end.ogg");
	music5.play();
	spriteEnding.setTexture(_ending);
	window.clear();
	window.draw(spriteEnding);
	window.display();
	system("pause");
}


int main() {
	Novel history;
	int opc;
	bool exit = false;


	while (!exit) {

		system("cls");
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "\n  BIENVENIDO  A LAS ETAPAS DE LA VIDA  \n" << endl;
		cout << "Elija una opcion una de las siguientes opciones para aprender mas de ellas " << endl;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "Intro..................1" << endl;
		cout << "Primavera..............2" << endl;
		cout << "Verano.................3" << endl;
		cout << "Otoño..................4" << endl;
		cout << "Invierno...............5" << endl;
		cout << "Despedida..............6" << endl;
		cout << "SALIR..................7" << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*\n" << endl;
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "A continuacion elije una enseñanza que deseas aprender\n" << endl;
		cout << "\nElija una opcion: ";
		cin >> opc;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n" << endl;
		switch (opc)
		{
		case 1:
			history.intro();
			break;
		case 2:
			history.spring();
			break;
		case 3:
			history.summer();
			break;
		case 4:
			history.autumn();
			break;
		case 5:
			history.winter();
			break;
		case 6:
			history.ending();
			break;
		case 7:
			cout << "------------------------------------------------------" << endl;
			cout << "          Has decidido abandonar la historia          ";
			cout << "\n------------------------------------------------------\n" << endl;
			system("pause");
			exit = true;
			break;
		default:
			cout << "Esa opcion no aparece en la historia, porfavor elija opcion valida para aprender mas" << endl;
			break;
		}

	}

	return 0;
}