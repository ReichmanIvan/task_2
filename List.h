#pragma once
#include "Node.h"
#include <iostream>
#include <string>
#include <sstream>

class List
{
public:

	/**
	* \brief Функция, инициализирующая список
	*/
	List();

	/**
	* \brief Функция, удаляющая список
	*/
	~List();

	/**
	* \brief Функция, копирующая список
	* \param second_list Список, который будет скопирован
	*/
	List(const List& second_list);

	/**
	* \brief Функция, перемещающая список
	* \param second_list Список, который будет перемещен
	*/
	List(List&& second_list) noexcept;

	/**
	* \brief Функция, добавляющая элемент в начало списка
	* \param data Данные, которые будут добавлены
	*/
	void push_front(int data);

	/**
	* \brief Функция, добавляющая элемент в конец списка
	* \param data Данные, которые будут добавлены
	*/
	void push_back(int data);

	/**
	* \brief Функция, удаляющая узел в начале списка
	*/
	void del_front();

	/**
	* \brief Функция, удаляющая все узлы списка
	*/
	void clear_list();

	/**
	* \brief Функция, возвращающая размер списка
	* \return Размер списка
	*/
	int get_size();

	/**
	* \brief Функция, превращающая список в строку
	* \return Строка, состоящая из узлов
	*/
	std::string to_string();

	/**
	* \brief Функция, перегружающая оператор =
	* \param second_list Список, который будет скопирован
	* \return Скопированный список
	*/
	List& operator=(const List& second_list);

	/**
	* \brief Функция, перегружающая оператор =
	* \param second_list Список, который будет перемещен
	* \return Перемещенный список
	*/
	List& operator=(List&& second_list) noexcept;


private:

	Node* first_element;

	size_t size;
};
