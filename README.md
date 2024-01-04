# DSA
## Linear Search O(n)
### code:
```
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
```

## Binary Search O(logn)
### code:
```
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid;
    
    mid =(start+end)/2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            start = mid+1;
        }
        else
        {
             end = mid-1;   
        }
        mid =(start+end)/2;

    }
    return -1;

}
int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = BinarySearch(even,6,8);
    cout<<"index:"<<index;

    return 0;
}
```

## Selection Sort O(n^2)
### code:-
```
#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assume the current index is the minimum
        int minIndex = i;

        // Find the index of the minimum element in the unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first unsorted element
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Call the selectionSort function
    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

## Bubble Sort O(n^2>
### code:-
```
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    // Example usage:
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```
## Insertion Sort O(n^2)
### Code:-
```
#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
     for(int m=0; m<n ;m++)
    {
        cout<<arr[m]<<" ";
    }
    cout<<endl;
}
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]<temp)
            {
                arr[j+1]=arr[j] ;//shift
            }
            else
            {
                break;
            }
        }
        arr[j+1]= temp;
    }
}
int main()
{
    int arr[] = {12,11,13,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"original Array:";
    printArray(arr,n);

    insertionSort(arr,n);

    cout<<"sorted Array";
    printArray(arr, n);

    return 0;
}
```
