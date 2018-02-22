//This Keyword: solo podemos usarla manejando m�todos
//Un puntero  a la instancia actual al objeto a la que pertenece el m�todo
#include <iostream>

using namespace std;

//Si queremos llamar una funcion de fuera de la clase dentro de la clase:
void PrintEntity(Entity* e);// Declaraci�n

class Entity
{
public:
    int x, y;

    Entity (int x, int y)
    {//para esto sirve, accedemos a las variables de la clase que se llaman
        //igual, y les asignamos los parametros que se llaman igual por el fin de explicar
        //el funcionamiento
        this->x = x;
        this->y = y;
        //es lo pispo que Entity* e = this

        PrintEntity(this);//as� ser�a con una funcion no constante
        PrintEntity(*this);// con un par�metro constante void Print(const Entity& e);
    }

    int GetX() const
    {
        //const Entity* e = this; esto ser� el this
        return x;
    }
};

void PrintEntity(Entity* e)// Declaraci�n
{
    //print

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
