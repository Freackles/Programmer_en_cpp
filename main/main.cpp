#include <iostream>
#include <cmath>

//using namespace std;

//Exemple de programme en C ++



int main()
{
	//declration des variables
	int i = 0;
	float x = 0.0;
	float racx = 0.0;
	//CONSTANTE
	const int NFOIS = 5; //on peut toujours utiliser une #define pour faire une macro


	std::cout << "Je vais vous calculer" << NFOIS << "racines carrees\n";

	for (i = 0; i < NFOIS; i++) {

		std::cout << "Donnez un nombre : ";
		std::cin >> x;


		if (x < 0.0)

			std::cout << "Le nombre" << x << "ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x);
			std::cout << "Le nombre" << x << "a pour racine carree" << racx << std::endl;
		}
	}

	std::cout << "Travail Termine" << std::endl;

	system("Pause");


	return 0;
}