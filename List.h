#pragma once
#include "Node.h"
#include <iostream>
#include <string>
#include <sstream>

class List
{
	public:
		
		//constructor
		List();

		//destructor
		~List();

		//copy constructor
		List(const List& second);

		//pushing element in front of list
		void push_front(int data);

		//pushing element in back of list
		void push_back(int data);

		//delete element in front of list
		void del_front();

		//clear list
		void clear_list();

		//getting size of list
		int get_size();

		//convert list into string
		std::string to_string();

		// overloading the operator ==
		List& operator=(const List& second);


	private:

		Node* first_element;

		int size;
};
