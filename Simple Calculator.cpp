#include<iostream>

using namespace std;

float a,b,c;
char choose,repeat;
int main(){
	cout<<"1. Addition Operation"<<endl;
	cout<<"2. Subtracton Operation"<<endl;
	cout<<"3. Multiplication Operation"<<endl;
	cout<<"4. Division Operation"<<endl;
	cout<<"(x) Exit The Program"<<endl;
	
	do {
		repeat = 'r';
		cout<<"Your Choice : "; cin>>choose;
		cout<<endl;
		
		if (choose == '1') {
			cout<<"Number 1 : "; cin>>a;
			cout<<"Number 2 : "; cin>>b;
			c=a+b;
			cout<<"Result : "<<c;
			cout<<endl;
		}
		else if (choose == '2') {
			cout<<"Number 1 : "; cin>>a;
			cout<<"Number 2 : "; cin>>b;
			c=a-b;
			cout<<"Result : "<<c;
			cout<<endl;
		}
		else if (choose == '3') {
			cout<<"Number 1 : "; cin>>a;
			cout<<"Number 2 : "; cin>>b;
			c=a*b;
			cout<<"Result : "<<c;
			cout<<endl;
		}
		else if (choose == '4') {
			cout<<"Number 1 : "; cin>>a;
			cout<<"Number 2 : "; cin>>b;
			c=a/b;
			cout<<"Result : "<<c;
			cout<<endl;
		}
		else if (choose == 'x') {
			break ;
		}
		else {
			cout<<"Your Choice is not found!!!";
			cout<<endl;
		}
	} while (repeat == 'r');
	cout<<"Thank You for using this program, see you!!"<<endl;
	return 0;
}
