#include "Pabellon.h"

Pabellon::Pabellon() {}
Pabellon::Pabellon(char sector, char genero):genero(genero),sector(sector) {
	Cama* cama=NULL;
	for (int contador = 0; contador <= camas.size(); contador++) {
		cama = cama->Cama(sector, contador);
		camas[contador] = cama;
	}
	delete cama;
}
char Pabellon::getSectorPabellon() {return sector;}
char Pabellon::getGeneroPabellon() {return genero;}
void Pabellon::setGeneroPabellon(char&) {}
void Pabellon::setSectorPabellon(char&) {}
void Pabellon::ingresarPaciente(Paciente* paciente) {
	for (int contador = 0; contador <= camas.size(); contador++) {
		if(camas[contador]->getPaciente() == NULL) {
		camas[contador]->ingresarPaciente(paciente);
		}
	}
}
void Pabellon::liberarCama(int numero) { camas[numero]->liberarCama(); }