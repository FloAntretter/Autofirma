#pragma once

#ifndef PKW_H
#define PKW_H

class PKW
{
private:
	int sitzplaetze, baujahr, stauraum;
	void setSitzplaetze(int);
	void setBaujahr(int);
	void setStauraum(int);

public:
	PKW(int _sitzplaetze, int _baujahr, int _stauraum)
	{
		setSitzplaetze(_sitzplaetze);
		setBaujahr(_baujahr);
		setStauraum(_stauraum);
	}

	PKW() {}

	int getSitzplaetze();
	int getBaujahr();
	int getStauraum();
};

#endif