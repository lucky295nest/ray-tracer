#include "vector3.hpp"
#include <cmath>

Vector3::Vector3() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 &Vector3::operator+=(const Vector3 &other) {
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;
	return *this;
}

Vector3 &Vector3::operator-=(const Vector3 &other) {
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;
	return *this;
}

Vector3 &Vector3::operator*=(double a) {
	this->x *= a;
	this->y *= a;
	this->z *= a;
	return *this;
}

Vector3 &Vector3::operator/=(double a) {
	this->x /= a;
	this->y /= a;
	this->z /= a;
	return *this;
}

Vector3 Vector3::operator+(const Vector3 &other) const {
	return Vector3(this->x + other.getX(), this->y + other.getY(), this->z + other.getZ());
}

Vector3 Vector3::operator-(const Vector3 &other) const {
	return Vector3(this->x - other.getX(), this->y - other.getY(), this->z - other.getZ());
}

Vector3 Vector3::operator*(double a) const {
	return Vector3(this->x * a, this->y * a, this->z * a);
}

Vector3 Vector3::operator/(double a) const {
	return Vector3(this->x / a, this->y / a, this->z / a);
}

double Vector3::getX() const {
	return this->x;
}

double Vector3::getY() const {
	return this->y;
}

double Vector3::getZ() const {
	return this->z;
}

double Vector3::length() const {
	double result = std::pow(this->x, 2) + std::pow(this->y, 2) + std::pow(this->z, 2);
	result = std::sqrt(result);
	return result;
}
