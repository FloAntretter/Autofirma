#pragma once

#ifndef MOPED_H
#define MOPED_H
#endif // !MOPED_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "motorrad.h"

using std::string;

class Moped : public Motorrad
{
private:
	int stauraum;

	void setStauraum(int);

public:
	Moped(int _stauraum)
	{
		setStauraum(_stauraum);
	}

	Moped()
	{}

	int getStauraum();
}