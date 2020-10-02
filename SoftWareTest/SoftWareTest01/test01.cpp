#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void exchange (int&Min,int& Max) {
	int Help;
	if(Min>Max) {
		Max = Help;
		Max = Min;
		Help = Min;
	}
}
int main(int argc, char** argv) {
	int a=5,b=3;
	exchange(a,b);
	cout<<a<<" "<<b;
	return 0;
}
