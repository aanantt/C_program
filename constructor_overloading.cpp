#include<iostream>

using namespace std;

class deposit{
	int principal;
	int time;
	float rate;
	float total_amt;
	public:
		deposit();
		deposit(int p, int t, float r);
		void calc_amt(void);
		void display(void);
};
deposit::deposit(){
	principal=time=rate=0.0;
}
deposit::deposit(int p, int t,float r ){
	principal=p;
	time=t;
	rate=r;
}
void deposit::calc_amt(void)
{
	total_amt=principal+(principal*time*rate)/100;
}
void deposit::display(){
	cout<<"\n principal amount:"<<principal;
	cout<<"\n period of investment"<<time;
	cout<<"\n rate of interest"<<rate;
	cout<<"\n total amount"<<total_amt<<"\n";
}
int main()
{
	deposit d1;
	deposit d2(440,2,0.07f);
	d1.calc_amt();
	d2.calc_amt();
	d1.display();