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
		
		//M�TODOS DE ACCESO
		//M�todos SET -> CAMBIAR el valor del atributo
		void Cambiar_Nombre(char* nuevo_valor); 		
		void Cambiar_Edad(int nuevo_valor); 

		//M�todos GET -> RETORNA el valor del atributo
		char* Retornar_Nombre();
		int Retornar_Edad(); 			
};

// Desarrollo de los M�TODOS
//METODOS
//Constructoy y Destructor

Persona::Persona(void){
	Edad=0;
	Nombre=new char[100];
}

Persona::~Persona(void){
	delete[] Nombre;
}

//M�TODOS DE ACCESO
//M�todos SET -> CAMBIAR el valor del atributo

void Persona::Cambiar_Nombre(char* nuevo_valor){
	strcpy(Nombre,nuevo_valor);
}

void Persona::Cambiar_Edad(int nuevo_valor){
	Edad=nuevo_valor;
}

//M�todos GET -> RETORNA el valor del atributo
char* Persona::Retornar_Nombre(){
	return Nombre;
}

int Persona::Retornar_Edad(){
	return Edad;
}
