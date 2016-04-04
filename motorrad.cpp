#include "motorrad.h"
#include <string>
#include <iostream>
#include <cstdlib>

using std::string;

int motorrad::getBaujahr()
{
	return baujahr;
}

void motorrad::setBaujahr(int _baujahr)
{
	baujahr = _baujahr;
}