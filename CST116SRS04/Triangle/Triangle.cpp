// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>

	const float pi = 3.14;

	using namespace std;

	void AAA(float & A, float & B, float & C, float & a, float & b, float & c) {
		a = sin(A*pi / 180);
		b = sin(B*pi / 180);
		c = sin(C*pi / 180);
	}

	void AAS(float & A, float & B, float & C, float & a, float & b, float & c) {
		C = 180 - A - B;
		a = sin(A*pi / 180)*c / sin(C*pi / 180);
		b = sin(B*pi / 180)*c / sin(C*pi / 180);
	}

	void ASA(float & A, float & B, float & C, float & a, float & b, float & c) {
		B = 180 - A - C;
		a = sin(A*pi / 180)*b / sin(B*pi / 180);
		c = sin(C*pi / 180)*c / sin(B*pi / 180);
	}

	void SAS(float & A, float & B, float & C, float & a, float & b, float & c) {
		A = asin(a*sin(B*pi / 180) / b) * 180 / pi;
		C = 180 - B - A;
		b = sin(B*pi / 180)*a / sin(A*pi / 180);
	}

	void SSA(float & A, float & B, float & C, float & a, float & b, float & c) {
		A = asin(a*sin(C*pi / 180) / c) * 180 / pi;
		B = 180 - C - A;
		c = sin(C*pi / 180)*a / sin(A*pi / 180);
	}

	void SSS(float & A, float & B, float & C, float & a, float & b, float & c) {
		A = acos((b*b + c*c - a*a) / (2 * b*c)) * 180 / pi;
		B = acos((a*a + c*c - b*b) / (2 * a*c)) * 180 / pi;
		C = 180 - A - B;
	}

	// Main function
	int main() {

		int choice;
		float A, B, C, a, b, c;
		A = 0;
		B = 0;
		C = 0;
		a = 0;
		b = 0;
		c = 0;

		cout << "Enter type of triange (1-6) from following:" << endl;
		cout << "1: AAA" << endl << "2: AAS" << endl << "3: ASA" << endl << "4: SAS" << endl << "5: SSA" << endl << "6: SSS" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter angle A: ";
			cin >> A;
			cout << "Enter angle B: ";
			cin >> B;
			cout << "Enter angle C: ";
			cin >> C;
			AAA(A, B, C, a, b, c);
			break;
		case 2:
			cout << "Enter angle A: ";
			cin >> A;
			cout << "Enter angle B: ";
			cin >> B;
			cout << "Enter side c: ";
			cin >> c;
			AAS(A, B, C, a, b, c);
			break;
		case 3:
			cout << "Enter angle A: ";
			cin >> A;
			cout << "Enter side b: ";
			cin >> b;
			cout << "Enter angle C: ";
			cin >> C;
			ASA(A, B, C, a, b, c);
			break;
		case 4:
			cout << "Enter side a: ";
			cin >> a;
			cout << "Enter angle B: ";
			cin >> B;
			cout << "Enter side c: ";
			cin >> c;
			SAS(A, B, C, a, b, c);
			break;
		case 5:
			cout << "Enter side a: ";
			cin >> a;
			cout << "Enter side b: ";
			cin >> b;
			cout << "Enter angle C: ";
			cin >> C;
			SSA(A, B, C, a, b, c);
			break;
		case 6:
			cout << "Enter side a: ";
			cin >> a;
			cout << "Enter side b: ";
			cin >> b;
			cout << "Enter side c: ";
			cin >> c;
			SSS(A, B, C, a, b, c);
			break;
		default:
			cout << "Enter choice between 1-6" << endl;
		}

		if ((A + B + C) != 180) {
			cout << "Unsolvable" << endl;
		}
		else {
			cout << "A: " << A << " degrees" << endl;
			cout << "B: " << B << " degrees" << endl;
			cout << "C: " << C << " degrees" << endl;
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
			cout << "c: " << c << endl;
		}

		return 0;

	}
