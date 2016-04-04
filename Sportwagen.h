#pragma once

#ifndef SPORTWAGEN_H
#define SPORTWAGEN_H

#include "pkw.h"

class Sportwagen : public PKW
{
private:
	short bodenfreiheit;
	bool cabrio;
	void setBodenfreiheit(short);
	void setCabrio(bool);

public:
	Sportwagen(short _bodenfreiheit, bool _cabrio)
	{
		setBodenfreiheit(_bodenfreiheit);
		setCabrio(_cabrio);
	}

	Sportwagen() {}

	short getBodenfreiheit();
	bool getCabrio();
};

#endif