#include "Jugador.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;  
Jugador::Jugador() : puntaje() {}

int Jugador::getpuntaje() const
{
	return puntaje;
}
void Jugador::setpuntaje(int puntajeCambiado)
{
	puntaje = puntajeCambiado;
}
int Jugador::opcionElegir()
{
	while (opcion < 1 || opcion > 3) {

		cout << "Elija un numero entre 1 a 3: " << endl;
		cout << "1=Piedra, 2=Papel, 3=Tijera ";
		cin >> opcion;
		if (opcion < 1 || opcion > 3) {
			cout << "El numero que elija debe ser solo entre 1 a 3 "<<endl;
		}

	} return opcion;

}
void Jugador::evaluar(int jugador2)
{
	srand(static_cast<unsigned int>(time(0)));
	random = rand() % 3 + 1;

	cout << " El jugador 2 eligio: " << random << endl;
	if (random == jugador2) {
		cout << "Empate" << endl;
	}
	else if ((random == 1 && jugador2 == 3) || (random == 2 && jugador2 == 1) || (random == 3 && jugador2 == 2)) {

		cout << "Ganaste" << endl;
		puntaje++;
	}
	else {
		cout << "Perdiste" << endl;
		puntaje++;
	}
}
