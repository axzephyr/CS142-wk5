#include<iostream>
using namespace std;
//swapping function
void swp(int i, int j , int arr[])
{
    int a;
    a=arr[i];
    arr[i]=arr[j];
    arr[j]=a;
}

//partition function
int parition(int l,int h, int arr[])
{
    int i=l-1;
    int j=l;
    //create the loop for the elements to be swapped
    for (j<h;j++;)
    {
        if (arr[j]<=arr[h])
        {
            i++;
            swp(i,j,arr);
        }
    }
    //swap the pivot
    swp(i+1,h,arr);
    return i+1;
}

//the function for the quicksort argument
int quickie(int l, int h, int arr[])
{
    if (l<h)
    {
        int a;
        //create the recursive function for the partition
        a=parition(l,h,arr);
        quickie(l,a-1,arr);
        quickie(a+1,h,arr);
    }
}



int main()
{
    int arr[7]={5,4,32,8,65,3,76};
    quickie(0,6,arr);
    cout<<" [";
    for(int a=0;a<7;a++)
    {
        cout<<arr[a];
    }
    cout<<"] "<<endl;
    return 0;
}
