#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3_rec/6.3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 5;
			int a[n] = { -9,5,7,2,1 };
			t = Sum(a, n, 0, 0);
			Assert::AreEqual(t, 2);
		}
	};
}
