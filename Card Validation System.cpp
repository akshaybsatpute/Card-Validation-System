//BY       : AKSHAY SATPUTE
#include<bits/stdc++.h>
using namespace std;
bool checkcn(string s)
{
	int len = s.length();
    for (int i = 0; i < len; i++)
	{
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}
int main()
{
		
		cout<<"##########################################################\n";
		cout<<"############### | CARD VALIDATION SYSTEM | ###############\n";
		cout<<"##########################################################\n";
		string s;
		cout<<"\t    CARDNUMBER : ";
		cin>>s;
		cout<<"##########################################################\n";
		while(true)
		{
			if(!checkcn(s))
			{
				cout<<"Enter Details are Incorrect";
				break;
			}
			int leng=s.length();
			int sumodd=0;
			int sumeven=0;
			for(int i=leng-1;i>=0;i=i-2)
			{
				sumodd+=(s[i]-48);
			}
			for(int i=leng-2;i>=0;i=i-2)
			{
				int eve=(s[i]-48)*2;
				if(eve>9)
				{
					eve=(eve/10)+(eve%10);
				}
				sumeven+=eve;
			}
			int total=sumeven+sumodd;
			if(total%10==0)
			{
				cout<<"\t\t---------------------\n";
				cout<<"\t\t|       VALID       |\n";
				cout<<"\t\t---------------------\n";
				cout<<"##########################################################\n";
			}
			else
			{
				cout<<"\t\t-----------------------\n";
				cout<<"\t\t|       INVALID       |\n";
				cout<<"\t\t-----------------------\n";
				cout<<"##########################################################\n";
			}
			break;
		}
}
