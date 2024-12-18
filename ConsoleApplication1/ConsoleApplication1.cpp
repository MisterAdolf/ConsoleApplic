#include <iostream>
using namespace std;

class IMovable {
public:
	virtual void Move() = 0;
};

class IDrivable {
public:
	virtual void Drive() = 0;
};

class IFillable {
public:
	virtual void Fill() = 0;
};

class IFlyable {
public:
	virtual void Flying() = 0;
};

class Car: public IDrivable {
public:
	void Drive() override {
		cout << "Car can Drive" << endl;
	}

};
class Human : public IMovable {
public:
	void Move() override {
		cout << "Human can Move" << endl;
	}

};
class Fly : public IFlyable {
public:
	void Flying () override {
		cout << "Fly can Fly" << endl;
	}

};
class Ship : public IFillable {
public:
	void Fill() override {
		cout << "Ship can Fill" << endl;
	}

};

int main()
{
	Human obj = Human();
	obj.Move();

	Car obj1 = Car();
	obj1.Drive();
	
	Fly obj2 = Fly();
	obj2.Flying();

	Ship obj3 = Ship();
	obj3.Fill();


}