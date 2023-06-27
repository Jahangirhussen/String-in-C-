#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    ///possaible neumeric method..
    string possaible[]= {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};

    string s,output="";///output zero raki,

    cout<<"type your string : ";
    cin>>s;
    ///mind its nuric key always big latter hoy
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')/// keu space chaple seta numecid key te 0 dey
        {
            output=output+'0';

        }
        else
        {
            ///2 ba ekadik string jug korle pasapasi bose
            int   latter_index  = s[i] - 'A';///amra je latter press korbo  seta k (26) ta latter er number sathe mil kori,jodi 'A' nei tahole A-A korle '0' hoy ja index a raki..
            output=output+possaible[latter_index];///possaible er index zero te "2" ace ta output ert ssthe jug kori,jodi i++ hoy tahole sob index er jonno jate neumeric number pai


        }
    }
    cout<<output<<endl;///sob latter ja string s aniyechi sobar kaj sese loop close hobe than loop er baire ja ja peyechi sopb output a ace,seta print kori
    return 0;
}
