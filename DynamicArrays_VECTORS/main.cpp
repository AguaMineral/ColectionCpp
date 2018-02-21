//Dynamic arrays: es un array sin un tamaño predefinido, crece solo.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Vertex
{
	float x, y, z;
};

ostream& operator <<(ostream& stream, const Vertex& vertex)
{
	stream << vertex.x <<", " << vertex.y << ", " << vertex.z;
	return stream;
}

void Function(const vector<Vertex>& vertices){}//Siempre se pasan por referencia

int main()
{
	vector<Vertex> vertices;//lo que va entre(<>) es el tipo, el tipo solo puede ser
							//uno definido por nosotros+
	vertices.push_back({1, 2, 3});
	vertices.push_back({4, 5, 6});
	
	for(int i = 0; i < vertices.size(); i++)
	{
		cout << vertices[i] << endl;
	}
	vertices.erase(vertices.begin()+1);//eliminar el segundo elemento
	return 0;
}




