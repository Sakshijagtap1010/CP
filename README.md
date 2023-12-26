# DSA
# Linear Search O(n)
# code:
#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
            if(arr[i]==key)
            {
                cout<<i;
            }
        
    }

}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int index = LinearSearch(arr , 7 , 7);
    return 0;
}
