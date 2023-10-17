#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = k(2, 3);
			Assert::AreEqual(t, 0);

		}
	};
}
