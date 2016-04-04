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
	Spezialfahrzeug(int _leistung, int _hubraum,
					string _marke, string _modell, 
					short _gewicht, short _laenge, short _breite,
					string _art, bool _zweispurig)
	{
		setLeistung(_leistung);
		setHubraum(_hubraum);
		setMarke(_marke);
		setModell(_modell);
		setGewicht(_gewicht);
		setLaenge(_laenge);
		setBreite(_breite);
		setArt(_art);
		setZweispurig(_zweispurig);
	}

	Spezialfahrzeug() {}

	string getArt();
	bool getZweispurig();
};

#endif