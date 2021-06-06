#include<iostream>

using namespace std;


class Employee{

	public:
	string name;
	string company;
	int age;
	
		
	void intro()  
	{
	cout<<"name - "<<name<<endl;
	cout<<"comapny - "<<company<<endl;
	cout<<"age - "<<age<<endl;
	}
	
	Employee(string Name, string Company , int Age){
		name = Name;
		company= Company;
		age =Age;
		
	}
};
int main()
{
	Employee employee=Employee("vikas","google",12);
	
	employee.intro();
	
	Employee employee1=Employee("vikas","google",12);

	employee1.intro();
	
}