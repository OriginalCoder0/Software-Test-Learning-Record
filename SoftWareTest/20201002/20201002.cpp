#include<iostream>
using namespace std;
void exchange (int&Min,int& Max) {
	int Help;
	if(Min>Max) {
		Max = Help;
		Max = Min;
		Help = Min;
	}
}
int main() {
	int a=5,b=3;
	exchange(a,b);
	cout<<a<<" "<<b;
	
	return 0;
}

