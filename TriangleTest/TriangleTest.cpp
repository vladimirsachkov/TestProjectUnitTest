#include "pch.h"
#include "CppUnitTest.h"
#include "..\TestProject\Triangle.h"
#include "..\TestProject\Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleTest
{
	TEST_CLASS(TriangleTest)
	{
		
		TEST_METHOD(GetPTest)
		{
			Triangle triangle = Triangle(23.00, 34.00, 34.00);
			Assert::IsTrue(triangle.getP() == 91.00);
		}
	};
}
