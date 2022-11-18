#include<iostream>
using namespace std;

class RBI{
	
	public:

		int p;
		double r;
		int t;
		double interest;

		
		void setrbi()
		{
			cout<<"~~~~~~~ RBI ~~~~~~~"<<endl;



			cout<<"Enter principal(mony)(p):-";
			cin>>p;
			cout<<"Enter rate";
			cin>>r;
			cout<<"Enter time(t):-";
			cin>>t;
			
			interest=(p*r*t)/100;
			
			cout<<"interest=  "<<interest<<endl;
		}	 
};

class ICIC : public RBI{
	
		public:
		
		void seticic()
		{
			cout<<"~~~~~~~ ICIC ~~~~~~~"<<endl;
			cout<<"Enter principal(mony)(p):-";
			cin>>p;
			cout<<"Enter rate";
			cin>>r;
			cout<<"Enter time(t):-";
			cin>>t;
			
			interest=(p*r*t)/100;
			
				
			cout<<"interest=  "<<interest<<endl;
		}	 
};
class BOB : public RBI{
	
			public:
		
			void setbob()
			{
			cout<<"~~~~~~~ BOB ~~~~~~~"<<endl;

			cout<<"Enter principal(mony)(p):-";
			cin>>p;
			cout<<"Enter rate";
			cin>>r;
			cout<<"Enter time(t):-";
			cin>>t;
			
			interest=(p*r*t)/100;
			
		
			cout<<"interest=  "<<interest<<endl;
			}
	
	
};

class SBI : public RBI{
	
			public:
		
			void setsbi()
			{
			cout<<"~~~~~~~ SBI ~~~~~~~"<<endl;

			cout<<"Enter principal(mony)(p):-";
			cin>>p;
			cout<<"Enter rate";
			cin>>r;
			cout<<"Enter time(t):-";
			cin>>t;
			
			interest=(p*r*t)/100;
			
	
			cout<<"interest=  "<<interest<<endl;
			}
};
	
main()
{
	

	ICIC obj1;
	obj1.setrbi();
	obj1.seticic();

	
	BOB obj2;
	obj2.setbob();
	
	SBI obj3;
	obj3.setsbi();

}
