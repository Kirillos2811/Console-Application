#include <stdio.h>

const float PI = 3.14;

class Figure
{
public:
	virtual float area() = 0;
};

class Parallelogram : public Figure 
{
private:
	float a, h;

public:
	Parallelogram() = default;
	Parallelogram(float a, float h) 
	{
		this->a = a;
		this->h = h;
	}

	float area() override
	{
		return a * h;
	}
};

class Circle : public Figure {
private:
	float r;

public:
	Circle() = default;
	Circle(float r)
	{
		this->r = r;
	}

	float area() override
	{
		return PI * r * r;
	}
};

class Rectangle : public Parallelogram
{
private:
	float a, b;

public:
	Rectangle(float a, float b)
	{
		this->a = a;
		this->b = b;
	}

	float area() override
	{
		return a * b;
	}
};

class Square : public Parallelogram
{
private:
	float a;
public:
	Square(float a)
	{
		this->a = a;
	}

	float area() override
	{
		return a * a;
	}
};

class Rhombus : public Parallelogram
{
private:
	float d1, d2;
public:
	Rhombus(float d1, float d2)
	{
		this->d1 = d1;
		this->d2 = d2;
	}

	float area() override
	{
		return 0.5 * d1 * d2;
	}
};

int main()
{
	Parallelogram p = Parallelogram(2, 5);
	Circle c = Circle(10);
	Rectangle r = Rectangle(5, 10);
	Square s = Square(20);
	Rhombus rh = Rhombus(10, 30);

	printf("Parallelogram area: %f\n", p.area());
	printf("Circle area: %f\n", c.area());
	printf("Rectangle area: %f\n", r.area());
	printf("Square area: %f\n", s.area());
	printf("Rombus area: %f\n", rh.area());
	return 0;
}

