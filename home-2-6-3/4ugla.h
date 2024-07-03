#pragma once
#include <iostream>

class kvadrat {
protected:
	int a, b, c, d, A, B, C, D;
public:
	kvadrat(int a, int b, int c, int d, int A, int B, int C, int D);
	kvadrat();
	void vivod();
};

class pryamougolnik : public kvadrat {
public:
	pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D);
	pryamougolnik();
	void vivod();
};

class chetyrehugolnik : public kvadrat {
public:
	chetyrehugolnik(int a, int b, int c, int d, int A, int B, int C, int D);
	chetyrehugolnik();
	void vivod();
};


class parallerogramm : public kvadrat {
public:
	parallerogramm(int a, int b, int c, int d, int A, int B, int C, int D);
	parallerogramm();
	void vivod();
};

class romb : public kvadrat {
public:
	romb(int a, int b, int c, int d, int A, int B, int C, int D);
	romb();
	void vivod();
};
