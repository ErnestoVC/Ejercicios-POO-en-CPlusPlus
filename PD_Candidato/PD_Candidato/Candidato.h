#pragma once
#include <stdio.h>
#include <string.h>

class Candidato{
private:
	char* Nombre;
	int Edad;
	bool TieneProfesion;

public:
	Candidato(void);
	~Candidato(void);

	void Cambiar_Nombre(char* nuevo_valor);
	void Cambiar_Edad(int nuevo_valor);
	void Cambiar_TieneProfesion(bool nuevo_valor);

	char* Retornar_Nombre();
	int Retornar_Edad();
	bool Retornar_TieneProfesion();


};

Candidato::Candidato(void){
	Edad = 0;
	Nombre = new char[100];
	TieneProfesion = false;
}

Candidato::~Candidato(void){
	delete[] Nombre;
}

void Candidato::Cambiar_Nombre(char* nuevo_valor){
	strcpy(Nombre, nuevo_valor);
}

void Candidato::Cambiar_Edad(int nuevo_valor){
	Edad = nuevo_valor;
}
void Candidato::Cambiar_TieneProfesion(bool nuevo_valor){
	TieneProfesion = nuevo_valor;
}

char* Candidato::Retornar_Nombre(){
	return Nombre;
}

int Candidato::Retornar_Edad(){
	return Edad;
}

bool Candidato::Retornar_TieneProfesion(){
	return TieneProfesion;
}