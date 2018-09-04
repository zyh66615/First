#include<iostream>
#include<time.h>
using namspace std;
int main()
{
	time_t now;
	now=time(NULL);
	cout<<now<<endl;
	return 0;
}
