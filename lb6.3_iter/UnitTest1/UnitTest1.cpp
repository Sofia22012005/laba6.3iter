//6.3 Ітераційний юніт тест
#include "pch.h"
#include "CppUnitTest.h"
#include "../lb6.3_iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int t;
            int a[10] = { -5,6,10,-14,0,13,16,-10,20,100 };
            t = min2(a, 10);
            Assert::AreEqual(t, -5);
        }
    };
}