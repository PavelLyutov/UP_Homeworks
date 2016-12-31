#include <iostream>

using namespace std;

void func2(char *string, char simvol)
{   int i;
    int counter=0;
    for(int i=0; string[i]!=0 ; i++)
    {

        if(string[i]==simvol)
        {
            cout<<simvol<<"  is on position: " << (counter+1)<<endl;
                  for(int j=i; string[j]!=0; j++)
                    {
                        cout<<string[j];
                    }
                    return;
        }
        counter++;
    }
    cout<<"Symbol is not from the niz"<<endl;


}
int main()
{
    char string[100];
    cout<<"Enter text: ";
    cin.getline(string,100);
    char simvol;
    cout<<"Enter symbol: ";
    cin>>simvol;
    func2(string,simvol);


}
