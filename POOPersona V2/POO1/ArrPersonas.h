#pragma once
#include <stdio.h>
#include "Persona.h"//INCLUYE LA CLASE PERSONA PARA UTILIZARLO COMO OBJETO

class ArrPersonas{
	private:
		Persona    **arreglo;
	    int *N;
	public:
		ArrPersonas(void);
		~ArrPersonas(void);
		Persona** Crear_Arreglo();
		void  Agregar(Persona *Dato);
		void Eliminar(int indice);

		Persona** Mayores25anios(int *cantidad);
		Persona** ConLetraAenelNombre(int *cantidad);
		int Retornar_N();
		Persona*  Retorna_dato_en_arreglo( int indice);
};

ArrPersonas::ArrPersonas(void){	
	arreglo=NULL;
	N= new int;
	*N=0;
}

ArrPersonas::~ArrPersonas(void){	
	//ELIMINAMOS CADA UNO DE LOS OBJETOS DEL ARREGLO
	for (int i=0;i<*N;i++)
		delete arreglo[i];
	delete N;
}

Persona** ArrPersonas::Crear_Arreglo(){
       return new Persona*[*N+1]; 
}

void  ArrPersonas::Agregar( Persona *Dato){
	Persona** auxiliar=Crear_Arreglo();
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

void ArrPersonas::Eliminar(int indice){
	Persona** auxiliar =new Persona*[*N-1];
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

int ArrPersonas::Retornar_N(){
	return *N;
}

Persona*  ArrPersonas::Retorna_dato_en_arreglo(int indice){
	return arreglo[indice];
}

Persona** ArrPersonas::Mayores25anios(int *cantidad){	
	for (int i=0;i<*N;i++)
		if (arreglo[i]->Retornar_Edad()>25)
		  *cantidad=*cantidad+1;
	if (*cantidad>0){  
		Persona** auxiliar=new Persona*[*cantidad];
		int h=0;
		for (int i=0;i<*N;i++)
		   if (arreglo[i]->Retornar_Edad()>25)
		   {
		      auxiliar[h]=arreglo[i];
			  h++;
		   }
		return auxiliar;
	}
	else
		return NULL;
}

Persona** ArrPersonas::ConLetraAenelNombre(int *cantidad){
	for (int i=0;i<*N;i++)
		if (arreglo[i]->Retornar_Nombre()[0]=='A' || arreglo[i]->Retornar_Nombre()[0]=='a')
			*cantidad=*cantidad+1;
	if (*cantidad>0){  
		Persona** auxiliar=new Persona*[*cantidad];
		int h=0;
		for (int i=0;i<*N;i++)
			if (arreglo[i]->Retornar_Nombre()[0]=='A' || arreglo[i]->Retornar_Nombre()[0]=='a'){
				auxiliar[h]=arreglo[i];
				h++;
			}
		return auxiliar;
	}
	else
		return NULL;
}