#include<bits/stdc++.h>
using namespace std;

void sub_sequence(string output,int i,int n,string s)///main function theke dewya value new variable type o name diye ta recived kori...
{
 if(i==n)
 {
     cout<<output<<endl;
 }
else
{
      sub_sequence(output,i+1,s.size(),s);///elane abr call diyeci mane recurrcition,ekn amra jni ei function a ki ki variable ace and already inilizatin  so direct nam diy call,
        output=output+s[i];
        sub_sequence(output,i+1,s.size(),s);

}

}

int main()
{
string s;
cout<<"enter your STRING value : "<<endl;
cin>>s;

    sub_sequence(" ",0,s.size(),s);/// sub sequence call and value pass,null,inilization value i ,string size and string value pass kori....




    return 0;
}

/** main() e input newya than sub function call kore;
substring function:

jodi" s = "abc" hoy than s.size()=n=2;"{0,1,2 hole if a dukbe,r

1) i=0; !=n ,so if a dukbe na,,else a jabe than function call hobe but i+1,ba i=1;
2) i=1; !=n ,so if a dukbe na,,else a jabe than function call hobe but i+1,ba i=2;...
3)ebabe gurbe than i==n==2 hole if a dukbe than output ja main function a dicilam ""seta print dibe.
4)bortomane i=2 ace,,jehetu recourction else theke hoyeche so else er niche jabe,niche  output=output+s[i] er mane output=""+c=c;jehetu n=i=2 so niche line a abr recourction hobe that upore that if than abr output print;...
5)
*/
