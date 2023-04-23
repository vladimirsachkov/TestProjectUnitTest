#include "Triangle.h"
#include <string>

//ENG: Autor:Sachkov Vladimir Igorevich
//РУС: Автор:Сачков Владимир Игоревич

//ENG:Class Triangle 
//РУС:Класс треугольника
class Triangle
{

//ENG: Sides of a triangle 
//РУС: Стороны треугольника
private: double a, b, c;

public:

	//ENG:Constructor 
	//РУС:Конструктор
	Triangle(double valueA, double valueB, double valueC) {
		a = valueA;
		b = valueB;
		c = valueC;
	}

	//ENG:Getting the perimeter
	//РУС:Получение периметра
	double getP() {
		return a+b+c;
	};

	//ENG:Getting the first side of a triangle 
	//РУС:Получение первой стороны треугольника
	double getA() {
		return a;
	}

	//ENG:Getting the secind side of a triangle 
	//РУС:Получение второй стороны треугольника
	double getB() {
		return b;
	}

	//ENG:Getting the third side of a triangle 
	//РУС:Получение второй стороны треугольника
	double getC() {
		return c;
	}
};