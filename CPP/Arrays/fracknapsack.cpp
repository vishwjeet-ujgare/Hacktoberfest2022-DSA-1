#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

bool comp(struct Item a, struct Item b)
{
    double v1 = (double)(a.value/a.weight);
    double v2 = (double)(b.value/b.weight);
    return v1>v2;
}

double fractional_knapsack(int W, struct Item arr[], int n)
{
    sort(arr,arr+n,comp);
    int curweight = 0;
    double final_value = 0.0;
    for(int i=0;i<n;i++)
    {
        if(curweight+arr[i].weight<=W)
        {
            curweight += arr[i].weight;
            final_value += arr[i].value;

        }
        else
        {
            int remain = W - curweight;
            final_value += arr[i].value*((double)remain/arr[i].weight);
            break;
        }
    }
    return final_value;
}

int main()
{
    int W=50;
    struct Item arr[] = {{60,10},{100,20},{120,30}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nMaximum Value of Profit that we can obtain: "<<fractional_knapsack(W,arr,n);
    return 0;
}

