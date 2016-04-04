#pragma once

#ifndef MOTOCROSS_H
#define MOTOCROSS_H
#endif // !MOTOCROSS_H


#include <string>
#include <Windows.h>
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