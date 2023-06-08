#pragma once

struct Node
{
	int data;

	//Указатель на следующий элемент
	Node* next_element;

	//Конструктор узла
	Node(int data, Node* next = nullptr);

	//Перегрузка оператора =
	void operator=(const int other_data);
};
