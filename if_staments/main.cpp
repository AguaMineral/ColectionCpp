#include <iostream>

using namespace std;
int main(void)
{
	//Los if staments no se suelen usar en codigo optimizado
	//IF algo es cierto, ejecuta algo, si no, otra cosa
	
	int x = 1;
	//si es cierto, la variable booleana será cierta
	bool comparisonResult = x == 5;
	//tambien podemos simplemente poner la comparacion dentro del if, solo para mostrar como 
	//funciona el if
	if (comparisonResult)//si este falla, se comprueba el resto, si no, lo demás(else) no se ejecuta
	{
		cout << "Hello world\n";
	}
	else if (x == 1)
	{
		cout << "x es 1\n";
	}
	else
		cout << "Caca \n";
	
	
	return 0;
}
