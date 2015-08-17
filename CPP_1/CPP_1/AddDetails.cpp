/* Author Shruty janakiraman
Most basic program in C++
To input and output a person's name and age  using cin and cout
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>

void main()
{
	int age;
	char name[10];
	using namespace std;
	std::cout << "enter the name of the person";
	std::fgets(name, 10, stdin);
	std::cout << "enter the age of the person";
	std::cin >> age;
	std::cout << "name is:" << name;
	std::cout << "\n age is :" << age;
	_getch();
	
}