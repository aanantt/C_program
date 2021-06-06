#include<iostream>

using namespace std;

class employee{
	public:
		int id;
		string company;
		int age;
		
		void info(){
			cout<<"company-id"<<id<<endl;
            cout<<"company name"<<company<<endl;
            cout<<"age -"<<age<<endl;
		}
		employee(){
			age=12;
            company="amazon";
            id=1;
		}
};
int main(){
employee emp;
emp.info();
}

