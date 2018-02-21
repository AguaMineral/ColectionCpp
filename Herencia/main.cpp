//Herencia (OOP):nos permite tener una jerarquia de clases, es decir, tener una clase base, con 
//funciones básicas, y mas tarde varias clases que hereden de ella sus características, 
//añadiendole otras más.

#include <iostream>

using namespace std;

class Entity
{
public:
	float X, Y;
	
	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity //ESTO ES LA HERENCIA, todo lo que tenga entity, lo tiene player 
{							//y por supuesto se puede acceder a los datos de la entidad
public:
	const char* name;
	
	void PrintName()
	{
		cout << name << endl;
	}
};
int main()
{
	Player player;
	player.PrintName();
}




