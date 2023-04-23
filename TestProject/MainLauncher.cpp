#include "Class.h"

#include <iostream>
#include "Triangle.cpp"
using namespace std;

int main()
{
	Triangle triangle = Triangle(23, 23, 23);
	cout << triangle.getP();
	return 0;
};