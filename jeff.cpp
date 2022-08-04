
#include <iostream>
using namespace std;
int proceed(string s1,string s2);
int main() {
	// your code goes here

	string s1,s2;
	int n;

	cin>>s1;

	cin>>n;



	for(int i=0;i<n;i++)
	{
	    cin>>s2;

	    if(proceed(s1,s2) )
            cout<<endl<<"Yes";
        else
            cout<<endl<<"No";

	}

	return 0;
}
/*
int proceed(string s1,string s2)
{

    for(int i=0;i<s2.length();i++)
    {
        if(s1.rfind(s2.at(i))==string::npos)
            return 0;
    }
    return 1;
}
*/
int proceed(string s1,string s2)
{

    int found;
    for(int i=0;i<s2.length();i++)
    {
        found=0;
        for(int j=0;j<s1.length();j++)
        {

            if(s2.at(i)==s1.at(j))
                found=1;
        }
        if(found==0) return 0;
    }
    return 1;
}
