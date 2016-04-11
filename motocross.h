#pragma once

#ifndef MOTOCROSS_H
#define MOTOCROSS_H

#include <string>
#include <windows.h>
#include <iostream>
#include "motorrad.h"

using std::string;

class Motocross : public Motorrad
{
private:
	string reifen;
	void setReifen(string);

public:
	Motocross(string _reifen)
	{
		setReifen(_reifen);
	}

	Motocross()
	{}

	string getReifen();
};

#endif // !MOTOCROSS_H