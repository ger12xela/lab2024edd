//============================================================================
// Name        : lab.cpp
// Author      : ger12xela
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


// es un ordenamiento O = n² ya qué para 
// accesar a memoria utiliza dos For 
// 
#include <iostream>
using namespace std;

int ray [10];
void burbuja (int ray[], int largo){

	int temp, i, j;
		for (i = 0; i < largo - 1; i++) {
			for (j = i + 1; j < largo; j++) {
				if (ray[i] > ray[j]) {
					temp = ray[i];
					ray[i] = ray[j];
					ray[j] = temp;
				}
			}
		}
}
int main() {
	cout << "ordenamiento burbuja \n"<< endl;
	cout << "INTRODUSA 10 ENTEROS UNO A UNO  \n"<< endl;
	for (int t = 0; t < 10; ++t) {
		cin >> ray[t];
		cout << "\nen posicion "<<t<<"---"<<ray[t]<< endl;

	}
	burbuja(ray,9);
	cout << "el ordemaniento es --"<< endl;
	for (int h = 0; h < 10; ++h) {
		cout << ray[h]<< endl;

	}
	return 0;
}
