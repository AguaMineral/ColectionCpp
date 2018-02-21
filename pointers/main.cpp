//PUNTEROS: un número que acumula una direccion de memoria, apunta a una direccion de memoria
//resumen: es una dirección
#include <iostream>
#include <cstring>//para utilizar memset()

using namespace std;

#define nullptr 0

#define LOG(x) cout << x << endl; //definimos LOG(x) como una funcion que imprima lo que le metamos,
								//con un \n

int main(void)
{
	//Puntero puro, sin tipo
	void* ptr = nullptr; //puntero a la nada
	
	int var = 8; //Esta variable tiene una direccion de memoria
	
	int* ptr_var = &var;//le asignamos la direccion de memoria(&) de var
	
	//para tener acceso desde esa direccion:
	
	*ptr_var = 10; //contenido(*) de esa direccion de memoria, lo cambiamos a 9, ahora var = 9
	
	LOG(var);
	
	//quiero alocar 8 bytes en una direccion char y la llamo buffer(memoria dinamica)
	char* buffer = new char[8];
	
	memset(buffer, 0, 8);
	
	//un puntero a la direccion de memoria del puntero del buffer
	char** ptr2 = &buffer;
	
	delete[] buffer;
	
	cin.get();
}
