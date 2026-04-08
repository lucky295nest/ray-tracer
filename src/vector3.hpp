#ifndef VECTOR3_HPP
#define VECTOR3_HPP

class Vector3 {
private:
	double x;
	double y;
	double z;

public:
	Vector3();
	Vector3(double x, double y, double z);

	Vector3 &operator+=(const Vector3 &other);
	Vector3 &operator-=(const Vector3 &other);
	Vector3 &operator*=(const Vector3 &other);
	Vector3 &operator/=(const Vector3 &other);
	Vector3 operator+(const Vector3 &other) const;
	Vector3 operator-(const Vector3 &other) const;
	Vector3 operator*(const Vector3 &other) const;
	Vector3 operator/(const Vector3 &other) const;

	double getX() const;
	double getY() const;
	double getZ() const;
};

#endif
