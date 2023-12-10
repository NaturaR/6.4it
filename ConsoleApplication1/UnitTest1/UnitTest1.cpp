#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSumOfNegativeElements)
		{
			double arr[] = { -1.0, -2.0, -3.0, 4.0, 5.0 };
			int n = sizeof(arr) / sizeof(arr[0]);
			double result = sumOfNegativeElements(arr, n);
			Assert::AreEqual(result, -6.0);
		}
	};
}
