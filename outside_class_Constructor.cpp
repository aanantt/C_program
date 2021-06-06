#include<iostream>

using namespace std;


class Employee{

	public:
	string name;
	string company;
	int age;
	
		
	void intro()  
	{
	cout<<"Name - "<<name<<endl;
	cout<<"Comapny - "<<company<<endl;
	cout<<"Age - "<<age<<endl;
	}
	
	Employee(string Name, string Company , int Age);
	
};
Employee::Employee(string Name, string Company , int Age){
		name = Name;
		company= Company;
		age =Age;
		
	}
int main()
{
	Employee employee=Employee("vikas","google",12);
	employee.intro();
	Employee employee1= Employee("Mike","microsoft",21);
	employee1.intro();
	
}