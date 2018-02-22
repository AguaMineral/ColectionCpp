//New keyword: reserva memoria en el heap
//lo que hace es pedirle al SO que le de los bits indicados por el tipo
//cuando se los da, devuele un puntero con la direccion de memoria reservada

#include <iostream>

using namespace std;
class Entity
{
private:
    string _Name;
public:
    Entity() : _Name("UNKNOWN"){}
    Entity(const string& name) : _Name(name) {}

    const string& GetName() const {return _Name;}
};

int main()
{
    int a = 2;
    //es lo mismo pero dinamico
    int* b = new int;
    //Tambien se puede especificar el numero de bytes*bytes del tipo
    int* c = new int[50];

    //Las clases se reservan asi
    Entity* e = new Entity();//Tambien se llama al constructor con new
                            //tambien se puede Entity[50]

    //SIEMPRE SE LLAMA DELETE
    delete e;//llama al destructor
                //si tiene tamaño definido -> delete[] e;

    cout << "Casi todo correncto "  << endl;
    return 0;
}
