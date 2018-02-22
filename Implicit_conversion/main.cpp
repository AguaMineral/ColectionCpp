//Implicit conversion
#include <iostream>
#include <string>

using namespace std;


class Entity
{
private:
    string m_Name;
    int m_Age;
public:
    //Contructors
    Entity(const string& name)
        : m_Name(name), m_Age(-1) {}

    Entity(int age)
        : m_Name("UNKNOWN"), m_Age(age) {}
};
//explicit keyword
class Entity2
{
private:
    string m_Name;
    int m_Age;
public:
    //Contructors
    Entity(const string& name)
        : m_Name(name), m_Age(-1) {}

    explicit Entity(int age)
        : m_Name("UNKNOWN"), m_Age(age) {}
    //Lo que hace esta keyword es inhabilitar la conversión implicita
    //La unica funcion que tiene.
};


int main()
{
    //Se suele usar mas
    Entity a("Mario");
    Entity b(22);
    //ESTO ES CONVERSION IMPLICITA, puesto que obivamente Entity
    //no es de tipo entero, tiene string e int, porque el constructor
    //pide un int
    Entity c = 22;
    return 0;
}
