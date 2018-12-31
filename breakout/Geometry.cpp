#include "Geometry.h"

Geometry2D::Geometry2D(double xval, double yval) {
	x = xval;
	y = yval;
}

void Geometry2D::move(double dx, double dy)
{
	x = x + dx;
	y = y + dy;
}

void Geometry2D::setX(double xval)
{
	x = xval;
}

void Geometry2D::setY(double yval)
{
	y = yval;
}

double Geometry2D::getX() const
{
	return x;
}

double Geometry2D::getY() const
{
	return y;
}

Point2D::Point2D(double xval, double yval)
	:Geometry2D(xval, yval)
{
}

Point2D::Point2D() 
	: Geometry2D(0.0, 0.0) 
{
}

void Point2D::move(double dx, double dy)
{
	Geometry2D::setX(Geometry2D::getX() + dx);
	Geometry2D::setY(Geometry2D::getY() + dy);
}

Circle2D::Circle2D()
	:Geometry2D(0.0,0.0)
{
	r = 1;
}

Circle2D::Circle2D(double x, double y)
	: Geometry2D(x, y)
{
	r = 1;
}

Circle2D::Circle2D(double x, double y, double radius)
	: Geometry2D(x,y)
{
	r = radius;
}
