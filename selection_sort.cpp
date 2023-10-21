#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void s_sort(int *a,int elements)
{
    int n=0;
    int *b;
    
    while(n!=elements)
    {
        b=a+1;
        for(int i=0;i<(elements-1)-n;i++)
        {
            if(*a>*b)
            {
                swap(a,b);
            }
            b++;
        }
        n++;
        a++;
    }
}
int main()
{
    int no_el;
    cout<<"How many elements in your array?"<<endl;
    cin>>no_el;
    int arr[no_el];
    cout<<"Enter "<<no_el<<" Elements:"<<endl;
    for(int i=0;i<no_el;i++)
    {
        cin>>arr[i];
    }
    s_sort(&arr[0],no_el);
    for(int i=0;i<no_el;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}