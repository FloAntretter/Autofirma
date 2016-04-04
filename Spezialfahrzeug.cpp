#include "spezialfahrzeug.h"
#include <string>

using std::string;

void Spezialfahrzeug::setArt(string _art)
{
	art = _art;
}

void Spezialfahrzeug::setZweispurig(bool _zweispurig)
{
	zweispurig = _zweispurig;
}

string Spezialfahrzeug::getArt()
{
	return art;
}

bool Spezialfahrzeug::getZweispurig()
{
	return zweispurig;
}