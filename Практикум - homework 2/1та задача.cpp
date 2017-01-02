  #include <iostream>

using namespace std;

void displayHistogram(const char* str)
{
    int arr[256]={0};
    int counter=0;
    for(int i=0 ; str[i]!=0; i++)
        {
            if(str[i]!=str[i+1])
            {
                counter++;
            }
            if(str[i]!=' ')
            {
                int x=str[i];
                arr[x]++;
            }

        }
 for(int j=0 ; j<256 ; j++)
 {
     if (arr[j])
		{
			char c = (char) j;
			cout << c << " : " << arr[j] << " times" << endl;
		}
	}
}

int main()
{
	displayHistogram("I hate homeworks while i am on holiday");

	return 0;
}
