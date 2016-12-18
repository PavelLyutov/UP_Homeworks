#include <iostream>

using namespace std;
int function2(int arr[6][5],int rows , int columns , int searchedNum)
{
int count = 0;
int result;

    for(int i = 0 ; i< rows ; i++)
    {
        for(int j=0; j< columns ; j++)
        {
            if(searchedNum == count)
            {
                result = arr[i][j];
            }
            count++;
        }
    }
    return result;


}

int main()
{

const int R = 6;
const int C =5;
int arr[6][5]={{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35},{36,37,38,39,40}};
int N;
cout<<"Enter N :"<<endl;
cin>>N;
    if(N>=0 && N<=29)
    {
        cout<<function2(arr,R,C,N);
    }
    else{
        cout<<"N must be in [0,29] interval !";
    }
    return 0;
}
