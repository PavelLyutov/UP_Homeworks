#include <iostream>

using namespace std;

int countInversions(int* arr, int size)
{
        int counter=0;
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size; j++)
        {
            if(*(arr+j) < *(arr+i))
            {
                counter++;
            }
        }
    }

return counter;
}
int main()
{
    int arr[]= {1, 3, -5, 9, 6};// примера от условието
    int size=5;
    for(int i=0 ; i <size ; i++)
    {
        cout<<arr[i]<<"  " ;
    }
    cout<<endl;
    cout<< "count of inversions :"<<countInversions(arr,size)<<endl;

 return 0;
}
