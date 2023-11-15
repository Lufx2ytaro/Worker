#pragma once
#include<iostream>


using namespace std;


class Worker
{
	char* name;
	char* surName;
	char* lastName;
	char* post;
	int startYear;
	int salary;

	char* createPost(char const* post);
	char* createName(char const* name);

public:

	Worker(const char* name, const char* surName, const char* lastName, const char* post, int startYear, int  salary) :
		name{ name ? new char[strlen(name) + 1] : nullptr },
		surName{ surName ? new char[strlen(surName) + 1] : nullptr },
		lastName{ lastName ? new char[strlen(lastName) + 1] : nullptr },
		post{ post ? new char[strlen(post) + 1] : nullptr },
		startYear{ startYear },
		salary{ salary }
	{
		if (post)
		{
			strcpy_s(this->post, strlen(post) + 1, post);
		}
		if (name)
		{
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		if (surName)
		{
			strcpy_s(this->surName, strlen(surName) + 1, surName);
		}
		if (lastName)
		{
			strcpy_s(this->lastName, strlen(lastName) + 1, lastName);
		}
	}
	explicit Worker() :Worker(nullptr, nullptr, nullptr, nullptr, 0, 0) {};
	Worker(const Worker& obj) :
		name{ obj.name ? new char[strlen(obj.name) + 1] : nullptr },
		surName{ obj.surName ? new char[strlen(obj.surName) + 1] : nullptr },
		lastName{ obj.lastName ? new char[strlen(obj.lastName) + 1] : nullptr },
		post{ obj.post ? new char[strlen(obj.post) + 1] : nullptr },
		startYear(obj.startYear),
		salary{ obj.salary }
	{
		if (obj.post)
		{
			strcpy_s(this->post, strlen(obj.post) + 1, obj.post);
		}
		if (obj.name)
		{
			strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
		}
		if (surName)
		{
			strcpy_s(this->surName, strlen(obj.surName) + 1, obj.surName);
		}
		if (lastName)
		{
			strcpy_s(this->lastName, strlen(obj.lastName) + 1, obj.lastName);

		}
	};

	~Worker()
	{
		delete[]post;
		delete[]name;
		delete[]surName;
		delete[]lastName;
	}

	char const* getName() const
	{
		return name;
	}
	char const* getSurName()const
	{
		return surName;
	}
	char const* getLastName()const
	{
		return lastName;
	}
	char const* getPost()const
	{
		return post;
	}
	int getStartYear()const
	{
		return startYear;
	}
	int getSalary()const
	{
		return salary;
	}

	Worker& setName(char const* name)
	{
		delete[]this->name;
		this->name = createName(name);
		return *this;
	}
	Worker& setSurName(char const* surName)
	{
		delete[]this->surName;
		this->surName = createName(surName);
		return *this;
	}
	Worker& setLastName(char const* lastName)
	{
		delete[]this->lastName;
		this->lastName = createName(lastName);
		return *this;
	}
	Worker& setPost(const char* post)
	{
		delete[]this->post;
		this->post = createPost(post);
		return *this;
	}
	Worker& setStartYear(int startYear)
	{
		this->startYear = startYear;
		return *this;
	}
	Worker& setSalary(int salary)
	{
		this->salary = salary;
		return *this;
	}



	void showPerson() const {
		cout << surName << " " << name << " " << lastName;
	}//показывает ‘»ќ
	void Experience(Worker arr[], int year) const
	{
		for (size_t i = 0; i < 5; i++)
		{
			if (2023 - arr[i].startYear > year)
			{
				arr[i].showPerson();
				cout << endl;

			}

		}
	};//показывает писок работников, стаж работы которых на данном предпри€тии превосходит заданное число лет;
	void income(Worker arr[], int a)const
	{

		for (size_t i = 0; i < 5; i++)
		{
			if (arr[i].salary > a)
			{
				arr[i].showPerson();
				cout << endl;
			}

		}

	};//список работников, зарплата которых превосходит заданную;
	void work(Worker arr[], string work)const
	{
		for (size_t i = 0; i < 5; i++)
		{
			if (arr[i].getPost() == work)
			{
				arr[i].showPerson();
				cout << endl;
			}
		}
	}////список работников, занимающих заданную должность.

};

