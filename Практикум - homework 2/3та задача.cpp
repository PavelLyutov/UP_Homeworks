#include <iostream>

using namespace std;

void sort(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size- 1 - i ; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int lowerE = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = lowerE;

            }
        }
    }



}
int main()
{
    int a[] = {5,7,-1,4,0,6};
    int size = 6;
    sort(a,size);
    for(int i=0 ; i < size; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
