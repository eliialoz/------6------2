/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#include<iostream>
#include"Polygon.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;
//getinput
Polygon* getInput(uint num) {
	Polygon* p;
	if (num != 3 && num != 4)
		p = new Polygon(num);
	else if (num == 3) {
		cout << "enter sides for polygon:" << endl;
		uint arr[3];
		for (uint i = 0; i < num; i++) {
			cin >> arr[i];
		}
		p = new Triangle(arr[0], arr[1], arr[2]);
	}
	else {
		cout << "enter sides for polygon:" << endl;
		uint arr[2];
		for (uint i = 0; i < num - 2; i++) {
			cin >> arr[i];
		}
		p = new Rectangle(arr[0], arr[1]);
	}
	return p;
}

int main() {

	Polygon* p1;
	Polygon* p2;
	uint num1, num2;
	
		cout << "enter number of sides for polygon 1:" << endl;
		cin >> num1;
		p1 = getInput(num1);
		cout << "enter number of sides for polygon 2:" << endl;
		cin >> num2;
		if (num1 == num2) {
			p2 = getInput(num1);
			if (*p1 == *p2)
				cout << "equal" << endl;
			else
				cout << "not equal" << endl;
		}
		else
			cout << "not equal" << endl;
	
	return 0;
}