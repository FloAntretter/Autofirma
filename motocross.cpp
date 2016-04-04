#include "motocross.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using std::string;

string Motocross::getReifen()
{
	return reifen;
}

void Motocross::setReifen(string _reifen)
{
	reifen = _reifen;
}