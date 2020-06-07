/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#ifndef MY_TRIANGLE
#define MY_TRIANGLE
#include"mytype.h"
#include"Polygon.h"

class Triangle :public Polygon {
public:
	//Constructor
	Triangle(uint s1, uint s2, uint s3);
};
#endif