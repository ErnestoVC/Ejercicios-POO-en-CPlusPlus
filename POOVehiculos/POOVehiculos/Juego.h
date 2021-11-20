#pragma once
#include "Vehiculos.h"

class Juego{
private:
	//Atributos
	Vehiculo* competidor1;
	Vehiculo* competidor2;
	int coordMetaX;
	int nroganador;
public:
	//Métodos
	//Constructor y Destructor
	Juego(void);
	~Juego(void);
	//Métodos de acceso
	//SET
	void SET_coordMetaX(int valor);
	//GET
	int GET_nroganador();
	//Método para dibujo
	void Dibujar_Meta(Graphics ^gr);
	void Mover_Competidores(Graphics ^gr);

};

Juego::Juego(void){
	competidor1 = new Vehiculo();
	competidor2 = new Vehiculo();
	competidor1->SET_x(50); competidor1->SET_y(50);
	competidor2->SET_x(50); competidor2->SET_y(150);
	competidor1->SET_imagen("c1.jpg");
	competidor2->SET_imagen("c2.jpg");
	nroganador = 0;
}
Juego::~Juego(void){
	delete competidor1;
	delete competidor2;
}
//Métodos de acceso
//SET
void Juego::SET_coordMetaX(int valor){ coordMetaX = valor; }
//GET
int Juego::GET_nroganador(){ return nroganador; }
//Método para dibujo
void Juego::Dibujar_Meta(Graphics ^gr){
	gr->FillRectangle(gcnew SolidBrush(Color::Green), coordMetaX, 1, 30, (int)gr->VisibleClipBounds.Height);
}
void Juego::Mover_Competidores(Graphics ^gr){
	Dibujar_Meta(gr);
	competidor1->SET_dx();
	competidor2->SET_dx();
	if (nroganador == 0){
		competidor1->Mover(gr, coordMetaX);
		competidor2->Mover(gr, coordMetaX);
		if (competidor1->GET_Gane()) nroganador = 1;
		if (competidor2->GET_Gane()) nroganador = 2;
	}
}