#include "LKW.h"
#include <iostream>
#include <string>
#include <cstdlib>

using std::string;

string LKW::getMarke()
{
	return marke;
}

string LKW::getModell()
{
	return modell;
}

string LKW::getBenutzung()
{
	return benutzung;
}

void LKW::setMarke(string _marke)
{
	marke = _marke;
}

void LKW::setModell(string _modell)
{
	modell = _modell;
}

void LKW::setBenutzung(string _benutzung)
{
	benutzung = _benutzung;
}
