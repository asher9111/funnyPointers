#include <iostream>
#include "human.h"

human::human()
{
	std::cout << "human constructed \n";
}

human::~human()
{
	std::cout << "human killed \n";
}

void human::yell()
{
	std::cout << "YELL \n";
}
