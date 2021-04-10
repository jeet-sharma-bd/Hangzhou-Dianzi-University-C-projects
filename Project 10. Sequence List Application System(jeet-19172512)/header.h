#include<iostream>
#include<time.h>
#include<vector>
#include <stdlib.h>
#include<fstream>
#include <algorithm>
#include <bits/stl_algo.h>
#include <windows.h>
#include<iomanip>
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}

using namespace std;

class SetOperation{
	public:
			vector<int>Set1=vector<int>(60);
			vector<int>Set2=vector<int>(60);		
	public:
		void Intersection();
		void Subtraction();
		void unionset();
		void marge();
		void sup();
		void SumofA();
		void Order();
		void IntervalDelete();
		void joshepe();
		void loaddefault();
		void LoadDefault();
		bool common();
		
};
int Getrand(){
return rand()%100;
}
void print(vector<int>vec){
	vector<int>::iterator it;
	int c=0;
	cout<<"\n\t\t";
	for(it=vec.begin();it<vec.end();it++){
		c++;	
		cout<<*it<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
}
void returnMenu(){
	cout<<"\n\n\t\t\tPRESS ANY KEY TO RETURN TO THE MENU";
	cin.clear();
	cin.sync();
	getchar();
}
void SetOperation::sup(){
	vector<int>sub;
	 changeColor(10);
	cout<<"\n\t\t\tThe First Sequence list is: "<<endl;
	 changeColor(15);
	generate(Set1.begin(),Set1.end(),Getrand);
	sort(Set1.begin(),Set1.end());
	print(Set1);
	changeColor(10);
	cout<<"\n\t\t\tThe second Sequence list is: "<<endl;
	changeColor(15);
	int c=1,n;
	n=Set1.size()/4;
	cout<<"\t\t";
	while(n){
			int RandIndex = rand() % 60;
			
			sub.push_back(Set1[RandIndex]);
				if(c==10)
				{ cout<<"\n\t\t";
					c=0;
				}
			c++;
		n--;				
	}
	print(sub);
	changeColor(10);
	cout<<"\n\n\t\t\tThe second list is the a subset of the first list."<<endl;
	
	cout<<"\n\n\t\t\tThe Supplimentary Sequence list is: "<<endl<<endl;	
	changeColor(15);
	for(int i=0;i<sub.size();i++){
		remove(Set1.begin(),Set1.end(),sub[i]);
	}
	
	int size=Set1.size();
	size-=sub.size();
	c=0;
	cout<<"\t\t";
	sort(Set1.begin(),Set1.end());
	
		int i=Set1.size()-1;
		int temp=Set1[i];

	
	while(1){
		if(temp == Set1[i])
		{
			Set1.pop_back();
			i--;
		}else{
			Set1.pop_back();
			Set1.push_back(temp);
			break;
		}
	}
			
	size=Set1.size();
	
	for(int it=0;it<size;it++){
		c++;	
		cout<<Set1[it]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	returnMenu();
}
void SetOperation::joshepe(){
	changeColor(14);
cout<<"\n\n\t\tThere are n people standing in a circle wating to be executed."<<endl;
cout<<"\n\t\tThe counting out begins at some point in the circle and proceeds around the\n"
	"\t\tcirce in a fixed direction. In each step, a certain number of people are\n"
	"\t\tskipped and the next person is executed. the elimination proceeds around\n"
	"\t\tthe circle < which is becoming smaller and smaller as the executed people are removed> ,\n"
	"\t\tuntil only the last person remains, who is given freedom.\n"
	"\n\n\t\tGiven the total number of persons n and a number k which indicates that\n"
	"\t\tk-1 persons are skipped and kth person is killed in circle. The task is\n"
	"\t\tto choose the place in the initial circle so that you are the last one remaining\n"
	"\t\tand so survive.\n"<<endl;changeColor(15);
	int N=9,C=5,index=0;	
		cout<<"\n\n\t\tPlease input the Total Number of monkeys(Default 9) : ";
		cin.clear();
			cin.sync();
		while(!(cin.peek()=='\n') && !(cin>>N)){
			cin.clear();
			cin.sync();
			changeColor(4);
			cout<<"\n\n\t\tInvalid.Please input again :";
			changeColor(15);
		}cin.clear();
			cin.sync();
			cout<<"\n\n\t\tPlease input the Reporting value (Default 5) : ";
		while(!(cin.peek()=='\n') && !(cin>>C)){
			cin.clear();
			cin.sync();
			changeColor(4);
			cout<<"\n\n\t\tInvalid.Please input again :";
			changeColor(15);
		}cin.clear();
			cin.sync();
			cout<<"\n\n\t\tPlease input the positio to start (Default 1) : ";
		while(!(cin.peek()=='\n') && !(cin>>index)){
			cin.clear();
			cin.sync();
			changeColor(4);
			cout<<"\n\n\t\tInvalid.Please input again :";
			changeColor(15);
		}
		if(index>0)index--;
		
    int people[N];
    int i,j;
    int count;
   
    for(i=0;i<N;i++)
        people[i]=-1;
    i=0,count=0;
   
    while(i<N)  
    {
        if(people[index]==-1)
            count++;        
        if(count==C)
        {
            people[index]=i;    
            count=0;    
            i++;    
        }
       
        index++;
        if(index==N)
            index=0;
    }
     changeColor(10);
    cout<<"\n\t\tThe order of elemination is:"<<endl;
     
    int c=0,t;
    cout<<"\n\t\t";
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            if(people[j]==i){
            	c++;
            	t=j+1;
            	cout<<j+1<<"\t";
            	if(c==10)
				{
					cout<<"\n\t\t";
					c=0;
				}
            	
			}
cout<<"\n\n\t\tSo No. "<<t<<" is the winner and the Monkey King"<<endl;
changeColor(15);
returnMenu();
}

void SetOperation::Order(){
	int n;
	cout<<"\n\t\tThe list before insertion : "<<endl;
	generate(Set1.begin(),Set1.end(),Getrand);
	sort(Set1.begin() , Set1.end());
	print(Set1);
	
	cout<<"\n\t\tPlease input a value to insert : ";
		cin>>n;
		Set1.push_back(n);
		sort(Set1.begin() , Set1.end());
			cout<<"\n\t\tThe list After insertion : "<<endl;			
			print(Set1);
			
	returnMenu();
}

void SetOperation::IntervalDelete(){
changeColor(10);
cout<<"\n\t\tThe list before deletion: "<<endl;
changeColor(15);
generate(Set1.begin(),Set1.end(),Getrand);
sort(Set1.begin() , Set1.end());
	print(Set1);
		
	int l,u,c=0;
	vector<int>temp;
	vector<int>::iterator it;
	cout<<"\n\t\tPlease input the lower bound of the interval : ";
	cin>>l;
	cout<<"\n\t\tPlease input the upper bound of the interval : ";
	cin>>u;
		for(int i=0;i<60;i++)
		{		
		if(Set1[i] < l){
			c++;
			temp.push_back(Set1[i]);
		}else if( Set1[i] > u){
			c++;
			temp.push_back(Set1[i]);
		}
	}
	changeColor(10);
	cout<<"\n\t\tThere are "<<Set1.size()-temp.size()<<" element deleted."<<endl;
	cout<<"\n\t\tThe list after deletion :"<<endl;
	changeColor(15);
	c=0;
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
	Set1.clear();
	for(int i=0;i<60;i++){
		int k=Getrand();
		Set1.push_back(k);
	}
		int a,cnt=0;
		changeColor(10);
		cout<<"\n\t\tFind two Number in the list: x + y, that exactly equal to A"<<endl;
		changeColor(15);
		
		
		cout<<"\n\t\tPlease input A number : ";
		cin>>a;
		sort(Set1.begin() , Set1.end());
		int temp=Set1[0];
		
		for(int i=0;i<Set1.size();i++){
			for(int j=i+1;j<Set1.size();j++){				
				if(Set1[i] + Set1[j] == a)
				{
					cnt++;													
					cout<<"\t\tThere is : "<<setw(2)<<Set1[i]<<"+"<<setw(2)<<Set1[j]<<" = "<<a<<endl;
					break;
				}
			}
		}
		if(cnt == 0){
			cout<<"\n\t\tNo maching value in the set "<<endl;
		}
	
		cout<<endl;
		print(Set1);

	returnMenu();
}

void SetOperation::marge(){
	changeColor(10);
	cout<<"\n\t\t\tThe First asending  Sequence list is: "<<endl;
	changeColor(15);
	generate(Set1.begin(),Set1.end(),Getrand);
		sort(Set1.begin() , Set1.end());
		print(Set1);
		
	changeColor(10);	
	cout<<"\n\t\t\tThe Second asending Sequence list is:"<<endl;
	changeColor(15);
	generate(Set2.begin(),Set2.end(),Getrand);
		sort(Set2.begin() , Set2.end());
		print(Set2);
		
	changeColor(10);		
	cout<<"\n\t\t\tThe marge asending Sequence list is:"<<endl;
	changeColor(15);
vector<int>temp(200);
vector<int>::iterator it;

merge(Set1.begin(),Set1.end() ,Set2.begin(),Set2.end() ,temp.begin());

for( it=temp.end();it > temp.begin(); --it){
	if( *it == 0 ){
		temp.pop_back();
	}
}
	print(temp);
returnMenu();
}

void SetOperation::unionset(){	
changeColor(10);	
cout<<"\n\t\t\tThe First Sequence list is: "<<endl;
changeColor(15);
	generate(Set1.begin(),Set1.end(),Getrand);
	print(Set1);
	changeColor(10);
	cout<<"\n\t\t\tThe Second Sequence list is: "<<endl;
	changeColor(15);
	generate(Set2.begin(),Set2.end(),Getrand);
	print(Set2);
	changeColor(10);
	cout<<"\n\t\t\tThe Union Sequence list is: "<<endl;
	changeColor(15);
vector<int>temp(200);
vector<int>::iterator it;
	sort(Set1.begin() , Set1.end());
	sort(Set2.begin() , Set2.end());

	set_union(Set1.begin(),Set1.end(),Set2.begin(),Set2.end(),temp.begin());

for( it=temp.end();it > temp.begin(); --it){
	if( *it == 0 ){
		temp.pop_back();
	}
}
print(temp);
returnMenu();
}
void SetOperation::Subtraction(){

	cout<<"\n\t\t\tThe First Sequence list is:"<<endl;

	generate(Set1.begin(),Set1.end(),Getrand);
	print(Set1);
	
	cout<<"\n\t\t\tThe Second Sequence list is:"<<endl;

	generate(Set2.begin(),Set2.end(),Getrand);
	print(Set2);

	cout<<"\n\t\t\tThe Diffrence set  Sequence list is:"<<endl;
	
	vector<int>temp(60);
	vector<int>::iterator it;

	it=set_difference(Set1.begin(),Set1.end(),Set2.begin(),Set2.end(),temp.begin());

temp.resize(it-temp.begin());
int l=temp.size();

if(l>1){
print(temp);
}else{
	changeColor(4);
	cout<<"\n\n\t\t\tThe Diffrence set list is Empty"<<endl;
	changeColor(15);
}
returnMenu();
}

vector<int>temp1;
vector<int>temp2;
vector<int>check(60);
bool SetOperation:: common(){
	
while(1){
	
	generate(Set1.begin(),Set1.end(),Getrand);
	
	generate(Set2.begin(),Set2.end(),Getrand);
	
	//merge(Set1.begin(),Set1.end() ,Set2.begin(),Set2.end() ,temp.begin());
	
//	print(temp);
	
	
//check.resize(it-check.begin());
int l=check.size();

	if(l>7){
		return true;
		break;
	}else{
		temp1.clear();
		temp2.clear();
		check.clear();
	}	
	}
}

void SetOperation::Intersection(){	
while(1){
	if(common()){
		break;
	}
}
	changeColor(10);
	cout<<"\n\t\t\tThe First Sequence list is: "<<endl;
	changeColor(15);
	
	int a,c=0;
	print(temp1);
	
	changeColor(10);
	cout<<"\n\t\t\tThe Second Sequence list is: "<<endl;
	changeColor(15);
	print(temp2);
	
	changeColor(10);	
	cout<<"\n\t\t\tThe Intersection Sequence list is: "<<endl;
	changeColor(15);
	vector<int>temp=vector<int>(60);
	vector<int>::iterator it;
it= set_intersection(temp1.begin(),temp1.end(),temp2.begin(),temp2.end(),temp.begin());

temp.resize(it-temp.begin());
int l=temp.size();
if(l>0){
	print(temp);
}else{
	changeColor(4);
	cout<<"\n\n\t\t\tThe intersection list is Empty"<<endl;
	changeColor(15);
}
temp1.clear();
		temp2.clear();
		temp.clear();
returnMenu();
}
		
		
void SetOperation::LoadDefault(){
	generate(Set1.begin(),Set1.end(),Getrand);
}
