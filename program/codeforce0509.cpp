#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int str,in,exp,rem;
		cin>>str>>in>>exp;
		if ((str+exp)<=in)
			cout<<"0\n";
		else{
			rem=(str-in+exp+1)/2;
				exp++;
			cout<<min(max(rem,0),exp);
		}
	}
	return 0;
}