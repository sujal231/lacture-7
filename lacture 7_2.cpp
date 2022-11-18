#include<iostream>

using namespace std;

class a{
	public:
		int s1;
		void setsum1()
		{
			cout<<"Enter the first:-";
			cin>>s1;
		}
		void getsum1()
		{
			cout<<s1;
		}
};

class b:public a{
	public:
		int s2;
		void setsum2()
		{
			cout<<"Enter the second:-";
			cin>>s2;
		}
		void getsum2()
		{
			cout<<s2;
		}
};

class c{
	public:
		int s3;
		void setsum3()
		{
			cout<<"Enter the third:-";
			cin>>s3;
		}
		void getsum3()
		{
			cout<<s3;
		}
};

class d :public c{
	public:
		int s4;
		void setsum4()
		{
			cout<<"Enter the fourth:-";
			cin>>s4;
		}
		void getsum4()
		{
			cout<<s4;
		}
};

class sum : public b,public d{

		public :
		void sum1()
		{
			
				int sum;
				
				sum=s1+s2+s3+s4;
				
				cout<<endl<<"_______"<<endl;
				cout<<"="<<sum;
				

		}
};


main(){
	
	
	sum obj;
	obj.setsum1();
	obj.setsum2();
	obj.setsum3();
	obj.setsum4();
	cout<<" ";
	obj.getsum1();
	cout<<endl<<"+";
	obj.getsum2();
	cout<<endl<<"+";
	obj.getsum3();
	cout<<endl<<"+";
	obj.getsum4();
	
	obj.sum1();
	
}

   
