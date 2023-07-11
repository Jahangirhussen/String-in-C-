#include<iostream>
using namespace std;
int main()
{
    int B_0=0,B_1=0, substring=0 ;

    string binary;
    cin>>binary;
    for(int i=0 ; i< binary.size(); i++)
    {
        if(binary[i]=='0')///counting string '0' ....
            B_0++;
        else
            B_1++;/// counting string '1'...

        if(B_1==B_0)/// question demanp both same and sub string.so count its...
            substring++;

    }
    /**  is input is "01 00 11 01 01" here ero and one are 5 same but...

1st '0' count B_0==1;
B_0 and B_1 are NOT same so 'substring==0;

                2nd '1' count B_1==1;
                B_0 and B_1 are same so 'substring==1;

3rd '0' count B_0==2;
B_0 and B_1 are NOT same so again 'substring==1 ;

              4th '0' count B_0==3;
              B_0 and B_1 are NOT same so again 'substring==1 ;

5 th '1' count B_1==2;
B_0 and B_1 are NOT same so'substring==1;

              6 th '1' count B_1==3;
              B_0 and B_1 are  same so'substring==2;


7th '0' count B_0==4;
B_0 and B_1 are NOT same so 'substring==0;

            8 th '1' count B_1==4;
            B_0 and B_1 are same so 'substring==3;

9th '0' count B_0==5;
B_0 and B_1 are NOT same so 'substring==3;

            10 th '1' count B_1==5;
            B_0 and B_1 are same so 'substring==4;






    */
    if(B_1==B_0)
        cout<< substring<<endl;
    else
        return -1;
}
