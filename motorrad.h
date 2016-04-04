#pragma once

#ifndef MOTORRAD_H
#define MOTORRAD_H
#endif // !MOTORRAD_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>
#include "fahrzeug.h"

using std::string;

class Motorrad : public Fahrzeug
{
private:
	int baujahr;

	void setBaujahr(int);

public:
	Motorrad(int _leistung, int _hubraum,
			 string _marke, string _modell,
			 short _gewicht, short _laenge, short _breite,
			 int _baujahr)
	{
		setLeistung(_leistung);
		setHubraum(_hubraum);
		setMarke(_marke);
		setModell(_modell);
		setGewicht(_gewicht);
		setLaenge(_laenge);
		setBreite(_breite);
		setBaujahr(_baujahr);
	}

	Motorrad()
	{}


	int getBaujahr();
};