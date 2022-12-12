#include "pch.h"
#include "CppUnitTest.h"
#include "../lb6.3_rek/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int t;
            int a[10] = { -21,6,10,-14,0,13,16,-10,20,100 };
            t = min2(a, 10, 1, a[0]);
            Assert::AreEqual(t, -21);
        }
    };
}