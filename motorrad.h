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
	Motorrad(int _baujahr)
	{
		setBaujahr(_baujahr);
	}

	Motorrad()
	{}


	int getBaujahr();
};