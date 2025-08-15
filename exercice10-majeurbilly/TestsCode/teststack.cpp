#include "stdafx.h"
#include "CppUnitTest.h"
#include "Stack.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsCode
{
	TEST_CLASS(TestsStack)
	{
	public:
		TEST_METHOD(ConstructorParDefaut_StackSeraVide)
		{
			Stack stack;

			Assert::IsTrue(stack.isEmpty());
			Assert::AreEqual((unsigned int)0, stack.size());
		}
		TEST_METHOD(PushBookOnStack_StackSize_StackNotEmpty)
		{
			Stack stack;
			Book book(42, "Livre 42", 4242);

			stack.push(book);

			Assert::IsFalse(stack.isEmpty());
			Assert::AreEqual((unsigned int)1, stack.size());
		}
		TEST_METHOD(PopMultiBookOnStack_PopFristElement)
		{
			Stack stack;
			Book book1(42, "Livre 42", 4242);
			Book book2(32, "Livre 32", 3232);
			Book book3(22, "Livre 22", 2222);
			Book book4(12, "Livre 12", 1212);
			Book book5(02, "Livre 02", 0202);

			stack.push(book1);
			stack.push(book2);
			stack.push(book3);
			stack.push(book4);
			stack.push(book5);

			stack.pop();


			Assert::IsTrue(book4 == stack.top());

		}
		TEST_METHOD(TopSeveralTimes_UntilTheStackIsEmpty)
		{
			Stack stack;
			Book book1(42, "Livre 42", 4242);
			Book book2(32, "Livre 32", 3232);
			Book book3(22, "Livre 22", 2222);
			Book book4(12, "Livre 12", 1212);
			Book book5(02, "Livre 02", 0202);
			
			stack.push(book1);
			stack.push(book2);
			stack.push(book3);
			stack.push(book4);
			stack.push(book5);

			stack.pop();
			Assert::IsTrue(book4 == stack.top());
			stack.pop();
			Assert::IsTrue(book3 == stack.top());
			stack.pop();
			Assert::IsTrue(book2 == stack.top());
			stack.pop();
			Assert::IsTrue(book1 == stack.top());
			stack.pop();

			Assert::IsTrue(true == stack.isEmpty());

		}
	};
}
