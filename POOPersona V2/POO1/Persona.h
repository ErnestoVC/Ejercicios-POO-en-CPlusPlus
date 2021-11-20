#pragma once
#include <string.h>
#include <stdio.h>

class Persona{
	private:
		char* Nombre; 
		int Edad;
   
	public: 
		//METODOS
		//Constructoy y Destructor
		Persona(void); 
		~Persona(void); 
		
		//MÉTODOS DE ACCESO
		//Métodos SET -> CAMBIAR el valor del atributo
		void Cambiar_Nombre(char* nuevo_valor); 		
		void Cambiar_Edad(int nuevo_valor); 

		//Métodos GET -> RETORNA el valor del atributo
		char* Retornar_Nombre();
		int Retornar_Edad(); 			
};

// Desarrollo de los MÉTODOS
//METODOS
//Constructoy y Destructor

Persona::Persona(void){
	Edad=0;
	Nombre=new char[100];
}

Persona::~Persona(void){
	delete[] Nombre;
}

//MÉTODOS DE ACCESO
//Métodos SET -> CAMBIAR el valor del atributo

void Persona::Cambiar_Nombre(char* nuevo_valor){
	strcpy(Nombre,nuevo_valor);
}

void Persona::Cambiar_Edad(int nuevo_valor){
	Edad=nuevo_valor;
}

//Métodos GET -> RETORNA el valor del atributo
char* Persona::Retornar_Nombre(){
	return Nombre;
}

int Persona::Retornar_Edad(){
	return Edad;
}
