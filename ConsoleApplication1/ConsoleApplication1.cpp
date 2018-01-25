// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct IShape
{
	virtual void Foo() = 0;
};

struct IShapeSquare : IShape
{
	virtual void Bar() = 0;
};


template <typename T>
struct ShapeImpl : T
{
	void Foo() {
		cout << "ShapeImpl::Foo called" << endl;
	}
};

struct ShapeSquareImpl : ShapeImpl<IShapeSquare>
{
	void Bar() {
		cout << "ShapeSquareImpl::Bar called" << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	ShapeSquareImpl s;
	IShape* pS = &s;
	return 0;
}

