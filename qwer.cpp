#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int i=0;
	ll int s=sqrt(704282731);
	for(i=2;i<=s;i++)
	{
		if(704282731%i==0)
			printf("%lld " ,i);
	}
	printf("%lld %lld prime\n",sqrt(704282731), i);
	printf("a");
}