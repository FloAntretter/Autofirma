#include "motocross.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using std::string;

string motocross::getReifen()
{
	return reifen;
}

void motocross::setReifen(string _reifen)
{
	reifen = _reifen;
}