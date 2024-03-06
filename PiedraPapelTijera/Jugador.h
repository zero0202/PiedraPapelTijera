#pragma once
#include <iostream>
using namespace std;
class Jugador
{
private:
	int puntaje;
	
public:
	int opcion=0;
	int random;

public:

	Jugador();
	//void es para reutilizar e imprime algo, un nuevo valor se espera un retorno
	int getpuntaje()const;
	void setpuntaje(int puntajeCambiado);
	int opcionElegir();
	void evaluar(int jugador2);
	
};

