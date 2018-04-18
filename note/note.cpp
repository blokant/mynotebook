#include "note.h"
#include <iostream>

Note::Note()
{
	std::cout << "Hello from note constructor\n";
}
Note::~Note()
{
	std::cout << "destructor\n";
}