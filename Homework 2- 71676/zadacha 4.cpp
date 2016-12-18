#include <iostream>

using namespace std;
int enterArray(int arr[10][10],int rows,int columns = 2)
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

void Sorting(int arr[][10],int R,int C)
{
int x;
for(int i = 0; i< R;i++)
{
    for(int j = 0;j< C; j++)
    {
        x=j+1 ;
        for(int t = i;t<R;t++)
        {
            for(int p = x;p<C;p++)
            {
                if(arr[i][j]> arr[t][p])
                {
                 swap(arr[i][j],arr[t][p]);
                }

            }
            x=0;

        }

    }


}
for(int i = 0;i< R ;i++)
{
    for(int j = 0;j< C ;j++)
    {
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}

int main()
{
    int arr[10][10];
    int R,C;
    cout<<"ENTER size ot matrix (max to 10x10)"<<endl;
    cout<<"enter rows :";
    cin>>R;
    cout<<"enter columns :";
    cin>>C;
    enterArray(arr,R,C);
    Sorting(arr,R,C);
    return 0;
}
