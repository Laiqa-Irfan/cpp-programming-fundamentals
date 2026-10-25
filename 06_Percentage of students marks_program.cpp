#include <iostream>
using namespace std;
int main()
{
	int english,urdu,maths,science,islamiat,obtainedmarks,totalmarks;
	double percentage;
	
	cout <<"Marks of English=" ;
	cin>>english;
	cout <<"enter the marks of Urdu=" ;
	cin>>urdu;
	cout <<"Marks of Maths=" ;
	cin>>maths;
	cout <<"Marks of Science=" ;
	cin>>science;
	cout <<"Marks of Islamiat=" ;
	cin>>islamiat;
	
	obtainedmarks=english+urdu+maths+science+islamiat;
	
	cout <<"Obtained marks=" << obtainedmarks << endl;
	
	totalmarks=60*5;
	percentage=obtainedmarks*100.0/totalmarks;
	
	cout <<"Percentage=" << percentage << endl;
	return 0;
}
