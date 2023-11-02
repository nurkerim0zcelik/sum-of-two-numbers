#include <iostream>
#include <tchar.h>
#include <conio.h>

using namespace std;

int main()
{
	int k;
	int total = 0;
	int counter = 0;
	int aritmetichAverage=0;
	for(int i=0;i<50;i++) {
				cout<<" Please enter the "<<counter<<" number";
				cin >> k;

				if(k%2==1) {
				  total = total + k;
				  counter = counter + 1;
				}



				if(k%2==0) {
					total=1 ;
                }
	}
	aritmetichAverage = total/counter;

	cout << "Value of a is " << aritmetichAverage;

	getch();

}
