#pragma once
#include <iostream>

class treugolnik {
protected:
	int a, b, c, A, B, C;
public:
	treugolnik(int a, int b, int c, int A, int B, int C);
	treugolnik();
	void vivod();
};

class pryamougolnii_treugolnik : public treugolnik {
public:
	pryamougolnii_treugolnik(int a, int b, int c, int A, int B, int C);
	pryamougolnii_treugolnik();
	void vivod();
};

class ravnobedrenii_treugolnik : public treugolnik {
public:
	ravnobedrenii_treugolnik(int a, int b, int c, int A, int B, int C);
	ravnobedrenii_treugolnik();
	void vivod();
};

class ravnostoronii_treugolnik : public treugolnik {
public:
	ravnostoronii_treugolnik(int a, int b, int c, int A, int B, int C);
	ravnostoronii_treugolnik();
	void vivod();
};
