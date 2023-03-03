#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
bool nrPrim(int n) {
	int nrdiv = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			nrdiv++;
		}
	}
	if (nrdiv == 2) {
		return true;
	}
	else if (nrdiv != 2) {
		return false;
	}
}
int nrElementePrime(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (nrPrim(x[i][j]) == true) {
					nr++;
				}
			}
		}
	}
	return nr;
}
int elementulCuNrMaximDeAparitii(int x[100][100], int& m, int& n) {
	int eMax = 0;
	int nrMax = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int nr = 0;
			int e = x[i][j];
			for (int f = 0; f < m; f++) {
				for (int y = 0; y < n; y++) {
					if (x[f][y] == e) {
						nr++;
					}
				}
			}
			if (nr > nrMax) {
				nrMax = nr;
				eMax = x[i][j];
			}
			
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int nr = 0;
			int e = x[i][j];
			for (int f = 0; f < m; f++) {
				for (int y = 0; y < n; y++) {
					if (x[f][y] == e) {
						nr++;
					}
				}
			}
			if (nr == nrMax && e > eMax) {
				eMax = x[i][j];
			}

		}
	}
	return eMax;
}
void elementulCuNrMaximDeAparitiiAfisareTot(int x[100][100], int& m, int& n) {
	int eMax = 0;
	int nrMax = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int nr = 0;
			int e = x[i][j];
			for (int f = 0; f < m; f++) {
				for (int y = 0; y < n; y++) {
					if (x[f][y] == e) {
						nr++;
					}
				}
			}
			if (nr > nrMax) {
				nrMax = nr;
				eMax = x[i][j];
			}

		}
	}
}
int nrLiniiEgale(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		int aff = false;
		for (int j = 0; j < n-1; j++) {
			if (x[i][j] == x[i][j + 1]) {
				aff = true;
			}
			else if (x[i][j] != x[i][j + 1]) {
				aff = false;
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	return nr;
}
int nrLiniiCuElementeDistincte(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int j = 0; j < n; j++) {
		int aff = false;
		for (int i = 0; i < m - 1; i++) {
			if (x[i][j] != x[i + 1][j]) {
				aff = true;
			}
			else if (x[i][j] == x[i + 1][j]) {
				aff = false;
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	return nr;
}
bool existaCelPutinUnElementEgalCuXPeBorduri(int x[100][100], int& m, int& n, int c) {
	int aff = 0;
	for (int i = 0; i < m; i++) {
		if (i == 0 || i == m - 1) {
			for (int j = 0; j < n; j++) {
				if (x[i][j] == c) {
					aff = true;
				}
			}
		}
		else {
			for (int j = 0; j < n ; j++) {
				if (j == 0 || j == n - 1) {
					if (x[i][j] == c) {
						aff = true;
					}
				}
			}
		}
	}
	return aff;
}
int nrElementeCuVeciniPari(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 1; j < n-1; j++) {
			if (x[i][j - 1] % 2 == 0 && x[i][j + 1] % 2 == 0) {
				nr++;
			}
		}
	}
	return nr;
}
int elementeMaximMaiMulteAparitiiDe2(int x[100][100], int& m, int& n) {
	int max = -1;
	for (int i = 0; i < m; i++) {
		bool aff = false;
		for (int j = 0; j < n; j++) {
			int nr = 0;
			int e = x[i][j];
			for (int f = 0; f < m; f++) {
				for (int y = 0; y < n; y++) {
					if (x[f][y] == e) {
						nr++;
					}
				}
			}
			if (nr >= 2) {
				aff = true;
				if (x[i][j] > max) {
					max = x[i][j];
				}
			}
		}
	}
	return max;
}
void coloaneCuElementeEgale(int x[100][100], int& m, int& n) {
	for (int j = 0; j < n; j++) {
		int aff = false;
		for (int i = 0; i < m-1; i++) {
			if (x[i][j] == x[i+1][j]) {
				aff = true;
			}
			else if (x[i][j] != x[i+1][j]) {
				aff = false;
			}
		}
		if (aff == true) {
			cout << j << " '" << x[0][j] << "'" << endl;
		}
	}
}
bool apartine(int v[], int dim, int n) {
	for (int i = 0; i < dim; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}
int sumaElementePareCareAparOdata(int x[100][100], int& m, int& n) {
	int v[100], d = 0;
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] % 2 == 0 && apartine(v,d,x[i][j]) == false) {
				v[d] = x[i][j];
				d++;
				s += x[i][j];
			}
		}
	}
	return s;
}
void numarMaximDeElementePare(int x[100][100], int& m, int& n) {
	int max = -1;
	for (int i = 0; i < m; i++) {
		int nr = 0;
		for (int j = 0; j < n; j++) {
			if (x[i][j] % 2 == 0) {
				nr++;
			}
		}
		if (nr > max) {
			max = nr;
		}
		
	}
	for (int i = 0; i < m; i++) {
		int nr = 0;
		int e = 0;
		for (int j = 0; j < n; j++) {
			if (x[i][j] % 2 == 0) {
				nr++;
			}
		}
		if (nr == max) {
			cout << i+1 << " ";
		}
		
	}
	cout << endl;
}
int afisareIndiceLineCuSumaMax(int x[100][100], int& m, int& n) {
	int max = -1;
	int l = 0;
	for (int i = 0; i < m; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
				s += x[i][j];
		}
		if (s > max) {
			max = s;
			l = i;
		}
	}
	return l+1;
}
void interschimbareColoane(int x[100][100], int m, int n, int c1, int c2) {
	for (int i = 0; i < n; i++) {
		int aux = x[i][c2];
		x[i][c1] = x[i][c2];
		x[i][c2] = aux;
	}
}
void sortatePrimaLinie(int x[100][100], int m, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (x[0][i] > x[0][j]) {
				interschimbareColoane(x, m, n, i, j);
			}
		}
	}
	afisare(x, m, n);
}
bool apareKPeToateLiniile(int x[100][100], int m, int n, int k) {
	int nrL = 0;
	for (int i = 0; i < m; i++) {
		bool aff = false;
		for (int j = 0; j < n; j++) {
			if (x[i][j] == k) {
				aff = true;
			}
		}
		if (aff == true) {
			nrL++;
		}
	}
	if (nrL == m) {
		return true;
	}
	else {
		return false;
	}
}
void citireVector(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void eliminareLinie(int x[100][100], int& m, int& n,int l) {
	for (int j = 0; j < n; j++) {
		x[l][j] = x[l][j + 1];
	}
	m--;
	afisare(x, m, n);
}
void Rsol16(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		bool aff = false;
		for (int i2 = i+1; i2 < m-1; i2++) {
			for (int j = 0; j < n; j++) {
				for (int j2 = j+1; j2 < n-1; j2++) {
					if (x[i][j] == x[i2][j2]) {
						aff == true;
					}
					else {
						aff = false;
					}
				}
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	cout << nr << endl;
}
void elementulMaximAlFiecareiLinie(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		int max = -1;
		int poz = 0;
		for (int j = 0; j < n; j++) {
			if (x[i][j] > max) {
				max = x[i][j];
				poz = j;
			}
		}
		cout << "Elemenul maxim al linii " << i << " este: " << max << " pe pozitia: " << poz << endl;
	}
}
int nrColoaneEgaleCu0(int x[100][100], int m, int n) {
	int nr =0;
	for (int j = 0; j < n; j++) {
		int aff = false;
		for (int i = 0; i < m; i++) {
			if (x[i][j] == 0) {
				aff = true;
			}
			else {
				aff = false;
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	return nr;
}
int sumaPeLiniePrecizata(int x[100][100], int m, int n, int l) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		if (i == l) {
			for (int j = 0; j < n; j++) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaPeColoanaPrecizata(int x[100][100], int m, int n, int c) {
	int s = 0;
	for (int j = 0; j < n; j++) {
		if (j == c) {
			for (int i = 0; i < m; i++) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int nrElementeCuVeciniDiferiti(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 1; j < n-1; j++) {
			if (x[i][j - 1] != x[i][j + 1]) {
				nr++;
			}
		}
	}
	return nr;
}