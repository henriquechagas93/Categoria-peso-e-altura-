#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double alt= 0, peso= 0;

	cout<<"Digite a altura da pessoa ";
	cin>> alt;
	cout<<"Digite o peso da pessoa em KG ";
	cin>> peso;
	
	if (alt<1.20 && peso<=60){
		cout<<"Esta pessoa se enquadra na categoria: A";}
	
			else if (alt>=1.20 && alt<=1.70 && peso<=60){
				cout<<"Esta pessoa se enquadra na categoria: B ";}
			
			else if (alt>1.70 && peso<=60){
				cout<<"Esta pessoa se enquadra na categoria: C";}
			
			else if (alt<1.20 && peso>=60 && peso<=90){
				cout<<"Esta pessoa se enquadra na categoria: D";}
			
			else if (alt>=1.20 && alt<=1.70 && peso>=60 && peso<=90){
				cout<<"Esta pessoa se enquadra na categoria: E";}
			
			else if (alt>1.70 && peso>=60 && peso<=90){
				cout<<"Esta pessoa se enquadra na categoria: F";}
			
			else if (alt<=1.20 && peso>90){
				cout<<"Esta pessoa se enquadra na categoria: G";}
				
			else if (alt>=1.20 && alt<=1.70 && peso>90){
				cout<<"Esta pessoa se enquadra na categoria: H";}
				
			else if (alt>1.70 && peso>90){
				cout<<"Esta pessoa se enquadra na categoria I";}
			
				
			
		return 0;
}
