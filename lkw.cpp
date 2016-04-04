#include "lkw.h"
#include <iostream>
#include <string>
#include <cstdlib>

using std::string;

string LKW::getBenutzung()
{
	return benutzung;
}

void LKW::setBenutzung(string _benutzung)
{
	benutzung = _benutzung;
}
