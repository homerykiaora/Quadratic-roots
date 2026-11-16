#include <iostream>
#include <cmath>
using namespace std;
void roots(double a, double b, double c){
if (a==0){
cout<<"This is not a quadratic equation";
  return;
}
double discriminant=(b*b)-(4*a*c);

if(discriminant=0){
	double root=(-b)/(2*a);
	cout<<"Roots are equal and the roots are: "<<root<< endl;
}
else if(discriminant>0){
	double root1=((-b)+sqrt(discriminant))/(2*a);
	double root2=((-b)-sqrt(discriminant))/(2*a);
	cout<<"Roots are real and distinct"<<endl;
	cout<<"Root1 = "<<root1<<endl;
	cout<<"Root2 = "<<root2<<endl;
}
else if(discriminant<0){
	double realroot=(-b)/(2*a);
	double imaginaryroot=(sqrt(-discriminant))/(2*a);
	cout<<"Roots are complex and imaginary"<<endl;
	cout<<"Real root = "<<realroot<<endl;
	cout<<"Imaginary root = "<<imaginaryroot<<endl;
}

}
int main(){
	double a, b, c;
	cout<<"Enter value of a, b and c respectively: ";
	cin>>a>>b>>c;
	roots(a, b,c);
	
	return 0;
}