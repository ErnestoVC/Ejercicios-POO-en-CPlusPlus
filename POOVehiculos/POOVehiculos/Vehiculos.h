#pragma once
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace System::Drawing;
using namespace System;

class Vehiculo{
private:
	//Atributos
	int X, Y;
	int W, H;
	int dx;
	char* imagen;
	bool Gane;

public:
	//Métodos
	//Constructos y Destructor
	Vehiculo(void);
	~Vehiculo(void);
	//Métodos de acceso
	//SET
	void SET_x(int valor);
	void SET_y(int valor);
	void SET_dx();
	void SET_imagen(char* valor);
	//GET
	bool GET_Gane();
	//Métodos de graficar
	void Mostrar(Graphics^ gr);
	void Mover(Graphics^ gr,int coord_XMeta);

};

Vehiculo::Vehiculo(void){
	X = Y = dx = 0;
	imagen = new char[100];
	Gane = false;
}
Vehiculo::~Vehiculo(void){
	delete[] imagen;
}
//Métodos de acceso
//SET
void Vehiculo::SET_x(int valor){ X = valor; }
void Vehiculo::SET_y(int valor){ Y = valor; }
void Vehiculo::SET_dx(){ dx =1+rand() % 10; }
void Vehiculo::SET_imagen(char* valor){
	strcpy(imagen, valor);
	Bitmap ^bmp = gcnew Bitmap(gcnew String(imagen));
	W = bmp->Width;
	H = bmp->Height;
	delete bmp;
}
//GET
bool Vehiculo::GET_Gane(){ return Gane; }
//Métodos de graficar
void Vehiculo::Mostrar(Graphics^ gr){
	Bitmap ^bmp = gcnew Bitmap(gcnew String(imagen));
	gr->DrawImage(bmp, X, Y);
	delete bmp;
}
void Vehiculo::Mover(Graphics^ gr,int coord_XMeta){
	if (X + W + dx >= coord_XMeta)
		Gane = true;
	X = X + dx;
	Mostrar(gr);
}