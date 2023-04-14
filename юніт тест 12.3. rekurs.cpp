#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 12.3 рекурс. спосіб/лаба 12.3 рекурс. спосіб.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест123rekurs
{
	TEST_CLASS(юніттест123rekurs)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Node* head = NULL;
            Node* tail = NULL;
            appendNode(&head, &tail, 1);
            appendNode(&head, &tail, 2);
            appendNode(&head, &tail, 3);
            appendNode(&head, &tail, 4);
            appendNode(&head, &tail, 4); // дубль елемента
            appendNode(&head, &tail, 5);

            bool hasDup = hasDuplicate(head);
            Assert::IsTrue(hasDup);
        }

        TEST_METHOD(TestNoDuplicate)
        {
            Node* head = NULL;
            Node* tail = NULL;
            appendNode(&head, &tail, 1);
            appendNode(&head, &tail, 2);
            appendNode(&head, &tail, 3);
            appendNode(&head, &tail, 4);
            appendNode(&head, &tail, 5);

            bool hasDup = hasDuplicate(head);
            Assert::IsFalse(hasDup);
		}
	};
}
