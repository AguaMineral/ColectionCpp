//Como escribir una clase en C++
//el ejemplo va a ser una clase Log, que va a imprimir mensakes en la consola

#include <iostream>

using namespace std;

//de momento la case va a imprimir texto en consola y va a crear niveles de log
//(error, warning, msj), como un filtro

class Log
{
public://variables publicas
	enum Level{LevelError = 0, LevelWarning, LevelInfo};//aqui se utiliza de forma util ENUM
private:
	Level m_LogLevel = LevelInfo;//la m_ es una convencion para marcar que es privada, solo puede
					//accederse a ella en la clase
public://metodos
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}
 
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			cout <<"[ERROR]" << message << endl;
	}
	
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			cout <<"[WARNING]" << message << endl;
	}
	
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			cout <<"[INFO]" << message << endl;
	}
};
int main()
{
	Log log;
	log.SetLevel(Log::LevelInfo);//esto tambien cambia por ENUM
	log.Info("Hello");
	log.Error("Hello");
	log.Warn("Hello!");
}
