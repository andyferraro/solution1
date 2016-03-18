// app03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <MathFuncsDll.h> 
#include <vector>
#include "pixel.h"
#include <map>
#include <algorithm> 

using namespace MathFuncs;
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	// Test dll library
	double x = 10.3;
	double y = 11.4;
	double z = MyMathFuncs::Add(x, y);
	cout << "MyMathFuncs::Add = " << z << endl;

	map<string, int> m;
	

	m["John"] = 1;
	m["Tim"] = 2;
	m["Tom"] = 3;
	m["Jimmy"] = 4;

	auto iter = begin(m);
	
	cout << m.size();

	vector<int> const v1 = { 1, 2, 3, 4, 5 };
	map<int, string> const map1 = {
		{ 23, "Andrea" },
		{ 49, "Camilla" },
		{ 96, "Ugo" },
		{ 72, "Elsa" }
	};
	
	vector<int> v2 = { 3, 5, 4 };
	vector<int> v13 = { 1, 2, 3 };

	//sort(v2.begin, v2.end);

	vector<int> v{ 2, 3, 4, 5, 6, 7 };

	//complex<double> c1(1.0, 2.0);      // calls complex<double>::complex(double, double);
	//complex<double> c2{ 1.0, 2.0 };    // idem
	//complex<double> c3 = { 1.0, 2.0 }; // id

	
	//vector<complex<int>> com_vec{ { 1, 2 }, { 3, 4 }, { 5, 6 } };
	//for (complex<int> v : com_vec)
	//	cout << "Real: " << v.re << endl;
	//for each (complex<int> v in com_vec)
	//{
	//	cout << "Real: " << v.re << endl;
	//}
	//mypair <int> myobject1(100, 75);
	//mynewpair  myobject2(100, 75);
	//cout << myobject1.getmax();
	//cout << myobject2.getmax();

    //#pragma omp parallel 
	//for (int i = 0; i<1000; i++)
	//	cout << i << endl;
	
	//b bi;

	//b<int> bi;
	//b <float> bf;

	// Heap
	//Vector** v = new Vector*[100]; //create an array of 100 pointers to 100 Vector objects
	return 0;
}

