#include <iostream>
#include<iomanip>
using namespace std;
void function3(int arr[][7],int x )
{
    //x e razmera na matrix
    int up=0,down=x-1,left=0,right=x-1;
    int counter = 1;
    while(counter <= x*x)
    {
        if(counter >= (x*x))
        {   // Finish with x*x
            arr[up][left]=counter;
            break;
        }

        for(int i = left;i<=right;i++)
        {
            arr[up][i]=counter;
            counter++;
        }
        up++;

        if(counter >= (x*x))
        {   // Finish with x*x
            arr[up][right]=counter;
            break;
        }


        for(int j =up;j<=down;j++)
        {
            arr[j][right]=counter;
            counter++;
        }
        right--;

        if(counter >= (x*x))
        {    // Finish with x*x
            arr[down][right]=counter;
            break;
        }

        int cntr = 0;
        for(int k = left ;k<=right;k++)
        {
            //arr[down][right-k]=counter;
            arr[down][right-cntr++]=counter;
           counter++;
        }
        down--;

        if(counter >= (x*x))
        {   // Finish with x*x
            arr[down][left] = counter;
            break;
        }
        cntr = 1;
        for(int s = up ;s<=down ;s++)
        {
            //arr[down-s+1][left] = counter;
            arr[down-(cntr++)+1][left] = counter;

            counter++;
        }
        left++;

    }

    for(int i =0 ;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<< setw(3)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    const int x = 7;
    int arr[x][x];
    function3(arr,x);
    return 0;
}
