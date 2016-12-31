#include <iostream>

using namespace std;

int function5(char poslsimvol)
{
    for (char purvisimvol='A'; purvisimvol<=poslsimvol; purvisimvol++)
    {

            for(char i=purvisimvol; i>='A' ; i--)
            {
                cout<<i;
            }
        cout<<endl;


    }
}
int main()
{
    char poslsimvol;
    cout<<"Enter last symbol: ";
    cin>>poslsimvol;
    function5(poslsimvol);
    return 0;

}
