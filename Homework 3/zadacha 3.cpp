#include <iostream>

using namespace std;

void function3(char *string)
{

    int counter=0;
    for(int i=0; string[i]!=0 ; i++)
    {

        if(string[i]=='T')
        {
            cout<<"T  is on position: " << (counter+1)<<endl;
            return;
        }

        counter++;
    }

     cout<<"there is no T in the text" <<endl;

}
int main()
{
    char string[100];
    cin.getline(string,100);
    function3(string);


}
