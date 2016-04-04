#pragma once

#ifndef SPEZIALFAHRZEUG_H
#define SPEZIELFAHRZEUG_H

#include "Fahrzeug.h"

class Spezialfahrzeug : public Fahrzeug
{
private:
	char art;
	bool zweispurig;

	void setArt(char);
	void setZweispurig(bool);
public:
	Spezialfahrzeug(char _art, bool _zweispurig)
	{
		setArt(_art);
		setZweispurig(_zweispurig);
	}

	char getArt();
	bool getZweispurig();
};

#endif