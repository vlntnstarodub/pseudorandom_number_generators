#include <iostream>
#include <ctime>

#include "LCG.h"
#include "SCG.h"
#include "fibo.h"
#include "ICG.h"
#include "union.h"
#include "method6.h"
#include "method7.h"
#include "method8.h"
#include "method9.h"
#include "method10.h"

using namespace std;

void print(double u[]) {
	double quantity[10] = { 0 }; //number of spaces 
	// count the quantity of numbers in each space
	for (size_t i = 0; i < 100; i++) {
		for (int j = 0; j < 10; j++) {
			if (u[i] >= 0 + double(j*0.1) && u[i] < double(0.1 + double(j *0.1)))
				quantity[j]++;
		}
	}
	// cout values
	double sum = 0;
	for (int j = 0; j < 10; j++) {
		sum += (quantity[j]/100);
		cout << "[" << 0 + double(j*0.1) << ";" << double(0.1 + double(j *0.1)) << "]" << "  " << quantity[j] / 100 << endl;
	}
	cout << sum << endl;
}
void print1(double u[]) {
	double quantity[12] = { 0 };
	for (size_t i = 0; i < 100; i++) {
		if (u[i] >= -3 && u[i] < -2.5)
			quantity[0]++;
		if (u[i] >= -2.5 && u[i] < -2)
			quantity[1]++;
		if (u[i] >= -2 && u[i] < -1.5)
			quantity[2]++;
		if (u[i] >= -1.5 && u[i] < -1)
			quantity[3]++;
		if (u[i] >= -1 && u[i] < -0.5)
			quantity[4]++;
		if (u[i] >= -0.5 && u[i] < 0)
			quantity[5]++;
		if (u[i] >= 0 && u[i] < 0.5)
			quantity[6]++;
		if (u[i] >= 0.5 && u[i] < 1)
			quantity[7]++;
		if (u[i] >= 1 && u[i] < 1.5)
			quantity[8]++;
		if (u[i] >= 1.5 && u[i] <= 2)
			quantity[9]++;
		if (u[i] >= 2 && u[i] <= 2.5)
			quantity[10]++;
		if (u[i] >= 2.5 && u[i] <= 3)
			quantity[11]++;
	}
		cout << "[-3.0; -2.5]" << quantity[0]/100 << endl;
		cout << "[-2.5; -2.0]" << quantity[1]/100 << endl;
		cout << "[-2.0; -1.5]" << quantity[2]/100 << endl;
		cout << "[-1.5; -1.0]" << quantity[3]/100 << endl;
		cout << "[-1.0; -0.5]" << quantity[4]/100 << endl;
		cout << "[-0.5; 0.0]" << quantity[5]/100 << endl;
		cout << "[0.0; 0.5]" << quantity[6] / 100 << endl;
		cout << "[0.5; 1.0]" << quantity[7] / 100 << endl;
		cout << "[1.0; 1.5]" << quantity[8] / 100 << endl;
		cout << "[1.5; 2.0]" << quantity[9] / 100 << endl;
		cout << "[2.0; 2.5]" << quantity[10] / 100 << endl;
		cout << "[2.5; 3.0]" << quantity[11] / 100 << endl;
}
void print2(double u[]) {
	double quantity[200] = { 0 }; //number of spaces 
	// count the quantity of numbers in each space
	for (size_t i = 0; i < 100; i++) {
		for (int j = 0; j < 200; j++) {
			if (u[i] >= 0 + double(j*0.5) && u[i] < double(0.5 + double(j *0.5)))
				quantity[j]++;
		}
	}
	// cout values
	for (int j = 0; j < 200; j++) {
		cout << "[" << 0 + double(j*0.5) << ";" << double(0.5 + double(j *0.5)) << "]" << "  " << quantity[j] / 100 << endl;
	}
}

int main() {
	int n;
	cout << "Enter a number from 1 to 10 to choose a function you'd like to use" << endl;
	cin >> n;
	double quantity[10] = { 0 };
	double u[100];
	switch (n) {
	case 1:
		sLCG(time(NULL));
			for (size_t i = 0; i < 100; i++) {
				u[i] = LCG();
			}
		print(u);
		break;
	case 2:
		sSCG(564);
		for (size_t i = 0; i < 100; i++) {
			u[i] = SCG();
		}
		print(u);
		break;
	case 3:
		sFibo(738);
		for (size_t i = 0; i < 100; i++) {
			u[i] = fibo();
		}
		print(u);
		break;
	case 4:
		sICG(time(NULL));
		for (size_t i = 0; i < 100; i++) {
			u[i] = ICG();
		}
		print(u);
		break;
	case 5:
		sUnion(time(NULL));
		for (size_t i = 0; i < 100; i++) {
			u[i] = rUnion();
		}
		print(u);
		break;
	case 6:
		for (size_t i = 0; i < 100; i++) {
			u[i] = rand8();
		}
		print1(u);
		break;
	case 7:
		for (size_t i = 0; i < 100; i++) {
			u[i] = rand7();
		}
		print1(u);
		break;
	case 8:
		for (size_t i = 0; i < 100; i++) {
			u[i] = rand8();
		}
		print1(u);
		break;
	case 9:
		for (size_t i = 0; i < 100; i++) {
			u[i] = rand9();
		}
		print2(u);
		break;
	case 10:
		for (size_t i = 0; i < 100; i++) {
			u[i] = rand10();
		}
		print2(u);
		break;
	}
	system("pause");
	return 0;
}