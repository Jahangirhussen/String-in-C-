#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///string to number
    cout<<"string to number here !  "<<endl;
    string s;
    int output=0,number;
    s="52736";
    for(int i=0; i<s.size(); i++)
    {
        char ch;
        ch=s[i];
         number=ch-'0';///char k integer value te rupantor kore.
        cout<<number<<" ";
        output=output*10 + number;
    }
    cout<<output<<endl;

    /// number to string
    cout<<"number to string here !  "<<endl;
int reminder;
 int   number2 =21367;
string s2;
char ch2;
while(number2>0)
{
    reminder=number2 % 10;
    ch2=reminder +'0';
    cout<<ch2<<" ";
    s2=s2+ch2;
        number2= number2/10;

}
reverse(s2.begin(),s2.end());
cout<<s2<<endl;
    return 0;
}
