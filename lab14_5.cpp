#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b, int *c, int *d){
		int currency[] = {*a,*b,*c,*d} ;
	int x ,y ; 
	for (int i = 0 ; i < 3 ; i++){
		x = rand() % 5 ;
		y = rand() % 5;
		int temp = currency[x] ;
		currency[x] = currency[y] ;
		currency[y] = temp ;

		*a = currency[0] ;
		*b = currency[1];
		*c = currency[2];
		*d = currency[3];
	}
}
//Write definition of shuffle() using pointer here 
