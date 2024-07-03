#include <iostream>
#include <string>
#include "3ugla.h"
#include "4ugla.h"





int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	treugolnik treug;
	pryamougolnii_treugolnik pryamtreug;
	ravnobedrenii_treugolnik ravnobed_treug;
	ravnostoronii_treugolnik ravnostor_treug;
	chetyrehugolnik chetyrehugolnik;
	pryamougolnik pryamoug;
	kvadrat kvad;
	parallerogramm paraller;
	romb romb;
	

	treug.vivod();
	pryamtreug.vivod();
	ravnobed_treug.vivod();
	ravnostor_treug.vivod();
	chetyrehugolnik.vivod();
	pryamoug.vivod();
	kvad.vivod();
	paraller.vivod();
	romb.vivod();
}