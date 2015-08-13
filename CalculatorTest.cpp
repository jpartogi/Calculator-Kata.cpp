#include "stdafx.h"
#include "CppUnitTest.h"
#include "Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorKata
{		
	TEST_CLASS(CalculatorTest)
	{
	public:
		
		TEST_METHOD(EmptyStringReturns0)
		{
			CalculatorKata::Calculator* calculator = new CalculatorKata::Calculator();

			int result = calculator->add("");

			Assert::AreEqual(0, result);
		}

		TEST_METHOD(OneReturnsNumber)
		{
			CalculatorKata::Calculator* calculator = new CalculatorKata::Calculator();

			int result = calculator->add("2");

			Assert::AreEqual(2, result);
		}
	};
}