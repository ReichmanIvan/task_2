#pragma once
#include "Node.h"
#include <iostream>
#include <string>
#include <sstream>

class List
{
	public:
		
		//Конструктор списка
		List();

		//Деконструктор списка
		~List();

		//Конструктор копирования
		List(const List& second);

		//Функция добавления элемента в начало списка
		void push_front(int data);

		//Функция добавления элемента в конец списка
		void push_back(int data);

		//Удаление элемента
		void del_front();

		//Очищение списка
		void clear_list();

		//Функция, возвращающая размер списка
		int get_size();

		//Функция, конвертирующая список в строку
		std::string to_string();

		//Перегрузка оператора =
		List& operator=(const List& second);


	private:
		
		//Указатель на первый элемент
		Node* first_element;

		int size;
};
