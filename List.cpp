#include "List.h"

List::List()
	:first_element(nullptr), size(0)
{
}

List::~List()
{
	clear_list();
}

List::List(const List& second_list)
{
	if (this->first_element == nullptr)
	{
		for (Node* node = second_list.first_element; node != nullptr; node = node->next_element)
		{
			this->push_back(node->data);
		}
	}
}

List::List(List&& second_list) noexcept
{
	std::swap(this->first_element, second_list.first_element);
}

void List::push_front(int data)
{
	first_element = new Node(data, first_element);
	size++;
}

void List::push_back(int data)
{
	if (first_element == nullptr)
	{
		first_element = new Node(data);
	}
	else
	{
		Node* this_node = first_element;
		while (this_node->next_element != nullptr)
		{
			this_node = this_node->next_element;
		}
		this_node->next_element = new Node(data);
	};

	size++;
}

void List::del_front()
{
	if (first_element != nullptr)
	{
		Node* temp = first_element;
		first_element = first_element->next_element;
		size--;
		delete temp;
	}
}

void List::clear_list()
{
	while (size > 0)
	{
		del_front();
	}
}

int List::get_size()
{
	return size;
}

std::string List::to_string()
{
	std::stringstream buffer;
	if (first_element != nullptr)
	{
		Node* this_node = first_element;
		for (size_t i = 0; i < size; i++)
		{
			buffer << this_node->data << ' ';
			this_node = this_node->next_element;
		}
	}
	return buffer.str();
}

List& List::operator=(const List& second_list)
{
	if (this->first_element == nullptr)
	{
		for (Node* node = second_list.first_element; node != nullptr; node = node->next_element)
		{
			this->push_back(node->data);
		}
	}
	return *this;
}

List& List::operator=(List&& second_list) noexcept
{
	std::swap(this->first_element, second_list.first_element);
	return *this;
}

bool List::operator==(List& second_list)
{
	return(this->to_string() == second_list.to_string());
}
