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