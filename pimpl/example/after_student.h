#pragma once


// other include files
#include <memory>

class Student {
public:
	Student(const char* pname, const char* psurname);
	~Student();
	
	Student(const Student&);
	Student& operator=(const Student&);
	Student(Student&&)noexcept;
	Student& operator=(Student&&)noexcept;

	void add_grade(int);
	void print()const;
	// other public members

private:
	class StudentImpl;
	std::unique_ptr<StudentImpl> mp;
	
	StudentImpl* Pimpl()
	{
		return mp.get();
	}

	const StudentImpl* Pimpl()const
	{
		return mp.get();
	}
};


