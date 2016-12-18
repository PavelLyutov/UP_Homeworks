#include <iostream>

using namespace std;
int enterArray(int arr[105][2],int rows,int columns = 2)
{
for(int i = 0;i<rows;i++)
    {
    for(int j =0;j<columns;j++)
        {
        cout<<"arr["<<i<<"]["<<j<<"]=";
        cin>>arr[i][j];
        }
        cout<<endl;
    }

}


void Print(int arr[105][2], int rows , const int columns = 2)
{
    for(int i = 0 ;i < rows ; i++)
    {
        for(int j=0;j < columns-1 ; j++)
        {
           cout << arr[i][j] << " / " << arr[i][j+1] << " = " << (arr[i][j]*100) / arr[i][j+1] << "% ";
        }
        cout<< endl;
    }



}

int main()
{
    const int pair = 2;
    int Numbers[102][pair];
    int N;
    cout<<"Enter N (pairs) :";
    cin>> N;
    enterArray(Numbers,N,pair);
    Print(Numbers,N,pair);

    return 0;
}
