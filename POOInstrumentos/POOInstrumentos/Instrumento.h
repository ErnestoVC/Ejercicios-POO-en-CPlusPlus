#pragma once
#include <stdio.h>
#include <string.h>
class Instrumento{
	private:
		char* Nombre; 
		float Costo;
		char* Tipo;
   
	public: 
		Instrumento(void); //Constructor
		~Instrumento(void); //Destructor
	
		//Métodos de Acceso:

		//SET
		void Cambiar_Nombre(char* nuevo_valor); 
		void Cambiar_Costo(float nuevo_valor); 
		void Cambiar_Tipo(char* nuevo_valor); 

		//GET
		char* Retornar_Nombre();
		float Retornar_Costo();
		char* Retornar_Tipo();
};


Instrumento::Instrumento(void){
	Costo=0;
	Nombre=new char[100];
	Tipo=new char[100];
}

Instrumento::~Instrumento(void){
	delete[] Nombre;
	delete[] Tipo;
}

//SET
void Instrumento::Cambiar_Nombre(char* nuevo_valor){
	strcpy(Nombre,nuevo_valor);
}

void Instrumento::Cambiar_Costo(float nuevo_valor){
	Costo=nuevo_valor;
}

void Instrumento::Cambiar_Tipo(char* nuevo_valor){
	strcpy(Tipo,nuevo_valor);
}

//GET
char* Instrumento::Retornar_Nombre(){
	return Nombre;
}

float Instrumento::Retornar_Costo(){
	return Costo;
}

char* Instrumento::Retornar_Tipo(){
	return Tipo;
}


