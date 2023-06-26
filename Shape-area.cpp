#include <bits/stdc++.h>
#define gofast() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef string str;
class Shape {
public:
    virtual double calculateArea() {
        cout << "Shape area = ";
        return 0;
    }
};
class Recangle :public Shape {
private:
    float length;
    float width;
public:
    void set_length(float length) {
        this->length = length;
    }
    void set_width(float width) {
        this->width = width;
    }
    double calculateArea() {
        cout << "Rectangle area = ";
        return width * length;
    }
};
class Triangle : public Shape {
private:
    float base;
    float height;
public:
    void set_base(float base) {
        this->base = base;
    }
    void set_height(float height) {
        this->height = height;
    }
    double calculateArea() {
        cout << "Triangle area = ";
        return base * height * 0.5;
    }
};
class Circle :public Shape {
private:
    float raduis;
public:
    void set_raduis(float raduis) {
        this->raduis = raduis;
    }
    double calculateArea() {
        cout << "Circle area = ";
        return raduis * raduis * 3.14;
    }
};

int main() {

	gofast();
	Shape* s, s1;
	Recangle r1;
	Triangle t1;
	Circle c1;

	str choice;

	float length, width, base, height, raduis;
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter width of rectangle: ";
	cin >> width;
	r1.set_length(length);
	r1.set_width(width);
	s = &r1;
	cout << s->calculateArea() << endl << endl;

	cout << "Enter base of triangle: ";
	cin >> base;
	cout << "Enter height of triangle: ";
	cin >> height;
	t1.set_base(base);
	t1.set_height(height);
	s = &t1;
	cout << s->calculateArea() << endl << endl;

	cout << "Enter raduis of circle: ";
	cin >> raduis;
	c1.set_raduis(raduis);
	s = &c1;
	cout << s->calculateArea() << endl << endl;

	s = &s1;
	cout << s->calculateArea() << endl << endl;

	do {

		cout << "*Do you want t take variables again? (Yes || No)* ";
		cin >> choice;

		if (choice == "No") {
			cout << "Program terminated" << endl;
			break;
		}
		else {

			cout << "Enter length of rectangle: ";
			cin >> length;
			cout << "Enter width of rectangle: ";
			cin >> width;
			r1.set_length(length);
			r1.set_width(width);
			s = &r1;
			cout << s->calculateArea() << endl << endl;

			cout << "Enter base of triangle: ";
			cin >> base;
			cout << "Enter height of triangle: ";
			cin >> height;
			t1.set_base(base);
			t1.set_height(height);
			s = &t1;
			cout << s->calculateArea() << endl << endl;

			cout << "Enter raduis of circle: ";
			cin >> raduis;
			c1.set_raduis(raduis);
			s = &c1;
			cout << s->calculateArea() << endl << endl;

			s = &s1;
			cout << s->calculateArea() << endl;
		}

	} while (choice == "Yes");

    return 0;
}