//"const" keyword: prometes que algo sea constante, deberias dejar eso constante.

#include <iostream>
#include <string>

using namespace std;

class Entity
{
private:
	int _X, _Y;
	mutable int _Var;//esto hace que aunque sea const method pueda cambiarse "mutable"
public:
	int GetX() const //esto significa que este metodo no va a modificar la clase
	{
		return _X;
	}
	
	void SetX(int x) const//esto NO TENDRIA SENTIDO porque estamos modificando la clase
	{
		_X = x;
	}
	
	void SetX(int x) //esto SI TENDRIA SENTIDO porque estamos modificando la clase
	{
		_X = x;
	}
};

//el parametro es const y referencia porque no quieres copiar la clase, y esto implica que no puedo
//modificar el contenido de 'e'
void PrintEntity(const Entity& e)//pero al poner const en el parametro, no se pueden llamar
{								//metodos no const
	cout << e.GetX() << endl;
}

int main()
{
	//Const con clases
	Entity e;
	
	const int MAX_AGE = 90; //cuando le pongo const, es que quiero una variable que no varíe
	
	const int b = 4;
	
	b = 2;//no se puede al ser constante
	
	int* a = new int;
	
	*a = 2;//aqui se puede cambiar el contenido y elpuntero
	
	const int* c = new int;
	
	*c = 2; //No se puede porque el contenido es const
	c = (int*)&MAX_AGE;//Si se puede porque donde apunta no es const
	
	int* const x = new int;
	//en este caso es al contrario
	*x = 2;
	x = (int*)&MAX_AGE;
	
	const int* const y = new int;//En este caso no podemos ni cambiar el contenido ni el puntero.
	
	cout << *a << endl;
}




