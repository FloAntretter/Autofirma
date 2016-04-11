#pragma once

#ifndef SPEZIALFAHRZEUG_H
#define SPEZIELFAHRZEUG_H

#include <string>
#include "fahrzeug.h"

using std::string;

class Spezialfahrzeug : Fahrzeug
{
private:
	string art;
	bool zweispurig;
	void setArt(string);
	void setZweispurig(bool);

public:
	Spezialfahrzeug(string _art, bool _zweispurig)
	{
		setArt(_art);
		setZweispurig(_zweispurig);
	}

	Spezialfahrzeug() {}

	string getArt();
	bool getZweispurig();
};

#endif