#pragma once

struct Node
{
	int data;

	//point to the next element
	Node* next_element;

	//constructor
	Node(int data, Node* next = nullptr);

	//overload operator =
	void operator=(const int other_data);
};
