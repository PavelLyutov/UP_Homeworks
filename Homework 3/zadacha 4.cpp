#include <iostream>

using namespace std;


int  function4(char poslsimvol)
{
    int x=0;

    for(char purvisimvol='A'; purvisimvol<=poslsimvol; purvisimvol++)
    {
        cout<<purvisimvol;
            for(int i=0; i < x ; i++)
            {
                cout<<"*";
            }
            if(x > 0 )
            {
                cout<<purvisimvol;
            }
        cout<<endl;
        x += (x==0 ? 1 : 2);

    }
    x-=2;
    for(char tekushtsimvol=poslsimvol-1; tekushtsimvol>='A'; tekushtsimvol--)
    {
        cout << tekushtsimvol;

		x -= 2;

		for (int j = 0; j < x; ++j)
		{
			cout << "*";
		}

		if (x > 0)
		{
			cout << tekushtsimvol;
		}

        cout << endl;
    }

}
int main()
{
    char poslsimvol;
    cout<<"Enter the last symbol: ";
    cin>>poslsimvol;
    function4(poslsimvol);
    return 0;

}
