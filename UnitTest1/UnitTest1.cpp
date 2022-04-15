#include "pch.h"
#include "CppUnitTest.h"
#include "../3.02A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student;
			p->prizv = "Снісарчук";
			p->ave = 3;
			p->informatyka = 3;
			int s = BinSearch(p, 2, "Снісарчук", 3, 3);
			Assert::AreEqual(s, 0);
		}
	};
}
