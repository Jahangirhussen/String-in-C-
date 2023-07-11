#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="jahangir";
    cout <<"before sorting this string is= : "<<s<<endl;
    sort(s.begin(),s.end() );/// string s er shuru theke sort kore end porjonto kore and sort kore string k " s" er moddei rakhe;
    cout <<"after sorting this string is= : "<<s<<endl;

    cout <<" string s er size = : "<<s.size()<<endl;
    s="jahangir";


    reverse(s.begin(),s.end()  );/// same sort er moto but kaj reverse er;
    cout<<"reverse string is = "<<s<<endl;
    s="jahangir";
    s=s.substr(2,4);/// 0,1,sesh hobar por 2 number string theke shuru hoye 4 ta value niye substring goton korbe;
    cout<<"substring of s is = "<<s<<endl;

    string j;
    cout<<"type more than one word for input getline() : ";
    getline(cin,j);///" jah kaw "ekane 2 ta word cin diye eksathe string input neuya jay na so ekane amra getline use kore input nibo;
    cout<<" getline diye neuya input holo = "<<j<<endl;


    /// lower and upper start..

    s="JAHANGIr";
    cout<<" tolower() use to big JAHANGIr k chito kora holo  =  ";
    for(int i=0; i<=s.size(); i++)
    {
        char  latter;
        latter =tolower(s[i]);
        cout<<latter;
    }

    s="Jhangir";
    cout<<endl<<" toupper() use kore small jahangir k big kora holo   =   ";
    for(int i=0; i<=s.size(); i++)
    {
        char  latter;
        latter =toupper(s[i]);
        cout<<latter;
    }
    cout<<endl<<endl;
    s="jahangir hussen CSE2201025022";
    istringstream kaw(s);///elta string a ekadik word takle seta k bengge alada alada word akare rakhe ei function..ja kaw namer string a rakhi;
    string word ;

    while(kaw>>word)///kaw er word gula ek ek kore word rakbe ,jotokon na kaw faka hoy;
        cout<<word<<endl;

    s="jahangir ";
    s.erase(s.begin()+0);/// erase diye kuno string er latter delet kora hoy, " .begin()+0 " mane string er shuru theke 0 number index delet hobe;
    cout<<endl<<s<<endl;
    s="kawsar";
    s.pop_back();///eta string er last latter pop kore.
    cout<<s<<endl;
    s="kawsar";
    s.push_back('J');/// string er sese new value add hoy..
    cout<<s<<endl;

}
