//STATIC DECLARADA GLOBAL
//static key word. Como NO podemos tener 2 variables globales en dos archivos cpp que tengan el mismo
//nombre, podemos declararlas con, ej: static int x = 5; y ahora se podrá compilar
//porque el static lo que hace es que no se linkee con los otros .cpp's.

//lo "contrario" podria ser la key word "extern", que lo que hace es coger el valor de otro cpp
// si hay una variable con el mismo nombre

//resumen, hay que usar static a no ser que quieras que se tenga acceso a la variable global
//desde otro archivo.
#include <iostream>


//STATIC EN UNA CALSE O UN STRUCT
using namespace std;

struct Entity
{
	 int x, y;
	
	void Print()
	{
		cout << x << ", " << y << endl;
	}
};

struct Entity2//se usa static para datos que no queremos que varíen entre instancias de la clase
{
	static int x, y;
	
	static void Print()//static methods solo pueden acceder a variables static
	{
		cout << x << ", " << y << endl;
	}
};

int main()
{
	Entity e;
	
	e.x = 2;
	e.y = 3;
	
	Entity e1 = { 5, 8};
	
	e.Print();
	e1.Print();
	
	//struct con el static, 
	
	Entity2 e_;
	
	Entity2::x = 2;
	Entity2::y = 3;
	
	Entity2 e_1;
	Entity2::x = 5;
	Entity2::y = 8;
	
	Entity2::Print();
	Entity2::Print();
}




