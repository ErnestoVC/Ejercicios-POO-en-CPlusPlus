#pragma once
#include <stdio.h>
#include <ctype.h>
#include "Instrumento.h"

class ArrInstrumentos{
	private:
		Instrumento **arreglo;
	    int *N;
	public:
		//constructor y destructor
		ArrInstrumentos(void);
		~ArrInstrumentos(void);
		
		//métodos de la clase
		Instrumento** Crear_Arreglo();
		int Retornar_N();
		Instrumento* Retorna_dato_en_arreglo( int indice);
		void Agregar(Instrumento *Dato);
		void Eliminar(int indice);

		Instrumento** Retorna_Arreglo_Instrumento_Viento(int *cantidad);	
		Instrumento** Retorna_Arreglo_Instrumento_Percusion(int *cantidad);		
		Instrumento** Retorna_Arreglo_Instrumento_Cuerda(int *cantidad);		
};

ArrInstrumentos::ArrInstrumentos(void){	
	arreglo=NULL;
	N= new int;
	*N=0;
}

ArrInstrumentos::~ArrInstrumentos(void){	
	//ELIMINAMOS CADA UNO DE LOS OBJETOS DEL ARREGLO
	for (int i=0;i<*N;i++)
		delete arreglo[i];
	delete N;
}

Instrumento** ArrInstrumentos::Crear_Arreglo(){
       return new Instrumento*[*N+1]; 
}

int ArrInstrumentos::Retornar_N(){
	return *N;
}

Instrumento* ArrInstrumentos::Retorna_dato_en_arreglo(int indice){
	return arreglo[indice];
}

void  ArrInstrumentos::Agregar( Instrumento *Dato){
	Instrumento** auxiliar=Crear_Arreglo();
	if (auxiliar!=NULL){
		for (int i=0;i<*N;i++)
			auxiliar[i] = arreglo[i];
	
		auxiliar[*N]=Dato;
		*N=*N+1;

		if (arreglo!=NULL)
			delete arreglo;
		arreglo=auxiliar;
	}
}

void ArrInstrumentos::Eliminar(int indice){
	Instrumento** auxiliar =new Instrumento*[*N-1];
	if (auxiliar!=NULL)
	{ 
	  //sobre la izquierda del indice a eliminar;
			for (int i=0;i<=indice-1;i++)
				auxiliar[i]=arreglo[i];
		//sobre la derecha del indice a eliminar;
			for (int i=indice+1;i<*N;i++)
				auxiliar[i-1]=arreglo[i];

			*N=*N-1;
          if (arreglo!=NULL)
			  delete arreglo;

		  arreglo=auxiliar;
	}

}

//Metodos faltantes

Instrumento** ArrInstrumentos::Retorna_Arreglo_Instrumento_Viento(int *cantidad){
	for (int i=0;i<*N;i++)
		if (strcmp(arreglo[i]->Retornar_Tipo(),"Viento")==0)
			*cantidad=*cantidad+1;
	if (*cantidad>0){  
		Instrumento** auxiliar=new Instrumento*[*cantidad];
		int h=0;
		for (int i=0;i<*N;i++)
			if (strcmp(arreglo[i]->Retornar_Tipo(),"Viento")==0){
				auxiliar[h]=arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
}

Instrumento** ArrInstrumentos::Retorna_Arreglo_Instrumento_Percusion(int *cantidad){
	for (int i=0;i<*N;i++)
		if (strcmp(arreglo[i]->Retornar_Tipo(),"Percusión")==0)
			*cantidad=*cantidad+1;
	if (*cantidad>0){  
		Instrumento** auxiliar=new Instrumento*[*cantidad];
		int h=0;
		for (int i=0;i<*N;i++)
			if (strcmp(arreglo[i]->Retornar_Tipo(),"Percusión")==0){
				auxiliar[h]=arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
}

Instrumento** ArrInstrumentos::Retorna_Arreglo_Instrumento_Cuerda(int *cantidad){
	for (int i=0;i<*N;i++)
		if (strcmp(arreglo[i]->Retornar_Tipo(),"Cuerda")==0)
			*cantidad=*cantidad+1;
	if (*cantidad>0){  
		Instrumento** auxiliar=new Instrumento*[*cantidad];
		int h=0;
		for (int i=0;i<*N;i++)
			if (strcmp(arreglo[i]->Retornar_Tipo(),"Cuerda")==0){
				auxiliar[h]=arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
}