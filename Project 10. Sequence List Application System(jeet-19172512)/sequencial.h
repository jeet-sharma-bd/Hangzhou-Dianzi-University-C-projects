#include<iostream>
#include<time.h>
#include<vector>
#include<fstream>
#include <algorithm>
using namespace std;

		


class SetOperation{
	private:
			//int Set1[60],Set2[60];
			vector<int>Set1;
			vector<int>Set2;
			//int size= sizeof(Set1)/sizeof(Set1[0]);
	public:
		void returnMenu();
		void Intersection();
		void Subtraction();
		void unionset();
		void marge();
		void SumofA();
		void Order();
		void IntervalDelete();
		
};
void SetOperation:: returnMenu(){
	int a;
	for(int i=0;i<size;i++){
		a=rand()%size;
		Set1[i]=a;
	}
	cout<<"\n\n\t\t\tPRESS ANY KEY TO RETURN TO THE MENU";
	cin.clear();
	cin.sync();
	getchar();
}
void SetOperation::Order(){
	cout<<"\n\t\tThe list before insertion : "<<endl;
	int n;
	sort(Set1 , Set1 + size);
		cout<<"\n\t\t";
			for(int c=0, i=0;i<size;i++){
				c++;
				cout<<Set1[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
			}
			cout<<"\n\t\tPlease input a value to insert : ";
			cin>>n;
			cout<<"\n\t\tThe list After insertion : "<<endl;


		for(it=temp.begin();it<temp.end();it++)
		{
			cout<<*it<<"\t";
			c++;
			if(c==10){
				cout<<"\n\t\t";
				c=0;
			}
		}
			
	
}
void SetOperation::IntervalDelete(){
cout<<"\n\t\tThe list before deletion: "<<endl;
sort(Set1 , Set1 + size);
		cout<<"\n\t\t";
			for(int c=0, i=0;i<size;i++){
				c++;
				cout<<Set1[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
			}
	int l,u,c=0;
	vector<int>temp;
	vector<int>::iterator it;
	cout<<"\n\t\tPlease input the lower bound of the interval : ";
	cin>>l;
	cout<<"\n\t\tPlease input the upper bound of the interval : ";
	cin>>u;
	for(int i=0;i<size;i++){
		
		if(Set1[i] < l){
			c++;
			temp.push_back(Set1[i]);
		}else if( Set1[i] > u){
			c++;
			temp.push_back(Set1[i]);
		}
	}
	c=0;
	cout<<"\n\t\tThere are "<<size-temp.size()<<" element deleted."<<endl;
	cout<<"\n\t\tThe list after deletion :"<<endl;
		cout<<"\n\t\t";	
	for(it=temp.begin();it<temp.end();it++){
		cout<<*it<<"\t";
		c++;
			if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
	}
	returnMenu();
}
void SetOperation::SumofA(){
	if(size==0){
		cout<<"\n\t\tList is empty"<<endl;
	}else{
		int a,cnt=0;
		cout<<"\n\t\tFind two Number in the list: x + y, that exactly equal to A"<<endl;
		cout<<"\n\t\tPlease input A number : ";
		
		cin>>a;
		sort(Set1 , Set1 + size);
		cout<<endl;
		int temp=Set1[0];
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(temp == Set1[i])
				{
					break;
				}else if(Set1[i] + Set1[j] == a)
				{
						cnt++;													
							cout<<"\t\tThere is : "<<Set1[i]<<" + "<<Set1[j]<<" = "<<a<<endl;
							
						temp=Set1[i];
						break;
					}
			}
		}
	
	
		cout<<endl;
		cout<<"\n\t\t";
			for(int c=0, i=0;i<size;i++){
				c++;
				cout<<Set1[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
			}
			
	}

	returnMenu();
}
void SetOperation::marge(){
	cout<<"\n\t\t\tThe First asending  Sequence list is: "<<endl;

	int a;
	for(int i=0;i<size;i++){
		a=rand()%size;
		Set1[i]=a;
	}

		sort(Set1 , Set1 + size);
		
			cout<<"\n\t\t";
			for(int c=0, i=0;i<size;i++){
				c++;
				cout<<Set1[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
			}
		
	cout<<"\n\t\t\tThe Second asending Sequence list is:"<<endl;


	for(int i=0;i<size;i++){
		a=rand()%size;
		Set2[i]=a;
	}
		sort(Set2 , Set2 + size);
		
			cout<<"\n\t\t";
			for(int c=0, i=0;i<size;i++){
				c++;	
				cout<<Set2[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
			}
			
	cout<<"\n\t\t\tThe marge asending Sequence list is:"<<endl;
	
vector<int>temp(120);
vector<int>::iterator it;

	merge(Set1,Set1 + size,Set2,Set2 + size,temp.begin());

for( it=temp.end();it > temp.begin(); --it){
	if( *it == 0 ){
		temp.pop_back();
	}
}
	cout<<"\n\t\t";
	int c=0,i;
	for(it=temp.begin();it <=temp.end() ;++it){
		c++;	
		cout<<*it<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
returnMenu();
}


void SetOperation::unionset(){
		
	cout<<"\n\t\t\tThe First Sequence list is: \n"<<endl;
	int a;
	cout<<"\n\t\t";
	for(int c=0, i=0;i<size;i++){
		c++;	
		a=rand()%size;
		Set1[i]=a;
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	cout<<"\n\t\t\tThe Second Sequence list is: \n"<<endl;

	cout<<"\n\t\t";
	for(int c=0, i=0;i<size;i++){
		c++;	
		a=rand()%size;
		Set2[i]=a;
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	
	cout<<"\n\t\t\tThe Union Sequence list is: \n"<<endl;
	
vector<int>temp(120);
vector<int>::iterator it;

	sort(Set1 , Set1 + size);
	sort(Set2 , Set2 + size);

	set_union(Set1,Set1 + size,Set2,Set2 + size,temp.begin());

for( it=temp.end();it > temp.begin(); --it){
	if( *it == 0 ){
		temp.pop_back();
	}
}
	cout<<"\n\t\t";
	int c=0,i;
	for(it=temp.begin();it <=temp.end() ;++it){
		c++;	
		cout<<*it<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
returnMenu();
}
void SetOperation::Subtraction(){

		
	cout<<"\n\t\t\tThe First Sequence list is: \n"<<endl;
	int a;
	cout<<"\n\t\t";
	for(int c=0, i=0;i<size;i++){
		c++;	
		a=rand()%size;
		Set1[i]=a;
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	cout<<"\n\t\t\tThe Second Sequence list is: \n"<<endl;

	cout<<"\n\t\t";
	for(int c=0, i=0;i<size;i++){
		c++;	
		a=rand()%size;
		Set2[i]=a;
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	
	cout<<"\n\t\t\tThe Diffrence set  Sequence list is: \n"<<endl;
	
vector<int>temp(size);
vector<int>::iterator it;

it=set_difference(Set1,Set1 + size,Set2,Set2 + size,temp.begin());

temp.resize(it-temp.begin());
int l=temp.size();

if(l>1){
	cout<<"\n\t\t";
	int c=0;
	for(it=temp.begin();it!=temp.end();++it){
		c++;	
		cout<<*it<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
}else{
	cout<<"\n\n\t\t\tThe Diffrence set list is Empty"<<endl;
}

returnMenu();
}
void SetOperation::Intersection(){
		
	cout<<"\n\t\t\tThe First Sequence list is: \n"<<endl;
	int a;
	cout<<"\n\t\t";
	for(int c=0, i=0;i<size;i++){
		c++;	
		a=rand()%size;
		Set1[i]=a;
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	cout<<"\n\t\t\tThe Second Sequence list is: \n"<<endl;

	cout<<"\n\t\t";
	for(int c=0, i=0;i<size;i++){
		c++;	
		a=rand()%size;
		Set2[i]=a;
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	
	cout<<"\n\t\t\tThe Intersection Sequence list is: \n"<<endl;
	
vector<int>temp(size);
vector<int>::iterator it;

it=set_intersection(Set1,Set1 + size,Set2,Set2 + size,temp.begin());

temp.resize(it-temp.begin());
int l=temp.size();

if(l>1){
	cout<<"\n\t\t";
	int c=0;
	for(it=temp.begin();it!=temp.end();++it){
		c++;	
		cout<<*it<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
}else{
	cout<<"\n\n\t\t\tThe intersection list is Empty"<<endl;
}

	
	
	returnMenu();
}
