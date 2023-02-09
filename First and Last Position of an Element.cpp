#include<iostream>
using namespace std;
int first(int arr[],int size,int key)
{
    //finding mid
    int start = 0;
    int last = size-1;
    int mid = start + (last - start)/2;
    
    int ans = -1;
    
    //First Digit
    while(start <= last)
    {
        if(arr[mid] == key)
        {
          //  return mid;
            ans = mid;
            last = mid-1;
        }
        else if(arr[mid] > key)
        {
            last =  mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (last - start)/2;
    }
    return ans;
}

int Last(int num[],int size, int key)
{
    //Finding Mid For last digit.
   int start = 0;
   int end = size-1;
   int mid = start + (end - start)/2;
    
    int ans = -1;
    
    //Finding LAST digit
    while(start <= end)
    {
        if(num[mid] == key)
        {
            //return mid;
            ans = mid;
            start = mid+1;
        }
        else if(num[mid] > key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int num[8]={3,3,3,3,3,3,3,3};
    
   int k = first(num,8,3);
   int j = Last(num,8,3);
   cout << "First Index of 3 is: "<< k <<"."<< endl;
   cout << "Last Index of 3 is: "<< j <<"."<< endl;
}
