#include <iostream>

using namespace std;

void function1(char *string)
{
    int counter=0;
    int i;
    for(int i=0; string[i]!=0 ; i++)
    {
	if(string[i]!=' ')
	{
        counter++;
	}
        if(counter == '/n')
        {
            break;
        }

    }

    cout<<"symbols: " << counter <<endl;
    cout<<"first symbol  : " << string[0]<<endl;
    cout<<"middle symbol : " << string[counter/2]<<endl;
    cout<<"last symbol   : " <<string[counter-1] <<endl;


}
int main()
{
    char string[50];
    cout<<" Enter Text: ";
    cin.getline(string,50);
    function1(string);



}
