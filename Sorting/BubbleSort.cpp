//Bubble Sort function

#include<iostream> 

using namespace std;

void BubbleSort (int array[],int n)
{
    int temp;
    for (int i = 0; i <n; i++ )
    {
        for (int j = 0 ; j < n - i-1 ;j++ )
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]= temp;
            }
        }
    }
}

int main()
{
    int array[100]={2,4,3,1,5},n = 5;
    BubbleSort(array,n);
    for(int i = 0 ; i<n;i++)
    {
        cout<<array[i]<<"\t";        
    }
    return 0;
}
