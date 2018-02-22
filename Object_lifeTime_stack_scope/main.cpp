//Explicaci�n b�sica del lifetime de un objeto
//---nota--- todos los datos del stack se borran al finalizar la ejecucion o salir de {}
#include <iostream>

using namespace std;

class Entity
{
private:
    int x;
public:
    Entity()
    {
        cout << "Entidad creada" << endl;
    }

    ~Entity()
    {
        cout << "Entidad destruida\n" << endl;
    }
};

//Por esto mismo del stack, aunque esta funcion pareciera que retorna el puntero al array,
//En cuanto sale del scope, esos datos ya est�n destruidos
int* CreateArray()
{
    int array[50];
    return array;
}

 //Si no nos apetece usar delete manualmente, hay una manera para que se le llame de forma
//autom�tica:
//Aqu� se muestra como funciona un scope pointer, pero este ya est� definido en el std
// de C++
class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr){}

    ~ScopedPtr()
    {
        delete m_Ptr;//As� en cuanto muera la clase se limpia la memoria que alojaba Entity
    }
};//en el main se utiliza

//La funci�n deber�a pasar por parametro el array, y este crearlo en alg�n lado del scope que
//Sepamos que es viable, por ejemplo en el main.
int main()
{
    {
        cout << "-----------Entidad alojada en stack----------\n" << endl;
        Entity e;
    }//Cuando la ejecuci�n llega aqu�, la entidad queda destruida del stack

    //Esto no sucede si alojamos la entidad en el heap
    {
        cout << "-----------Entidad alojada en heap-----------\n" << endl;
        Entity* a = new Entity();
    }//Por esto debe usarse el delete



    //Uso de Scoped pointers

    {
        cout << "-------------Entidad alojada en heap con scoped pointer------\n" << endl;
        ScopedPtr e2 = new Entity();
    }//No hace falta llamar a delete

    return 0;
}
