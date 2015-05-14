#include "stdafx.h"
#include "pixel.h"

//template <class T>
mypair::mypair(int first, int second) : value1(first), value2(second)
{
}

//template <class T>
int mypair::getmax()
{
	int max = (value1 > value2) ? value1 : value2;
	return max;
}
