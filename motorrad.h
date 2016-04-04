#pragma once

#ifndef MOTORRAD_H
#define MOTORRAD_H
#endif // !MOTORRAD_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>

using std::string;

class motorrad : public fahrzeug
{
private:
	int baujahr;

	void setBaujahr(int);

public:
	motorrad(int _baujahr)
	{
		setBaujahr(_baujahr);
	}

	motorrad()
	{}


	int getBaujahr();
};