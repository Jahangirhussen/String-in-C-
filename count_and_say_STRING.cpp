#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int count=1;
    string s;
    cout<<"Enter your string number : ";
    cin>>s;

    for(int i=1; i<s.size()+1; i++   ) ///11122
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            cout<<count<<s[i-1];
            count=1;
        }
    }
    return 0;
}
