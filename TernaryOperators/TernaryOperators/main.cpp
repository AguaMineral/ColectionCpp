//Ternary operators 

#include <iostream>
#include <string>

static int s_Level = 10;
static int s_Speed = 2;

using namespace std;

int main()
{
	if (s_Level > 5)//if/else normal
		s_Speed = 10;
	else
		s_Speed = 5;

	s_Speed = s_Level > 5 ? 10 : 5;//Ternary operator que 
									//hace lo mismo
	//Otro ejemplo
	string otherRank;
	if (s_Level > 10)
		otherRank = "Master";
	else
	{
		otherRank = "Beginner";
	}
	//lo mismo que:
	string rank = s_Level > 10 ? "Master" : "Beginner";

	//ternary operator anidados
	//No se suele usar
	s_Level = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;

	cout << s_Speed << endl;
	cin.get();
	return 0;
}