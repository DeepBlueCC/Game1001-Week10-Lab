#pragma once
class Rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double len) { length = len; }
	void setWidth(double wid) { width = wid; }
	double getLength() { return length; }
	double getWidth() { return width; }
	double getArea() { return length * width; }
};

class Carpet
{
private:
	double pricePerSqYd;
	Rectangle size;
public:
	void setPricePerYd(double p) { pricePerSqYd = p; }
	void setDimension(double len, double wid)
	{
		size.setLength(len);
		size.setWidth(wid);
	}
	double getTotalPrice() { return (size.getArea() * pricePerSqYd); }
};

