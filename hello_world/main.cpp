#include <iostream>
#include "header.h"
#include <cmath>

using namespace std;

//int a = 2; //Declaramos una variable global para mostrar el ORV
//FUNCIONES (No son parte de una clase)
void log(const char* message)
{
	cout << message << endl;
}
int multiplicar(int a, int b)
{
	return a * b;
}

void multiplicarEImprimir(int a, int b)
{
	int result = multiplicar(a,b);
	cout << result << endl;
}


int main(void)
{
	cout << "Programado por Mario Villa Lo - Re\n";
	//FUNCIONES (No son parte de una clase)
	multiplicarEImprimir(3,2);
	multiplicarEImprimir(4,3);
	multiplicarEImprimir(60,15);
	//Todos los programas den C++ son una coleccion de funciones
	//Las funciones pueden declararse(en el header) y definirse(en el cpp)
	
	
	
	log("Mis huevos\n");
	
	//para comprobar los bytes qe ocupan cada tipo usamos el sizeof()
	
	cout << sizeof(double) << endl;
	
	
	
	return 0;
}
