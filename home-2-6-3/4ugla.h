#pragma once
#include <iostream>

class kvadrat {
protected:
	int a, b, c, d, A, B, C, D;
public:
	kvadrat() {};
	kvadrat(int a, int b, int c, int d, int A, int B, int C, int D);
	kvadrat();
	void vivod();
};

class pryamougolnik : public kvadrat {
public:
	pryamougolnik() {};
	pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D);
	pryamougolnik();
	void vivod();
};

class chetyrehugolnik : public kvadrat {
public:
	chetyrehugolnik() {};
	chetyrehugolnik(int a, int b, int c, int d, int A, int B, int C, int D);
	chetyrehugolnik();
	void vivod();
};


class parallerogramm : public kvadrat {
public:
	parallerogramm() {};
	parallerogramm(int a, int b, int c, int d, int A, int B, int C, int D);
	parallerogramm();
	void vivod();
};

class romb : public kvadrat {
public:
	romb() {};
	romb(int a, int b, int c, int d, int A, int B, int C, int D);
	romb();
	void vivod();
};