/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#ifndef MY_POLYGON
#define MY_POLYGON
#include<iostream>
#include"mytype.h"

class Polygon {
protected:
	uint _numSides;
	uint* _sides;
public:
	//Constructor
	Polygon() {};
	Polygon(uint numSides);
	Polygon(const Polygon& p1);
	Polygon(Polygon&& p1);
	// the circumference of the polygon
	uint perimeter()const;
	//operators overloading
	bool operator ==(const Polygon& p1);
	//destractor
	~Polygon() {
		delete _sides;
	}
};
#endif
