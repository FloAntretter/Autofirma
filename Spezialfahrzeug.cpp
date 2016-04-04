#include "Spezialfahrzeug.h"

void Spezialfahrzeug::setArt(char _art)
{
	art = _art;
}

void Spezialfahrzeug::setZweispurig(bool _zweispurig)
{
	zweispurig = _zweispurig;
}

char Spezialfahrzeug::getArt()
{
	return art;
}

bool Spezialfahrzeug::getZweispurig()
{
	return zweispurig;
}