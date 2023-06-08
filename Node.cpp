#include "Node.h"

Node::Node(const int data, Node* next_element)
	: data(data), next_element(next_element)
{
}

void Node::operator=(const int other_data)
{
	this->data = other_data;
}
