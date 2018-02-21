//Operators and operator overloading: un operador es un simbolo que hace algo ej: <<, >>, ->, & ...
//... new, delete, .....

//Operator overloading es cambiar el comportamiento de un operador de forma manual.
//operators son simplemente funciones.
#include <iostream>
#include <string>



struct Vector2
{
	float x, y;
	Vector2(float x, float y)//Constructor
		: x(x), y(y) {}
	
	//NO OPERATOR OVERLOADING
	Vector2 Add(const Vector2& other) const{
		return Vector2(x + other.x, y + other.y);
	}
	
	Vector2 Multiply(const Vector2& other) const{
		return Vector2(x * other.x, y * other.y);
	}
	//OPERATOR OVERLOADING
	Vector2 operator+(const Vector2& other) const{
		return Add(other);
	}
	
	Vector2 operator*(const Vector2& other) const{
		return Multiply(other);
	}
};

//OPERATOR OVERLOADING I/O

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}


int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f,1.1f);
	
	Vector2 result1 = position.Add(speed.Multiply(powerup));//sin operator overloading
	
	Vector2 result2 = position + speed * powerup;//con operator overloading
	
	std::cout << result2 << std::endl;
	return 0;
}




