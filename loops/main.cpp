//For and while loops, es de las herramientas mas utiles en programación

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//primero se declara i = 0, comprueba si la condicion es cierta, si lo es se ejecuta lo de dento
	// y se aumenta, se comprueba...etc hasta que i < 5 y el loop no se ejecute
	cout << "For loop: \n";
	//util para acceder a variables de un array, se usa cuando quieres tener tracking una variable
	for(int i = 0; i < 5; i++)
	{
		cout << "hello world" << endl;
	}
	
	cout << "=====================================\n";
	//loop while, si tienes condiciones que ya existen, lo usas.
	int i = 0;
	while (i < 5)
	{
		cout << "hello world" << endl;
		i++;
	}
	
	//do-while, esto se va a ejecutar una vez por lo menos
	
	/*do
	{
		
	}while(i < 5);

	return 0;
}
