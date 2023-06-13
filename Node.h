#pragma once

/**
* \brief Структура "Узел"
*/
struct Node
{
	/**
	* \brief Данные, лежащие в узле
	*/
	int data;

	/**
	* \brief Указатель на следующий элемент
	*/
	Node* next_element;

	/**
	* \brief Функция, инициализирующая узел
	* \param data Данные узла
	* \param next Указатель на пустой следующий элемент
	*/
	Node(int data, Node* next = nullptr);

	/**
	* \brief Функция, перегружающая оператор =
	* \param other_data Данные, которые будут скопированы в новый узел
	*/
	void operator=(const int other_data);
};

