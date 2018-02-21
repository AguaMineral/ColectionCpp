//Constructor: (OOP) lo que se ejecuta cada vez que instanciamos un objeto AUTOMATICAMENTE
//Destructor: lo que se ejecuta cada vez que destruyes un ojeto AUTOMATICAMENTE
#include <iostream>

using namespace std;

class Entity
{
public:
	float X, Y;
	//ES OBLIGAORIO QUE TENGA EL MISMO NOMBRE QUE LA CLASE
	Entity()//este es el constructor, se inicializan las variables automaticamente al crear una instancia
	{
		cout << "Constructed entity" << endl;
		X = 0.0f;
		Y = 0.0f;
	}
	Entity(float x, float y)//constructor con parametros
	{
		X = x;
		Y = y;
	}
	
	~Entity()//siempre tienen esta sintaxis
	{
		cout << "Destroyed entity" << endl;
	}
	void Print()
	{
		cout << X << " " << Y << endl;
	}
};

void Function()
{
	Entity e;//instanciamiento de una clase
	e.Print();
}
int main()
{
	Function();
}




