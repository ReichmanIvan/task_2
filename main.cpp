#include "..//list/List.h"

//Точка входа в программу
int main()
{
	List first_list;
	first_list.push_front(1);
	first_list.push_front(2);
	first_list.push_back(3);
	first_list.push_front(4);
	std::cout << first_list.get_size() << "\n";
	std::cout << first_list.to_string() << "\t";
	List second_list;
	second_list = first_list;
	std::cout << second_list.to_string();
	return 0;
};
