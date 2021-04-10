#include<iostream>
#include<time.h>
#include<vector>
#include<fstream>
#include <algorithm>
#include<windows.h>
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}

using namespace std;
void returnMenu(){
	cout<<"\n\n\t\t\tPRESS ANY KEY TO RETURN TO THE MENU";
	cin.clear();
	cin.sync();
	getchar();
}
class Sequencial{
	private:
		vector<int>Seq;
	public:
		void createSequence();
		void showSequence();
		void clear(){
			if(Seq.size()!=0){
					Seq.clear();
				changeColor(10);cout<<"\n\t\t\tThe current sequence list has been clear."<<endl;	changeColor(15);
			}else{
					changeColor(12);cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;	changeColor(15);
			}
		
		}
		bool Sortlist();
		void searchByLocation();
		void searchByValue();
		void InsertByLocation();
		void deleteByLocation();
		void deleteByValue();
		void removeDuplicate();
		void Reverse();
		void partitionList();
		void importData();
		void maxPlatfor();
		void ExpotTofile();
};
void Sequencial::maxPlatfor(){
		if(Seq.size()==0){
			changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;changeColor(15);
					returnMenu();
			}
			
int c=1,temp=0,t,j,i;
	for(i=0;i<Seq.size();i++){		
					
				if(Seq[i] == Seq[i+1])
				{c++;
					if(c>temp){
						t=i;
						temp=c;		
						}	
				}else{
					c=1;
				}
		
	}
changeColor(10);	cout<<"\n\t\t\tMax Platform Number is : "<<temp<<endl;changeColor(15);
	returnMenu();
}
void Sequencial::deleteByValue(){
		if(Seq.size()==0){
				changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;	changeColor(15);
					returnMenu();
			}
			
	int n,c=0;
		changeColor(10);
	cout<<"\n\t\tBefore delete..............."<<endl;	changeColor(15);

	cout<<"\n\t\t";
	for(int c=0, i=0;i<Seq.size();i++){
		c++;
		cout<<Seq[i]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}		
	changeColor(10);cout<<"\n\n\t\tPlease input a number to be Delete : ";changeColor(15);
	cin>>n;
		for(int i=0; i<Seq.size(); i++)
		{
			if(n == Seq[i]){
				c++;				
			}
		}
		remove(Seq.begin(), Seq.end(),n);
		
		for(int i=0; i<c; i++)
		{
			Seq.pop_back();
		}
		changeColor(10);
	cout<<"\n\n\t\tAfter delete..............."<<endl;changeColor(15);
	cout<<"\n\t\t";
	
	for(int c=0, i=0 ; i<Seq.size();i++){
		c++;
		cout<<Seq[i]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}	
		changeColor(10);cout<<"\n\n\t\t\tThere are ";changeColor(15);
		cout<<c;changeColor(15);;
		changeColor(10);cout<<" of ";changeColor(15);cout<<n;changeColor(10);cout<<" deleted in the sequence list : ";	changeColor(15);	
returnMenu();
}

void Sequencial::Reverse(){
		if(Seq.size()==0){
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;
					returnMenu();
			}
			
		changeColor(10);cout<<"\n\t\tThe sequence before Reverse is : "<<endl;	changeColor(15);
	cout<<"\n\n\t\t";
		for(int c=0, i=0;i<Seq.size();i++){
		c++;
		cout<<Seq[i]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	changeColor(10);cout<<"\n\n\t\tThe sequence After Reverse is : "<<endl;	changeColor(15);
	reverse(Seq.begin(),Seq.end());
	cout<<"\n\t\t";
	for(int c=0, i=0;i<Seq.size();i++){
		c++;
		cout<<Seq[i]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	returnMenu();
}

void Sequencial::searchByValue(){
		if(Seq.size()==0){
				changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;	changeColor(15);
					returnMenu();
			}
			
	int n;
	vector<int>temp;
	
	cout<<"\n\n\t\tPlease input a number to search : ";
	cin>>n;
	for(int i=0; i<Seq.size(); i++){
		if(n==Seq[i]){
				temp.push_back(i+1);
		}
	}
		changeColor(10);
	cout<<"\n\n\t\tThe location of "<<n<<" in the sequence list is : ";	changeColor(15);
	n=temp.size();
	if(n>1)
	{
		for(int i=0;i<n;i++)
		{
		cout<<temp[i];
			if(i<n-1){
				cout<<",";
			}
		}
	}else{
		cout<<temp[0]<<endl;
	}
returnMenu();
}
void Sequencial::searchByLocation(){
		if(Seq.size()==0){
				changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;	changeColor(15);
					returnMenu();
			}
	int a;
	cout<<"\n\n\t\tPlease input a location to search : ";
	cin>>a;
		changeColor(10);
	cout<<"\n\t\tThe value of "<<a<<" in the sequence list is : "<<Seq[a-1]<<endl;	changeColor(15);
	returnMenu();
}
bool Sequencial::Sortlist(){
		if(Seq.size()==0){
					changeColor(12);cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;	changeColor(14);
					returnMenu();
		}else{
			changeColor(10);
	cout<<"\n\t\tPress ENTER to sort in ascending order. Others for desendng order : ";	changeColor(15);
	cin.clear();
	cin.sync();
	if(getchar()=='\n'){
		cout<<"\n\n\t\t";
		sort(Seq.begin(), Seq.end());
		for(int c=0, i=0;i<Seq.size();i++){
		c++;
		cout<<Seq[i]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	}else{
		sort(Seq.begin(), Seq.end());
			cout<<"\n\n\t\t";
			
		for(int c=0, i=Seq.size()-1;i>=0;i--){
				c++;
				cout<<Seq[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
	}
	}

	returnMenu();
		}
		
}
void Sequencial::removeDuplicate(){
		if(Seq.size()==0){
				changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;	changeColor(15);
					returnMenu();
			}
			
	sort( Seq.begin(), Seq.end() );
	Seq.erase( unique( Seq.begin(), Seq.end() ), Seq.end() );
	changeColor(10);cout<<"\n\t\t\tAll the duplicate element have been deleted"<<endl;changeColor(15);
	cout<<"\n\t\t";
	for(int c=0,i=0;i<Seq.size();i++){
		c++;
		cout<<Seq[i]<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	returnMenu();
}

void Sequencial::showSequence(){
		if(Seq.size()==0){
			changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;changeColor(15);
				
			}
			else{
					cout<<"\n\t\t";
		
			for(int c=0, i=0;i<Seq.size();i++){
				c++;
				cout<<Seq[i]<<"\t";
				if(c==10){
					cout<<"\n\t\t";
					c=0;
				}
			}
			changeColor(10);
				cout<<"\n\t\t\tThe length of the sequence is : "<<Seq.size()<<endl;changeColor(15);
			}
	
	returnMenu();
}
void Sequencial::createSequence(){
	Seq.clear();
	changeColor(10);
	cout<<"\n\n\t\tThe sequence list has been created and initiated by 60 random number\n"<<endl;
	changeColor(15);
	int a;
	cout<<"\n\t\t";
	for(int c=0, i=0;i<60;i++){
		c++;	
		a=rand()%60;
		Seq.push_back(a);
		cout<<a<<"\t";
		if(c==10){
			cout<<"\n\t\t";
			c=0;
		}
	}
	returnMenu();
}
void Sequencial::InsertByLocation(){
		if(Seq.size()==0){
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;
					returnMenu();
			}
		cout<<"\n\n\t\t";
		for(int c=0,i=0;i<Seq.size();i++){
			c++;
			cout<<Seq[i]<<"\t";
			if(c==10){
				cout<<"\n\t\t";
				c=0;
			}
		}
	int i,n;
	cout<<"\n\n\t\tPlease input the location to be inserted : ";
	cin>>i;
	cout<<"\n\t\tPlease input a number to be inserted : ";
	cin>>n;
	Seq[i-1]=n;
	cout<<"\n\n\t\t";
		for(int c=0,i=0;i<Seq.size();i++){
			c++;
			cout<<Seq[i]<<"\t";
			if(c==10){
				cout<<"\n\t\t";
				c=0;
			}
		}
	changeColor(14);cout<<"\n\t\t\t\t\tInsert Success"<<endl;changeColor(15);

	returnMenu();
}

void Sequencial::deleteByLocation(){
	int i,n;
	
		if(Seq.size()==0){
			changeColor(12);
				cout<<"\n\t\t\tNo data int the sequence list. Please create Sequence List first"<<endl;changeColor(15);
					returnMenu();
			}
	cout<<"\n\n\t\t";
		for(int c=0,i=0;i<Seq.size();i++){
			c++;
			cout<<Seq[i]<<"\t";
			if(c==10){
				cout<<"\n\t\t";
				c=0;
			}
		}
	cout<<"\n\n\t\tPlease input a location to Delete : ";
	cin>>n;
	i=Seq[n-1];
	Seq.erase(Seq.begin() + n-1);	
	changeColor(10);cout<<"\n\t\tThe location of "<<n<<" in the sequence list has been deleted : "<<i<<endl;changeColor(15);
		cout<<"\n\n\t\t";
		for(int c=0,i=0;i<Seq.size();i++){
			c++;
			cout<<Seq[i]<<"\t";
			if(c==10){
				cout<<"\n\t\t";
				c=0;
			}
		}
	returnMenu();
}
void Sequencial::ExpotTofile(){
	string data;
	ofstream fin;
	fin.open("data.txt");

		for(int c=0,i=0;i<Seq.size();i++){
			c++;
			fin<<Seq[i]<<"\t";
			if(c==10){
				fin<<"\n";			
				c=0;
			}
		}
		fin.close();
		changeColor(10);cout<<"\n\t\t\tData output to the file success."<<endl;changeColor(15);
}
void Sequencial::importData(){
	Seq.clear();
	string data;
	ifstream fin;
	fin.open("data.txt",ios::in);
	
	if(!fin)
	{
			changeColor(12);cout<<"\n\t\tFile data.txt open failed"<<endl;changeColor(15);
	}else{
		changeColor(10);
		cout<<"\n\t\tData imported from the data.txt file Success."<<endl;
		changeColor(15);
	}
	int a;
	while(fin>>a)
	{
		Seq.push_back(a);
	}
	
	cout<<"\n\n\t\t";
		for(int c=0,i=0;i<Seq.size();i++){
			c++;
			cout<<Seq[i]<<"\t";
			if(c==10){
				cout<<"\n\t\t";			
				c=0;
			}
		}
		fin.close();
}

