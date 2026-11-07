#include<iostream>
using namespace std;
void number(int arr[],int size);
int countpositive(int arr[],int size);
int countnegative(int arr[],int size);
int countzero(int arr[],int size);
int sumpositive(int arr[],int size);
int sumnegative(int arry[],int size);
double average(int arry[],int size);
void result(int p,int n,int z,int sp,int sn,double ave);
int main()
{
    int arr[5];
    number(arr,5);
    int positivecount=countpositive(arr,5);
    int negativecount=countnegative(arr,5);
    int zerocount=countzero(arr,5);
    int positivesum=sumpositive(arr,5);
    int negativesum=sumnegative(arr,5);
    double avg=average(arr,5);
result(positivecount,negativecount,zerocount,positivesum,negativesum,avg);
    return 0;

}
void number(int arr[],int size)
{
    cout<<"enter five entiger";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
}
int countpositive(int arr[],int size)
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>0)
        count++;
    }
    return count;
}
int countnegative(int arr[],int size)
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        count++;
    }
    return count;

}
int countzero(int arr[],int size)
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==0)
        count++;
    }
    return count;
}
int sumpositive(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>0)
        sum+=arr[i];
    }
    return sum;
}
int sumnegative(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        sum+=arr[i];
    }
    return sum;
}
double average(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    return double(sum)/5.0;
}
void result(int p,int n,int z,int sp,int sn,double ave)
{
    cout<<"result";
    cout<<"postive number="<<p<<endl;
    cout<<"negative number="<<n<<endl;
    cout<<"sumof postive="<<sp<<endl;
    cout<<"sumof negative="<<sn<<endl;
    cout<<"zero="<<z<<endl;
    cout<<"average="<<ave<<endl;
}