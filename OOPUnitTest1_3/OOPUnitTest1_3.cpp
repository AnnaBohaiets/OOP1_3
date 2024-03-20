#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab1_3/Money.h"
#include "../OOPLab1_3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OOPUnitTest13
{
	TEST_CLASS(OOPUnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			a.SetFirst(10);
			a.SetSecond(4);

			double result = a.Divide(2);
			Assert::AreEqual(result, 5.2);

		}
	};
}
