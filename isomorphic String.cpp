#include<iostream>
#include<string>
using namespace std;
/**isomprphic string mane 2 ta string er input like
s1=tuiiut s2=amkkma,
ekane t k replace kore a,
a k replace kore m ,
i k replace kore k diyechi
mane joto jaygay t chilo sob t ,a hpoye gece
mane joto jaygay m chilo sob t ,m hpoye gece
mane joto jaygay i chilo sob t ,k hpoye gece
*/
int main()
{
    string s1, s2;
    int m1[256] = {0}, m2[256] = {0};

    cout << "Type string 1 and 2: ";
    cin >> s1 >> s2;
    cout << "s1 and s2: " << s1 << " " << s2 << endl;

    if (s1.size() != s2.size())///jader modde iso korbo lenght same hote hobe,na hole era iso string na.
        {
            cout<<"not isomorphic"<<endl;
            return 0;
        }

    for (int i = 0; i < s1.size(); i++)
    {
        if (!m1[s1[i]] && !m2[s2[i]])/// m1 a jodi s[i] hote na pare; m2 te o jodi s2[i] hote na pare than lop a dukbe,1st value te dukbe but 2nd..
        {
            m1[s1[i]] = s2[i];///m1 er s1[i] a jodi s2[i] hoy,tahole..
            m2[s2[i]] = s1[i];/// m2 er s2[i] te o s1[i] hobe.than loop ajabe ekn ei w line niye dekbe m1 a jodi s2 take m2 te ki s1 ace,jodi hoy than loop a dulbe ek ek kore cheek korele full loop sesh hobe,r na holeelse a jabe ,else a jawa mane iso na...
        }
        else if (m1[s1[i]] != s2[i])
        {
                        cout<<"not isomorphic"<<endl;
            return 0;

        }

    }

                cout<<"yes isomorphic"<<endl;
            return 0;

}
