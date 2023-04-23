#include "Triangle.h"
#include <string>
class Triangle
{

private:double a, b, c;

public:

	Triangle(double valueA, double valueB, double valueC) {
		a = valueA;
		b = valueB;
		c = valueC;
	}

	double getP() {
		return a+b+c;
	};

	double getA() {
		return a;
	}

	double getB() {
		return b;
	}

	double getC() {
		return c;
	}
};