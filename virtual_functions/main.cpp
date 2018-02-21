//virtual functions lo que hace es permitir la redefinicion de una funcion que pertenece a una clase
//base, en otra subclase, para que elija la correcta funcion dependiendo de que clase le pases.

#include <iostream>
#include <string>

using namespace std;

class Entity
{
public:
	virtual string GetName(){ return "Entity ";}
};

class Player : public Entity
{
private:
	string m_Name;
public:
	Player(const string& name) : m_Name(name){}//constructor

	string GetName(){return m_Name;}
};

void PrintName(Entity* entity)
{
	cout << entity->GetName() << endl;
}
int main()
{
	Entity* e = new Entity();
	PrintName(e);
	
	Player* p = new Player("Cherno");
	PrintName(p);
}




