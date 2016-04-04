#include "motorrad.h"
#include <string>
#include <iostream>
#include <cstdlib>

using std::string;

int Motorrad::getBaujahr()
{
	return baujahr;
}

void Motorrad::setBaujahr(int _baujahr)
{
	baujahr = _baujahr;
}