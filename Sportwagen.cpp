#include "sportwagen.h"

void Sportwagen::setBodenfreiheit(short _bodenfreiheit)
{
	bodenfreiheit = _bodenfreiheit;
}

void Sportwagen::setCabrio(bool _cabrio)
{
	cabrio = _cabrio;
}

short Sportwagen::getBodenfreiheit()
{
	return bodenfreiheit;
}

bool Sportwagen::getCabrio()
{
	return cabrio;
}