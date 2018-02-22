//Creating and instantiating objects:
//Stack and heap
//Los objetos del stack tienen una vida automática, se libera automáticamente
#include <iostream>

using namespace std;

class Entity
{
private:
    string m_Name;
public:
    //Constructores
    Entity() : m_Name("Unknown"){}
    Entity(const string& name) : m_Name(name){}
    //Funcion get name
    const string& GetName() const {return m_Name;}
};

int main()
{
    //NORMALMENTE SE INSTANCIAN LOS OBJETOS ASI
    //Crear la clase en el stack
    Entity entity;
    cout << entity.GetName() << endl;

    //Como tenemos un constructor que recibe srings podemos hacer:

    Entity entity2("Mario");
    cout << entity2.GetName() << endl;

    //PORQUE hay otra manera de intanciar clases? para que no suceda esto
    Entity* e;
    {
        Entity entity("cherno");
        e = &entity;
        //Cuando el código salga de las llaves, ese objeto ya habra sido destruido
        //Tambien si tienes muchas clases o una clase gigante no cabrá
        //En el stack
    }
    //Si instanciamos de esta manera, la clase se guarda en el heap
    Entity* e;
    {

        Entity* entity = new Entity("cherno");
        e = entity;
        //Cuando el código salga de las llaves, ese objeto ya habra sido destruido
        //Tambien si tienes muchas clases o una clase gigante no cabrá
        //En el stack


    }
    //Si usamos new, tenemos que usar delete para no tener un leak
    delete e;

    return 0;
}
