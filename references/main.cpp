//REFERENCES: son una extension de los punteros
//referenciar una variable YA existente
#include <iostream>

using namespace std;

//si paso la variable por referencia, acceso a su direccion de memoria y la afecto SE USA
void Increment(int& value)
{
	value++;
}

//tambien se pueden utilizar punteros para hacer exactamente lo mismo NO SE USA
void Increment_w_ptr(int* value)
{
	//aqui con (*) accedemos a lo que apunta el puntero, y lo incrementamos.
	(*value)++;
}

int main(void)
{
	int a = 5;
	//referencia "alias de la variable"
	int& ref = a;//ES OBLIGATORIO INICIALIZARLAS
	//podemos usar ref como si fuera a, pero realmente ref es simplemente una referencia SE USA
	Increment(a);
	//en este caso entonces tendremos que pasar la direccion de memoria de a, ya que utilizamos
	//punteros,NO SE USA
	Increment_w_ptr(&a);
	
	cout << a << endl;
	return 0;
}
