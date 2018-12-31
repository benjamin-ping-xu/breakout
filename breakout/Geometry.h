#pragma once
class Geometry2D
{
public:
	Geometry2D(double xval, double yval);
	virtual void move(double dx, double dy) = 0;
	void move(double dx, double dy);
	void setX(double xval);
	void setY(double yval);
	double getX() const;
	double getY() const;

private:
	double x;
	double y;
};

class Point2D : public Geometry2D
{
public:
	Point2D();
	Point2D(double x, double y);
	void move(double dx, double dy);
};

class Circle2D : public Geometry2D
{
public:
	Circle2D();
	Circle2D(double x, double y);
	Circle2D(double x, double y, double radius);
private:
	double r;
};
