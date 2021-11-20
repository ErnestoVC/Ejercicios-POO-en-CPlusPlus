#pragma once
#include <string.h>
#include <stdio.h>

class Alimento{
	private:
		char* Nombre;
		char* Tipo;
		int Calorias;
   
	public: 
		//METODOS
		//Constructoy y Destructor
		Alimento(void); 
		~Alimento(void); 
		
		//MÉTODOS DE ACCESO
		//Métodos SET -> CAMBIAR el valor del atributo
		void Cambiar_Nombre(char* nuevo_valor); 
		void Cambiar_Tipo(char* nuevo_valor); 
		void Cambiar_Calorias(int nuevo_valor); 

		//Métodos GET -> RETORNA el valor del atributo
		char* Retornar_Nombre();
		char* Retornar_Tipo();
		int Retornar_Calorias(); 			
};

// Desarrollo de los MÉTODOS
//METODOS
//Constructoy y Destructor

Alimento::Alimento(void){
	Calorias=0;
	Nombre=new char[100];
	Tipo=new char[100];
}

Alimento::~Alimento(void){
	delete[] Nombre;
	delete[] Tipo;
}

//MÉTODOS DE ACCESO
//Métodos SET -> CAMBIAR el valor del atributo

void Alimento::Cambiar_Nombre(char* nuevo_valor){
	strcpy(Nombre,nuevo_valor);
}

void Alimento::Cambiar_Tipo(char* nuevo_valor){
	strcpy(Tipo,nuevo_valor);
}

void Alimento::Cambiar_Calorias(int nuevo_valor){
	Calorias=nuevo_valor;
}

//Métodos GET -> RETORNA el valor del atributo
char* Alimento::Retornar_Nombre(){
	return Nombre;
}

char* Alimento::Retornar_Tipo(){
	return Tipo;
}

int Alimento::Retornar_Calorias(){
	return Calorias;
}
