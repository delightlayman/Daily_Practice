#include "vector.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);

	//private methods
	//互相转换
	void Vector::set_x() {
		x = cos(angle) * magnitude;
	}
	void Vector::set_y() {
		y = sin(angle) * magnitude;
	}
	void Vector::set_angle() {
		if (x == 0.0 && y == 0.0)
			angle = 0;
		else
			angle = atan2(y, x);
	}
	void Vector::set_magnitude() {
		magnitude = sqrt(x * x + y * y);
	}

	//public methods
	Vector::Vector() {
		x = y = magnitude = angle = 0;
		mode = RECT;
	}

	Vector::Vector(double m, double n, Mode form) {
		mode = form;
		if (form == RECT) {
			x = m;
			y = n;
			set_magnitude();
			set_angle();
		}
		else if (form == POL) {
			magnitude = m;
			angle = n / Rad_to_deg;
			set_x();
			set_y();
		}
		else {
			cout << "Incoorect mode argument. Mode set to RECT or POL.\n";
			cout << "Vector set to 0";
			x = y = magnitude = angle = 0;
			mode = RECT;
		}
	}

	Vector::~Vector() {

	}

	void Vector::reset(double m, double n, Mode form) {
		mode = form;
		if (form == RECT) {
			x = m;
			y = n;
			set_magnitude();
			set_angle();
		}
		else if (form == POL) {
			magnitude = m;
			angle = n / Rad_to_deg;
			set_x();
			set_y();
		}
		else {
			cout << "Incoorect mode argument. Mode set to RECT or POL.\n";
			cout << "Vector set to 0";
			x = y = magnitude = angle = 0;
			mode = RECT;
		}

	}

	//获取数据
	double Vector::x_val()const {
		return x;
	}
	double Vector::y_val()const {
		return y;
	}
	double Vector::angle_val()const {
		return angle;
	}
	double Vector::magnitude_val()const {
		return magnitude;
	}
	int Vector::mode_val()const{
		return mode;
	}

	//模式设置
	void Vector::rect_mode() {
		mode = RECT;
	}

	void Vector::pol_mode() {
		mode = POL;
	}
	//重载运算符
	Vector Vector::operator+(const Vector& b)const {
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b)const {
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const {
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n)const {
		return Vector(n * x, n * y);
	}


	std::ostream& operator<<(std::ostream& os, const Vector& v) {
		if (v.mode == Vector::RECT) {
			os << "(x,y) = " <<"(" << v.x << "," << v.y<<")";
		}
		else if(v.mode==Vector::POL) {
			os<<"(m,a) = "<<"("<<v.magnitude<<","<<v.angle*Rad_to_deg<<")";
		}
		else {
			os<<"ERROR: mode object is invalid";
		}

		return os;
	}
}