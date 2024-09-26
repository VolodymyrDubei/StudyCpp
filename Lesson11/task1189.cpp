#include <iostream>


class Shape 
{
public:
    Shape() {}
    ~Shape() {}

protected:
private:
};

class Rectangle : public Shape 
{
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
protected:
    double length;
    double width;

private:
};

class Square : public Rectangle 
{
public:
    Square(double side) : Rectangle(side, side) {}

protected:
private:
};