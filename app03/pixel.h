#pragma once

template <class T>
class mypair {
	T value1, value2;
public:
	mypair(T first, T second) : value1(first), value2(second)
	{
	}
	T getmax();
};



class mynewpair {
	int value1, value2;
public:
	mynewpair(int first, int second)
	{
		value1 = first; value2 = second;
	}
	int getmax();
};

template <class t>
class b
{
public:
	b();
	~b();
};

template<class T>
class complex {
public:
	T re;
	T im;
public:
	complex(T, T);
	~complex();
};