#pragma once
#ifndef MYTIME2_H_
#define MYTIME2_H_
#include <iostream>
namespace VECTOR {

	class Vector {
	public:
		enum Mode { RECT, POL };
	private:
		double x, y;//rectangular coordinates
		double angle, magnitude;//polar coordinates
		Mode mode;
		void set_x();
		void set_y();
		void set_angle();
		void set_magnitude();

	public:
		//constructors
		Vector();
		Vector(double m , double n, Mode mode = RECT);
		void reset(double m, double n, Mode mode = RECT);
		~Vector();
		//accessors
		double x_val()const;//report x
		double y_val()const;//report 
		double angle_val()const;//report angle
		double magnitude_val()const;//report magnitude
		int mode_val()const;//report mode
		//Mode setting
		void rect_mode();
		void pol_mode();
		//operator overloading
		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		//friend
		friend Vector operator*(const double a, const Vector b) { return b * a; };
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);

	};

}
#endif
