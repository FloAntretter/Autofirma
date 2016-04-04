#include "pkw.h"

void PKW::setSitzplaetze(int _sitzplaetze)
{
	sitzplaetze = _sitzplaetze;
}

void PKW::setBaujahr(int _baujahr)
{
	baujahr = _baujahr;
}

void PKW::setStauraum(int _stauraum)
{
	stauraum = _stauraum;
}

int PKW::getSitzplaetze()
{
	return sitzplaetze;
}

int PKW::getBaujahr()
{
	return baujahr;
}

int PKW::getStauraum()
{
	return stauraum;
}