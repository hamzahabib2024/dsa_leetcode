// merge two sorted arrays

#include <iostream>
#include <vector>
using namespace std;

void Print (vector<int>& v)
{
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}

void merge(vector<int>& num1,int m,vector<int>&num2,int n)
{
    int p1 = m-1;  // deals with the array 01
    int p2 = n-1; // deals with the second array
    int p = m+n-1;  // deals with the main combined array

    while(p1>=0 && p2>=0)
    {
        if (num1[p1]>num2[p2])
        {
            num1[p] = num1[p1];
            p1--;
        }
        else
        {
            num1[p] = num2[p2];
            p2--;
        }
        p--;
    }
    while(p2>=0)
    {
        num1[p] = num2[p2];
        p2--;
        p--;
    }
}

int main()
{
    int m,n;
    cout<<"Enter the number of elements in the first array: ";
    cin>>m;
    cout<<"\nEnter the number of elements in the second array: ";
    cin>>n;

    vector<int> num1(m+n);
    vector<int> num2(n);
    
    cout<<"\nenter the elements in first array: ";
    for (int i = 0; i<(m+n);i++)
    {
        if(i<m)
        {
            cin>>num1[i];
        }
        else
        {
            num1[i] = 0;
        }
    }

    cout<<"\nenter the elements in second array: ";
    for (int i = 0; i<n;i++)
    {
        cin>>num2[i];
    }

    Print(num1);
    Print(num2);

    merge(num1,m,num2,n);
    Print(num1);
}