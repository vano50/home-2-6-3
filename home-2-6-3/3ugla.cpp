#include <iostream>
#include "3ugla.h"


	treugolnik::treugolnik(int a, int b, int c, int A, int B, int C) {}
	treugolnik::treugolnik() { a = 10, b = 20, c = 30, A = 50, B = 60, C = 70; }
	void treugolnik::vivod() { std::cout << "Треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }



	pryamougolnii_treugolnik::pryamougolnii_treugolnik(int a, int b, int c, int A, int B, int C) {}
	pryamougolnii_treugolnik::pryamougolnii_treugolnik() { C = 90; }
	void pryamougolnii_treugolnik::vivod() { std::cout << "Прямоугольный треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }



	ravnobedrenii_treugolnik::ravnobedrenii_treugolnik(int a, int b, int c, int A, int B, int C) {}
	ravnobedrenii_treugolnik::ravnobedrenii_treugolnik() { c = 10, C = 50; }
	void ravnobedrenii_treugolnik::vivod() { std::cout << "Равнобедренный треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }



	ravnostoronii_treugolnik::ravnostoronii_treugolnik(int a, int b, int c, int A, int B, int C) {}
	ravnostoronii_treugolnik::ravnostoronii_treugolnik() { a = 30, b = 30, A = 60, C = 60; }
	void ravnostoronii_treugolnik::vivod() { std::cout << "Равносторонний треугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
