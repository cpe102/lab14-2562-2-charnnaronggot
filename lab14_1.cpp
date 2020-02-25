#include <iostream>
using namespace std;


int main(){
	int a = 5 ;
	char b = 'A' ;
	char &c = b ;
	int *x = &a ;
	char *y = &b ;
	int **z = &x ;
	cout << a << endl ;
	cout << b << endl ;
	cout << c << endl ; 
	cout << x << endl ;
	cout << y << endl ; 
	cout << z << endl ;
	cout << &a << endl ; 
	cout << &b << endl ;
	cout << &c << endl ; 
	cout << &x << endl ; 
	cout << &y << endl ;
	cout << &z << endl ;
	c = 'F' ;
	cout << a << endl ;
	cout << b << endl ;
	cout << c << endl ; 
	cout << x << endl ;
	cout << y << endl ; 
	cout << z << endl ;
	*y = 'W' ;
	cout << a << endl ;
	cout << b << endl ;
	cout << c << endl ; 
	cout << x << endl ;
	cout << y << endl ; 
	cout << z << endl ;
	*x = 6 ;
	cout << a << endl ;
	cout << b << endl ;
	cout << c << endl ; 
	cout << x << endl ;
	cout << y << endl ; 
	cout << z << endl ;
	**z = 7 ; 
	cout << a << endl ;
	cout << b << endl ;
	cout << c << endl ; 
	cout << x << endl ;
	cout << y << endl ; 
	cout << z << endl ;


	//Write your code here.
	return 0;
}
