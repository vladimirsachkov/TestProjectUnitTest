#include "Triangle.h"
#include <string>

//ENG: Autor:Sachkov Vladimir Igorevich
//���: �����:������ �������� ��������

//ENG:Class Triangle 
//���:����� ������������
class Triangle
{

//ENG: Sides of a triangle 
//���: ������� ������������
private: double a, b, c;

public:

	//ENG:Constructor 
	//���:�����������
	Triangle(double valueA, double valueB, double valueC) {
		a = valueA;
		b = valueB;
		c = valueC;
	}

	//ENG:Getting the perimeter
	//���:��������� ���������
	double getP() {
		return a+b+c;
	};

	//ENG:Getting the first side of a triangle 
	//���:��������� ������ ������� ������������
	double getA() {
		return a;
	}

	//ENG:Getting the secind side of a triangle 
	//���:��������� ������ ������� ������������
	double getB() {
		return b;
	}

	//ENG:Getting the third side of a triangle 
	//���:��������� ������ ������� ������������
	double getC() {
		return c;
	}
};