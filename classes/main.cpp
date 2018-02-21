//CLASES: agrupoar datos y funcionalidades juntas, las clases son como "tipos" de datos que nosotros
//creamos
//diferencias entre clases y STRUCT: que todo en un struct es accesible, público por defecto 
#include <iostream>

using namespace std;

class Player //object, de forma default todo es privado, lo tenemos que especificar
{
public:
	int x, y;
	int speed;
	
	void Move(int xa, int ya) //las funciones en clases se llaman metodos, no hace falta
	{						//pasarle la variable player(clase Player) porque esta dentro de ella
		x += xa * player.speed;
		y += ya * player.speed;
	}
};

//¿cuando usamos structs vs clases?
//structs: estructuras que solo representas datos, simplemente un monton de variables, mas tecnico
struct Vec2
{
	float x, y;
	
	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}
};//nunca se usara herencia con structs

int main()
{
	Player player;//instanciar un objeto, una instancia
	player.Move(1,-1);
	player.x = 5;//accedemos a la variable x del jugador
	
	return 0;
}
