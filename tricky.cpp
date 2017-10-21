#include<iostream>
#include "Tablero.h"
#include "Jugador.h"
#include "Maquina.h"
#include "Persona.h"
#include "Ficha.h"
#include <string.h>

using namespace std;


int main(){
	string etqs= "abcdefghi";
	Jugador j1("plyer",'X');
	Jugador j2 ("player 2",'O');
	Tablero tbl(etqs);
	tbl.dibujarse();

	
	

	
	do{
		tbl.dibujarse();
		j1.dibujarse();
		j2.dibujarse();
		Ficha f1 = j1.nextJugada(tbl);
		char etq1 = f1.getEtiqueta();
		char s1= j1.getSimbolo();
		tbl.asignarSimbolo(s1,et1);
		if(j1.verifyTricky(tbl) == true){
			cout<<"el jugador"<< j1.getNombre<< "gano"<< endl;
			return 0;

		Ficha f2 = j2.nextJugada(tbl);
		char etq2 = f2.getEtiqueta();
		char s2= j2.getSimbolo();
		tbl.asignarSimbolo(s2,et2);
		if(j2.verifyTricky(tbl) == true){
			cout<<"el jugador"<< j2.getNombre<< "gano"<< endl;
			return 0;


	}while(1<0);
		
	return 0;
}

