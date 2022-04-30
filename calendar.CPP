#include<bits/stdc++.h>
using namespace std;
int position_of_first_day_of_january(int year)
{
    static int first_january=5;
    year=year%28;
    int quo=year/4;
    int rem=year%4;
    int ans=first_january+quo*5;
    ans=ans%7;
    if(rem==0)
        return ans;
    int extra_years=year-quo*4;
    ans=ans+extra_years+1;
    return ans;
}
string name_of_month(int no_of_month)
{
    string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    return months[no_of_month];
}
int no_of_days(int month,int year)
{
    switch(month)
    {
    case 0:
        return 31;
        break;
    case 1:
        {
            if(year%4==0)
            {
                if(year%100==0)
                {
                    if(year%400==0)
                        return 29;
                    else
                        return 28;
                }
                else
                    return 29;
            }
            else
                return 28;

        }
        break;
    case 2:
        return 31;
        break;
    case 3:
        return 30;
        break;
    case 4:
        return 31;
        break;
    case 5:
        return 30;
        break;
    case 6:
        return 31;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 30;
        break;
    case 9:
        return 31;
        break;
    case 10:
        return 30;
        break;
    case 11:
    return 31;
    break;

    }
}
int no_of_space(int month,int year)
{
    int x=position_of_first_day_of_january(year);
    static int s[12];
    s[0]=x;
   s[1]=(s[0]+3)%7;
   if(no_of_days(1,year)==28)
    s[2]=s[1];
   else
    s[2]=(s[1]+1)%7;
   s[3]=s[2]+3;
   s[4]=(s[3]+2)%7;
   s[5]=(s[4]+3)%7;
   s[6]=(s[5]+2)%7;
   s[7]=(s[6]+3)%7;
   s[8]=(s[7]+3)%7;
   s[9]=(s[8]+2)%7;
   s[10]=(s[9]+3)%7;
   s[11]=(s[10]+2)%7;
   return s[month];
}
void printCalender(int year)
{
    cout<<"\t\t\t\t\t\t"<<"CALENDER"<<"\t\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t\t----------------\t\t\t\t\t\t\n";
    int current;
    int k,j;
    for(int i=0;i<12;i++)
    {

    current=no_of_space(i,year);
     switch(i)
    {
    case 0:
        cout<<"\n-----------------"<<name_of_month(i)<<"-----------------\n";
        break;
    case 1:
       cout<<"\n-----------------"<<name_of_month(i)<<"-----------------\n";
        break;
    case 2:
        cout<<"\n------------------"<<name_of_month(i)<<"------------------\n";
        break;
    case 3:
        cout<<"\n------------------"<<name_of_month(i)<<"------------------\n";
        break;
    case 4:
        cout<<"\n-------------------"<<name_of_month(i)<<"-------------------\n";
        break;
    case 5:
        cout<<"\n-------------------"<<name_of_month(i)<<"-------------------\n";
        break;
    case 6:
        cout<<"\n-------------------"<<name_of_month(i)<<"-------------------\n";
        break;
    case 7:
        cout<<"\n------------------"<<name_of_month(i)<<"------------------\n";
        break;
    case 8:
        cout<<"\n----------------"<<name_of_month(i)<<"----------------\n";
        break;
    case 9:
       cout<<"\n-----------------"<<name_of_month(i)<<"-----------------\n";
        break;
    case 10:
       cout<<"\n-----------------"<<name_of_month(i)<<"-----------------\n";
        break;
    case 11:
    cout<<"\n-----------------"<<name_of_month(i)<<"-----------------\n";
    break;
    }
    cout<<"   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";
    int cnt=0;
    for(int k=0;k<current;k++)
    {
        cout<<"      ";
        cnt++;
    }
    for(j=k;j<no_of_days(i,year)+k;j++)
    {
        if(j-k+1<10)
            cout<<"   "<<j-k+1<<"  ";
        else
            cout<<"   "<<j-k+1<<" ";
       cnt++;
       if(cnt==7)
       {
           cnt=0;
           cout<<"\n";
       }
    }
    cout<<"\n";
    }

}
int main()
{
    int year;
    cout<<"Enter Year :";
    cin>>year;
    cout<<"\n";
    printCalender(year);
    return 0;
}
