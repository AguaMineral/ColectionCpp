//Smart pointers: se usan para automatizar las llamadas a new y delete
#include <iostream>
#include <string>
#include <memory>//Libreria estándar de smart pointers

using namespace std;



//Son complicados pero son necesarios y muy útiles
//1º unique
//2º shared-cuando sea obligatorio-

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
    //El smart pointer más simple(unique_ptr):
    {//Empty scope

        //Así se declara un unique pointer, la característa de este es que TIENE que ser único. NO PUEDE COPIARSE
        unique_ptr<Entity> e = make_unique<Entity>();//es preferible de esta manera
                  //Template argument of entity

        //Tambíen puede declararse de esta manera:
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
    //a un sitio no válido.

    return 0;
}
