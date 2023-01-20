#include <stdio.h>
#include <stdexcept>

class ZeroDivisionException : public std::runtime_error
{
public:
	ZeroDivisionException() : std::runtime_error("Division by zero") {}
};

float divide(float value)
{
	try
	{
		if (value != 0)
		{
			return 1024 / value;
		}
		else
		{
			throw ZeroDivisionException();
		}
	}
	catch (const ZeroDivisionException& ex)
	{
		printf("Inappropriate argument: 0\n");
		throw;
	}
}

int main()
{  
	try 
	{
		float a = divide(5);
		printf("1024 / 5 = %f\n", a);

		float b = divide(342);
		printf("1024 / 342 = %f\n", b);

		float c = divide(0);
		printf("1024 / 0 = %f", c);
	}
	catch (const std::exception& ex)
	{
		printf("Division failed for reason: %s", ex.what());
	}
	return 0;
}

