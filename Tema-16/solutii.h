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
void sol9() {
	//Se dă o matrice cu m linii şi n coloane şi elemente numere naturale cu cel mult 4 cifre fiecare. Să se determine coloanele matricei care au toate elementele egale cu aceeași valoare.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	coloaneCuElementeEgale(x, m, n);
}
void sol10() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați suma valorilor pare distincte din matrice. Dacă o valoare pară apare în matrice de mai multe ori, se va aduna o singură dată.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaElementePareCareAparOdata(x, m, n);
	cout << "Suma elementelor pare luate doar odata din matrice este: " << s << endl;
}
void sol11() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați indicele liniei care conține număr maxim de elemente pare. Dacă există mai multe linii cu număr maxim de elemente pare, se vor afișa toți indicii, în ordine crescătoare.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	numarMaximDeElementePare(x, m, n);
}
void sol12() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine indicele liniei pentru care suma elementelor pare este maximă.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int l = afisareIndiceLineCuSumaMax(x, m, n);
	cout << "Linia cu suma maxima este: " << l << endl;
}
void sol13() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se ordoneze coloanele matricei astfel încât elementele de pe prima linie să fie ordonate crescăto
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisare(x, m, n);
	interschimbareColoane(x, m, n, 0, 1);
	afisare(x, m, n); //?
}
void sol14() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale și k valori naturale. Determinați pentru fiecare dintre cele k valori dacă apare pe fiecare linie a matricei.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int v[100], d = 0;
	citireVector(v, d);
	for (int i = 0; i < d; i++) {
		apareKPeToateLiniile(x, m, n, v[i]) == true
			?
			cout << "Are toate elemtele" << endl
			:
			cout << "Nu are toate elemtele" << endl;
	}
}
void sol15() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se elimine din matrice toate liniile care încep cu un număr prim și apoi să se afișeze matricea.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisare(x, m, n);
	cout << "-------------" << endl;
	eliminareLinie(x, m, n, 1); //???
}
void sol16() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine câte perechi de linii consecutive din matrice sunt identice.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	Rsol16(x, m, n);
}
void sol17() {
	//Să se determine, pentru fiecare linie a unei matrice, elementul maxim și indicele coloanei pe care se află.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	elementulMaximAlFiecareiLinie(x, m, n);
}
void sol18() {
	//Se consideră tabloul bidimensional cu m linii şi n coloane şi elemente numere naturale. Să se determine numărul de coloane care conţin doar elemente egale cu 0.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrColoaneEgaleCu0(x, m, n);
	cout << "Numarul de coloane egale cu 0 este: " << nr << endl;
}
void sol19() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Se cere să se determine suma elementelor de pe anumite linii și coloane, precizate.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Cate precizari doriti sa intoduceti? " << endl;
	int p = 0;
	cin >> p;
	int ctr = 0;
	while (ctr <= p) {
		cout << "Precizati o linie (0) sau o coloana (1)? " << endl;
		int pr;
		cin >> pr;
		if (pr == 0 || pr == 1) {
			if (pr == 0) {
				cout << "Intoruceti linia: " << endl;
				int l;
				cin >> l;
				int s = sumaPeLiniePrecizata(x, m, n, l);
				cout << "Suma liniei este: " << s << endl;
			}
			if (pr == 1) {
				cout << "Intoruceti coloana: " << endl;
				int c;
				cin >> c;
				int s = sumaPeColoanaPrecizata(x, m, n, c);
				cout << "Suma coloanei este: " << s << endl;
			}
		}
		else {
			cout << "Precizare inrodusa incorect" << endl;
		}
		ctr++;
	}
	
}
void sol20() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Determinați pentru câte dintre elementele matricei toți vecinii au valori diferite între ele.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrElementeCuVeciniDiferiti(x, m, n);
	cout << "Numarul de elemente ale matricii cu vecini elemente diferite este: " << nr << endl;
}