//control flow staments son los que nos dan control 
//sobre la ejecucion de un programa, que, cuando, donde hay que seguir la ejecucion

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//continue
	for(int i = 0; i < 5; i++)
	{
		if ( i % 2 == 0)
		{
			continue;//lo que hace es saltar al siguiente paso del loop
		}
		cout << "Hello world\n";
	}
	//break
	for(int i = 0; i < 5; i++)
	{
		if ( i == 2)
		{
			break;//lo que hace es saltar fuera de la instrucción, la rompe.
		}
		cout << "Hello world\n";
	}
	//return, SIEMPRE TIENE QUE REORNAR UN VALOR, y se puede situar en cualquier parte del código
	for(int i = 0; i < 5; i++)
	{
		if ( i % 2 == 0)
		{
			return 0;//lo que hace es terminar la ejecución completa
		}
		cout << "Hello world\n";
	}
}
