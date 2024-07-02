#include <iostream>
#include "4ugla.h"


    kvadrat::kvadrat(int a, int b, int c, int d, int A, int B, int C, int D) {}
    kvadrat::kvadrat() { a = 20, b = 20, c = 20, d = 20, A = 90, B = 90, C = 90, D = 90; }
	void kvadrat::vivod() { std::cout << "Квадрат: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }



	pryamougolnik::pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D) {}
	pryamougolnik::pryamougolnik() { a = 10, c = 10; }
	void pryamougolnik::vivod() { std::cout << "Прямоугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }



	chetyrehugolnik::chetyrehugolnik(int a, int b, int c, int d, int A, int B, int C, int D) {}
	chetyrehugolnik::chetyrehugolnik() { a = 10, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80; }
	void chetyrehugolnik::vivod() { std::cout << "Четырёхугольник: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }




	parallerogramm::parallerogramm(int a, int b, int c, int d, int A, int B, int C, int D) {}
	parallerogramm::parallerogramm() { b = 30, d = 30, A = 30, B = 40, C = 30, D = 40; }
	void parallerogramm::vivod() { std::cout << "Параллелограмм: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }



	romb::romb(int a, int b, int c, int d, int A, int B, int C, int D) {}
	romb::romb() { a = 30, b = 30, c = 30, d = 30, A = 30, B = 40, C = 30, D = 40; }
	void romb::vivod() { std::cout << "Ромб: " << "\n" << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << "\n" << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << "\n"; }
