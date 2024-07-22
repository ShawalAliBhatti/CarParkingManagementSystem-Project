#include <iostream>
using namespace std;
int main() 
{
    int c=0;
    int r=0;
    int b=0;
    int u_input;
    int amount=0,count=0;
    // menu
    while (true) 
	{
        cout<<"press 1 for rickshaw:"<<endl;
        cout<<"press 2 for cars:"<<endl;
        cout<<"press 3 for bus:"<<endl;
        cout<<"press 4 to show the record:"<<endl;
        cout<<"press 5 to delete the record:"<<endl;
        cin>>u_input;
        if (u_input==1) 
		{
            if (count<=50)
			 {
                r=r+1;
                amount=amount+100;
                count=count+1;
            } 
			else
                cout<<"no more rickshaw parking is full:"<<endl;
        }
		 else if (u_input==2) 
		 {
            if (count<=50)
			 {
                amount=amount+200;
                count=count+1;
                c=c+1;
            } 
			else
                cout<<"car parking is full:"<<endl;
        } 
		else if (u_input==3) 
		{
            if (count<=50) 
			{
                b=b+1;
                amount=amount+300;
                count=count+1;
            } 
			else
                cout<<"bus parking is full:"<<endl;
        } 
		else if (u_input==4)
		 {
            cout<<"********************************"<<endl;
            cout<<"The total amounts ="<<amount<<endl;
            cout<<"The total numbers of vehicles parked="<<count<<endl;
            cout<<"The total numbers of rickshaws parked="<<r<<endl;
            cout<<"The total numbers of cars parked="<<c<<endl;
            cout<<"The total numbers of buses parked="<<b<<endl;
            cout<<"********************************"<<endl<<endl;
        } 
		else if (u_input==5)
		 {
            amount=0;
            count=0;
            r=0;
            c=0;
            b=0;
            cout<<"********************************"<<endl;
            cout<<"Record Deleted:"<<endl;
            cout<<"********************************"<<endl<<endl;
        } 
		else 
		{
            cout<<"invalid number:"<<endl;
        }
    }
return 0;
}

