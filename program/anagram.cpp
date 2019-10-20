#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	int t;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	int value=0;
	for (int i = 0; i < l1; ++i)
	
{		for (int j = 0; j <l2; ++j)
		{
			if(s1[i]==s2[j]){
				s2[j]=0;
				value+=1;
				break;
			}

		}
	}
	int ana=l1+l2-value*2;
	cout<<ana<<endl;
	}
	return 0;
}