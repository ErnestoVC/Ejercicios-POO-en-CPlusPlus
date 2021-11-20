#pragma once
#include <stdio.h>
#include <string.h>
#include "Alimento.h"//INCLUYE LA CLASE ALIMENTO PARA UTILIZARLO COMO OBJETO

class ArrAlimentos{
	private:
		Alimento    **arreglo;
	    int *N;
	public:
		ArrAlimentos(void);
		~ArrAlimentos(void);
		Alimento** Crear_Arreglo();
		void  Agregar(Alimento *Dato);
		void Eliminar(int indice);
		int Retornar_N();
		Alimento*  Retorna_dato_en_arreglo( int indice);

		Alimento** Lista_X_Tipo(char *Tipo, int *cantidad);


};

ArrAlimentos::ArrAlimentos(void){	
	arreglo=NULL;
	N= new int;
	*N=0;
}

ArrAlimentos::~ArrAlimentos(void){	
	//ELIMINAMOS CADA UNO DE LOS OBJETOS DEL ARREGLO
	for (int i=0;i<*N;i++)
		delete arreglo[i];
	delete N;
}

Alimento** ArrAlimentos::Crear_Arreglo(){
       return new Alimento*[*N+1]; 
}

void  ArrAlimentos::Agregar( Alimento *Dato){
	Alimento** auxiliar=Crear_Arreglo();
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

void ArrAlimentos::Eliminar(int indice){
	Alimento** auxiliar =new Alimento*[*N-1];
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

int ArrAlimentos::Retornar_N(){
	return *N;
}

Alimento*  ArrAlimentos::Retorna_dato_en_arreglo(int indice){
	return arreglo[indice];
}

Alimento** ArrAlimentos::Lista_X_Tipo(char *tipo, int *cantidad){	
	for (int i=0;i<*N;i++){
		if (strcmp(arreglo[i]->Retornar_Tipo(),tipo)==0){
			*cantidad=*cantidad+1;
		}
	}
	if (*cantidad>0){  
		Alimento** auxiliar=new Alimento*[*cantidad];
		int h=0;
		for (int i=0;i<*N;i++)
		   if(strcmp(arreglo[i]->Retornar_Tipo(),tipo)==0)
		   {
		      auxiliar[h]=arreglo[i];
			  h++;
		   }
		return auxiliar;
	}
	else
		return NULL;
}
