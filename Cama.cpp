#include "Cama.h"

Cama:: Cama(){}
Cama::Cama(int numeroCama){
	paciente = NULL;
	estado = 0;
	this->numeroCama = to_string(numeroCama);
}
void Cama:: setEstado(bool estado){}
void Cama:: setPaciente(Paciente * paciente){}
void Cama:: setNumeroCama(char sector){
	this->numeroCama = to_string(sector) + getNumeroCama();
}
string Cama::getNumeroCama() { return numeroCama; }
Paciente* Cama::getPaciente() { return paciente; }
bool Cama::getEstado() { return estado; }
void Cama::ingresarPaciente(Paciente* paciente) {
	this->paciente(paciente);
	estado = 1;
	this->paciente->setEstado();
}
void Cama::liberarCama() {
	estado = 0;
	paciente->setEstado();
	paciente = NULL;
}