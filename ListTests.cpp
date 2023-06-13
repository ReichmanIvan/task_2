#include "pch.h"
#include "CppUnitTest.h"
#include "..//list/List.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListTests
{
	TEST_CLASS(ListTests)
	{
	public:
		
		TEST_METHOD(push_back_test_valid_data_success)
		{

			//Arrange

			List default_list;

			std::string expected_string = "1 2 ";

			//Act

			default_list.push_back(1);

			default_list.push_back(2);

			std::string actual = default_list.to_string();

			//Assert

			Assert::AreEqual(expected_string, actual);

		}

		TEST_METHOD(push_front_test_valid_data_success)

		{

			//Arrange

			List default_list;

			std::string expected_string = "2 1 ";

			//Act

			default_list.push_back(1);

			default_list.push_front(2);

			std::string actual = default_list.to_string();

			//Assert

			Assert::AreEqual(expected_string, actual);

		}

		TEST_METHOD(get_size_test_valid_data_success)

		{

			//Arrange

			List default_list;

			int expected = 3;

			//Act

			default_list.push_back(1);

			default_list.push_back(2);

			default_list.push_back(3);

			int actual = default_list.get_size();

			//Assert

			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(comparison_operator_tets_valid_data_success)

		{

			//Arrange

			List first_list;

			List second_list;

			//Act

			first_list.push_back(1);

			first_list.push_back(2);

			second_list.push_back(1);

			second_list.push_back(2);

			//Assert

			Assert::IsTrue(first_list == second_list);

		}

		TEST_METHOD(copy_operator_test_valid_data_succeess)
		{
			//Arrange

			List first_list;

			List copied_list;

			//Act

			first_list.push_back(1);

			first_list.push_back(2);

			//Assert

			Assert::IsFalse(copied_list == first_list);
		}
		
		TEST_METHOD(copy_constructor_test)

		{

			//Arrange

			List List1;
			
			List List2;

			//Act

			List1.pushBack(4);

			List1.pushBack(5);

			List2 = List1;

			//Assert

			Assert::IsTrue(List1 == List2);

		}
		
		TEST_METHOD(move_constructor_test)

		{

			//Arrange

			List List1;
			List List2;
			List List3;
			
			//Act

			List1.pushBack(1);
			List1.pushBack(1);

			List2.pushBack(2);
			List2.pushBack(2);

			List3.pushBack(2);
			List3.pushBack(2);

			List2 = std::move(List1);

			//Assert

			Assert::IsTrue(List3 == List1);

		}
	};
}
