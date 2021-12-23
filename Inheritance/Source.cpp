#include <iostream>

using namespace std;

class Figure {
protected:
	double _x;
	double _y;
public:
	void set(double x, double y) { _x = x; _y = y; }
	virtual void show_area() { cout << "Unable to calc square for figure" << endl; }
};

class Rectangle : public Figure {
public:
	void show_area() {
		cout << "Restangle with sides: ";
		cout << "a = " << _x << ", b = " << _y << endl;
		cout << "S = " << _x * _y << endl;
	}
};

class RectTriange : public Figure {
public:
	void show_area() {
		cout << "Restangle with sides: ";
		cout << "a = " << _x << ", b = " << _y << endl;
		cout << "S = " << (_x * _y) / 2 << endl;
	}
};

int main() {
	Figure* f;
	Figure fgr;
	Rectangle r;
	RectTriange rt;
	f = &r;
	f->set(3, 4);
	f->show_area();
	f = &r;
	f->set(6, 8);
	f->show_area();
}
