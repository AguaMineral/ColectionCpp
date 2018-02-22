//Smart pointers: se usan para automatizar las llamadas a new y delete
#include <iostream>
#include <string>
#include <memory>//Libreria est�ndar de smart pointers

using namespace std;



//Son complicados pero son necesarios y muy �tiles
//1� unique
//2� shared-cuando sea obligatorio-

class Entity
{
public:
    Entity()
    {
        cout << "Entidad creada" << endl;
    }

    ~Entity()
    {
        cout << "Entidad destruida" << endl;
    }

    void Print() {}
};
int main()
{
    //El smart pointer m�s simple(unique_ptr):
    {//Empty scope

        //As� se declara un unique pointer, la caracter�sta de este es que TIENE que ser �nico. NO PUEDE COPIARSE
        unique_ptr<Entity> e = make_unique<Entity>();//es preferible de esta manera
                  //Template argument of entity

        //Tamb�en puede declararse de esta manera:
        unique_ptr<Entity> e2(new Entity());

        //Para acceder a un metodo de la clase:
        e->Print();
    }

    //Shared pointers, hasta que todos no hacen delete, la memoria no se libera, el contador
    //de ref aumenta

    {
        cout << "Shared pointer" << endl;
        shared_ptr<Entity> e3 = make_shared<Entity>();
        //Por supuesto puede copiarse
        shared_ptr<Entity> e4 = e3;
    }

    //weak pointer, exactamente lo mimo que el shared pointer, excepto que el contador de ref NO aumenta
    //osea, si uno muere, mueren todos, los que quedan fuera del scope y siguen apuntando
    //a un sitio no v�lido.

    return 0;
}
