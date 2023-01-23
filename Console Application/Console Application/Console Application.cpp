#include <stdio.h>
#include <stdexcept>
#include <math.h>

class Function
{
protected:
	virtual float calc(float x) = 0;
	
public:
	virtual void print(float x)
	{
		printf("y = %f\n", calc(x));
	}

	virtual ~Function() = default;
};

class Parabola : public Function 
{	
	float a;

	float calc(float x) override
	{
		return pow(x, a);
	}

public:
	Parabola(float a)
	{
		this->a = a;
	}
};

class Hiperbola : public Function
{
	float k;

	float calc(float x) override
	{
		return k / x;
	}

public:
	Hiperbola(float k)
	{
		this->k = k;
	}
};

class Ellipse : public Function 
{
	float a, b;

	float calc(float x) override
	{
		return sqrt((1 - (x * x) / (a * a)) * (b * b));
	} 

	void print(float x) override {
		float y1 = calc(x);
		float y2 = - y1;
		printf("y = %f or y = %f\n", y1, y2);
	}

public:
	Ellipse(float a, float b) 
	{
		this->a = a;
		this->b = b;
	}
};


void output_func_value(int& type, float& x, float& arg1, float& arg2) {
	Function* func = NULL;
	switch (type) {
	case 1:
		func = new Parabola(arg1);
		break;
	case 2:
		func = new Hiperbola(arg1);
		break;
	case 3:
		func = new Ellipse(arg1, arg2);
		break;
	default:
		throw std::runtime_error("Unknown type to create with passed arguments");
	}
	func->print(x);
	delete func;
}

void output_func_value(int& type, float& x, float& arg1) {
	Function* func = NULL;
	switch (type) {
	case 1:
		func = new Parabola(arg1);
		break;
	case 2:
		func = new Hiperbola(arg1);
		break;
	default:
		throw std::runtime_error("Unknown type to create with passed arguments");
	}
	func->print(x);
	delete func;
}

int main()
{
	int type;
	float x, arg1, arg2;
	try 
	{
		type = 1;
		x = 5;
		arg1 = 2;
		output_func_value(type, x, arg1);

		type = 2;
		arg1 = 1;
		output_func_value(type, x, arg1);

		type = 3;
		arg1 = 18;
		arg2 = 2;
		output_func_value(type, x, arg1, arg2);

		output_func_value(type, x, arg1);
	}
	catch (const std::exception& ex) 
	{
		printf(ex.what());
	}

	return 0;
}

