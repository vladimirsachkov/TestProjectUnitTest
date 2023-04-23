#include "pch.h"
#include "CppUnitTest.h"
#include "..\TestProject\Triangle.h"
#include "..\TestProject\Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleTest
{
	TEST_CLASS(TriangleTest)
	{

		//ENG:Getting the perimeter
	//РУС:Получение периметра
		
		TEST_METHOD(GetPTest)
		{
			Triangle triangle = Triangle(23.00, 34.00, 34.00);
			//    --ENG:Get the perimeter and Expected value
			//    --RUS:Получение периметра и Ожидаемое значение

			//23+34+34 = 91
			Assert::IsTrue(triangle.getP() == 91.00);
		}
	};
}
