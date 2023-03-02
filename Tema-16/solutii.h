#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine câte dintre elementele situate pe linii cu indici pari sunt prime.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrElementePrime(x, m, n);
	cout << "Numarul de elemente prime situate pe linii cu indici pari este: " << nr << endl;
}
void sol2() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine elementul cu număr maxim de apariții în matrice. Dacă există mai multe elemente cu număr maxim de apariții se va afișa cel mai mare dintre ele.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = elementulCuNrMaximDeAparitii(x, m, n);
	cout << "Elementul cu numarul maxim de aparitii este: " << nr << endl;
}
void sol3() { //?
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine elementul cu număr maxim de apariții în matrice. Dacă există mai multe elemente cu număr maxim de apariții se vor afișa toate, în ordine crescătoare.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	elementulCuNrMaximDeAparitiiAfisareTot(x, m, n);
}
void sol4() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine câte linii ale matricei au toate elementele egale.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrLiniiEgale(x, m, n);
	cout << "Numarul de linii cu elemente egale este: " << nr << endl;

}
void sol5() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine câte coloane ale matricei au elementele distincte două câte două.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrLiniiCuElementeDistincte(x, m, n);
	cout << "Numarul de linii cu elemente distincte este: " << nr << endl;
}
void sol6() {
	//Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [3, 100], în această ordine: n și m, apoi elementele unui tablou bidimensional cu n linii și m coloane, iar la final un număr x.
	//Programul afișează pe ecran mesajul DA, dacă există cel puțin un element egal cu x aflat pe conturul tabloului(format din prima linie, ultima linie, prima coloană și ultima coloană), sau mesajul NU în caz contrar.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti elementul" << endl;
	int c;
	cin >> c;
	bool aff = existaCelPutinUnElementEgalCuXPeBorduri(x, m, n,c);
	aff == true
		?
		cout << "Exista cel putin un element egal cu x pe bordurile matricii." << endl
		:
		cout << "Nu exista cel putin un element egal cu x pe bordurile matricii." << endl;
}
void sol7() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine câte elemente din matrice au toți vecinii numere pare.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrElementeCuVeciniPari(x, m, n);
	cout << "Numarul de elemente cu vecinii pari este: " << nr-1 << endl;
}
void sol8() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine cea mai mare valoare care apare în matrice de cel puțin două ori.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = elementeMaximMaiMulteAparitiiDe2(x, m, n);
	cout << "Elementul maixm care apare de cel putin mai mult de doua ori este: " << nr << endl;

}