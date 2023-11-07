#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.4/Lab_06_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { -2, 109, -88, 4, 5, 34 };
			int n = 6;

			double z = Min(a, n);
			Assert::AreEqual(z, -2.0);
		}
	};
}
