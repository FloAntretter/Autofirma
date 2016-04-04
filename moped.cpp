#include "moped.h"
#include <iostream>
#include <Windows.h>
#include <cstdlib>

using std::string;

int Moped::getStauraum()
{
	return stauraum;
}

void Moped::setStauraum(int _stauraum)
{
	stauraum = _stauraum;
}