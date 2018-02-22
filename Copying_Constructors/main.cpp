//Copying constructors:
#include <iostream>
#include <string>
#include <cstring>


using namespace std;

//String redefinition
class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* strin)
    {
        m_Size = strlen(strin);
        m_Buffer = new char[m_Size];
        //Copiar el string en el buffer memcpy() hace lo mismo
        for ( int i = 0; i < m_Size; i++)
            m_Buffer[i]=strin[i];
        m_Buffer[m_Size]=0;//Añade un 0 numerico al final de la cadena, para que no imprima la baura
    }

    //CONSTRUCTOR COPIA Automatico
    //String(const String& other); // = delete si no quieres que se hagan copias
    //CONSTRUCTOR COPIA Codigo
    String(const String& other)
        :m_Size(other.m_Size)
    {
        cout << "Copied string" << endl;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    //Sobrecarga del operador []
    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend ostream& operator<<(ostream& stream, const String& strin);//para que pueda acceder
                                                                    //a m_Buffer
};

ostream& operator<<(ostream& stream, const String& strin)
{
    stream << strin.m_Buffer;//Como no es accesible, la declaramos dentro de la clase como friend
    return stream;
}


int main()
{
    String string = "Mario";
    String string2 = string;//REALMENTE ES UN PUNTERO AL MISMO BLOQUE DE MEMORIA,
                            //No su propio bloque de memoria.
                            //Para hacer una copia real, se necesita un CONSTRUCTOR COPIA
    //Se demuestra si esto cambiara el string 2 y no el 1, por lo tanto ya son dos distintas

    string2[2] = 'o';
    cout << string << endl;
    cout << string2 << endl;


    return 0;
}
