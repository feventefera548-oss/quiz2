#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int positivecount=0;
    int negativecount=0;
    int sumpositive=0;
    int sumnegative=0;
    int zero=0;
    int totalsum=0;
    cout<<"inter five intiger";
    for(int i=0;i<5;i++)
    {
    cin>>a[i];
    totalsum+=a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            positivecount++;
            sumpositive+=a[i];

        }
       else if(a[i]<0)
        {
            negativecount++;
        sumnegative+=a[i];
        }
        else
        {
            zero=a[i];
        }
        
    }
    double average=totalsum/5.0;
    cout<<"positive number="<<positivecount<<endl;
    cout<<"negative number="<<negativecount<<endl;
    cout<<"zero="<<zero<<endl;
    cout<<"sum of positive="<<sumpositive<<endl;
    cout<<"sum of negative="<<sumnegative<<endl;
    cout<<"average of the number="<<average<<endl;


    return 0;
}