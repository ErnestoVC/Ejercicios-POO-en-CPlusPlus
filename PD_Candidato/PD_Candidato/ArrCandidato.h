#pragma once
#include <stdio.h>
#include <string.h>
#include "Candidato.h"

class ArrCandidato{

private:
	Candidato **arreglo;
	int *N;

public:

	ArrCandidato(void);
	~ArrCandidato(void);

	Candidato **Crear_arreglo();
	void Registrar(Candidato *Dato);
	void Eliminar(int indice);

	Candidato** Lista_menores_40anios(int *cantidad);
	Candidato** Lista_sin_profesion(int *cantidad);
	Candidato** Iniciar_con_LetraA(int *cantidad);

	int Retornar_N();
	Candidato* Retornar_dato_en_arreglo(int indice);

};

ArrCandidato::ArrCandidato(void){
	arreglo = NULL;
	N = new int;
	*N = 0;
}

ArrCandidato::~ArrCandidato(void){
	for (int i = 0; i < *N; i++)
		delete arreglo[i];
	delete N;
}

Candidato** ArrCandidato::Crear_arreglo(){
	return new Candidato*[*N + 1];
}

void ArrCandidato::Registrar(Candidato *Dato){
	Candidato** auxiliar = Crear_arreglo();
	if (auxiliar != NULL){
		for (int i = 0; i < *N; i++)
			auxiliar[i] = arreglo[i];
		auxiliar[*N] = Dato;
		*N += 1;
		if (arreglo != NULL)
			delete arreglo;
		arreglo = auxiliar;
	}
}

void ArrCandidato::Eliminar(int indice){
	Candidato** auxiliar = new Candidato*[*N - 1];
	if (auxiliar != NULL){
		for (int i = 0; i < indice; i++)
			auxiliar[i] = arreglo[i];
		for (int i = indice + 1; i < *N; i++)
			auxiliar[i - 1] = arreglo[i];
		*N = *N - 1;
		if (arreglo != NULL)
			delete arreglo;
		arreglo = auxiliar;
	}
}

int ArrCandidato::Retornar_N(){
	return *N;
}

Candidato* ArrCandidato::Retornar_dato_en_arreglo(int indice){
	return arreglo[indice];
}

Candidato** ArrCandidato::Lista_menores_40anios(int *cantidad){
	for (int i = 0; i<*N; i++)
		if (arreglo[i]->Retornar_Edad()>40)
			*cantidad = *cantidad + 1;
	if (*cantidad>0){
		Candidato** auxiliar = new Candidato*[*cantidad];
		int h = 0;
		for (int i = 0; i<*N; i++)
			if (arreglo[i]->Retornar_Edad()>25)
			{
				auxiliar[h] = arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
}

Candidato** ArrCandidato::Lista_sin_profesion(int *cantidad){
	for (int i = 0; i<*N; i++)
		if (arreglo[i]->Retornar_TieneProfesion==true)
			*cantidad = *cantidad + 1;
	if (*cantidad>0){
		Candidato** auxiliar = new Candidato*[*cantidad];
		int h = 0;
		for (int i = 0; i<*N; i++)
			if (arreglo[i]->Retornar_TieneProfesion == true){
				auxiliar[h] = arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
	
}

Candidato** ArrCandidato::Iniciar_con_LetraA(int *cantidad){
	for (int i = 0; i<*N; i++)
		if (arreglo[i]->Retornar_Nombre()[0] == 'A' || arreglo[i]->Retornar_Nombre()[0] == 'a')
			*cantidad = *cantidad + 1;
	if (*cantidad>0){
		Candidato** auxiliar = new Candidato*[*cantidad];
		int h = 0;
		for (int i = 0; i<*N; i++)
			if (arreglo[i]->Retornar_Nombre()[0] == 'A' || arreglo[i]->Retornar_Nombre()[0] == 'a'){
				auxiliar[h] = arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
}

