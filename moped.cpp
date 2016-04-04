#include "moped.h"
#include <iostream>
#include <Windows.h>
#include <cstdlib>

using std::string;

int moped::getStauraum()
{
	return stauraum;
}

void moped::setStauraum(int _stauraum)
{
	stauraum = _stauraum;
}