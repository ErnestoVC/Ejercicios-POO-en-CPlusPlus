//#include "ArrPersonas.h"
//#include <stdio.h>
//
//ArrPersonas::ArrPersonas(void)
//{	arreglo=NULL;
//	N= new int;
//	*N=0;
//}
//ArrPersonas::~ArrPersonas(void)
//{	//ELIMINAMOS CADA UNO DE LOS OBJETOS DEL ARREGLO
//	for (int i=0;i<*N;i++)
//		delete arreglo[i];
//
//	delete N;
//}
//Persona** ArrPersonas::Crear_Arreglo()
//{
//       return new Persona*[*N+1]; 
//}
//
//void  ArrPersonas::Agregar( Persona *Dato)
//{
//	Persona** auxiliar=Crear_Arreglo();
//	if (auxiliar!=NULL)
//	{
//		for (int i=0;i<*N;i++)
//			auxiliar[i] = arreglo[i];
//	
//		auxiliar[*N]=Dato;
//		*N=*N+1;
//
//		if (arreglo!=NULL)
//			delete arreglo;
//
//		arreglo=auxiliar;
//	
//	}
//}