/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#ifndef MY_RECTANGLE
#define MY_RECTANGLE
#include"mytype.h"
#include"Polygon.h"

class Rectangle :public Polygon {
public:
	//Constructor
	Rectangle(uint s1, uint s2);
};
#endif