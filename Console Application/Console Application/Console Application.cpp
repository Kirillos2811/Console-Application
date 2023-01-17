#include <stdio.h>

class Person
{	
protected:
	const char* name;
	int age;
	bool male;
	float weight;

public: 
	Person(char name[], int age, bool male, float weight) 
	{
		this->name = name;
		this->age = age;
		this->male = male;
		this->weight = weight;
	}

	const char* getName() 
	{
		return name;
	}
	void setName(char name[]) 
	{
		this->name = name;
	}

	int getAge() 
	{
		return age;
	}
	void setAge(int age) 
	{
		this->age = age;
	}

	const char * isMale() 
	{
		if (male == true) 
		{
			return "true";
		}
		else {
			return "false";
		}
	}
	void setGender(bool male) 
	{
		this->male = male;
	}

	float getWeight() 
	{
		return weight;
	}
	void setWeight(float weight) 
	{
		this->weight = weight;
	}
};

class Student : public Person
{
protected:
	int educational_course;

public:
	Student(char name[], int course, int age, bool male, float weight) : Person(name, age, male, weight)
	{
		educational_course = course;
	}

	int getCourse() 
	{
		return educational_course;
	}
	void setCourse(int course) 
	{
		educational_course = course;
	}
};

int main()
{  
	char name[] = "Jack";
	Student student = Student(name, 1, 22, true, 85);
	printf("Student name: %s; course: %i; age: %i; Male gender: %s; weight: %f\n",
		student.getName(), student.getCourse(), student.getAge(), student.isMale(), student.getWeight());

	printf("A year later\n");

	student.setCourse(2);
	student.setAge(23);
	student.setWeight(98);
	printf("Student name: %s; course: %i; age: %i; Male gender: %s; weight: %f",
		student.getName(), student.getCourse(), student.getAge(), student.isMale(), student.getWeight());
	return 0;
}

