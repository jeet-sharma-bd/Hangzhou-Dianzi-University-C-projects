/*project: 7th project=> Tickets Theater
   author: jeet sharma-19172512
	date: 12-11-2020*/
#include<iostream>
#include<string.h>
#include <windows.h>
#include <cstdlib>
using namespace std;
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}
string arr[100][100];//global 
int leftSeat,sold=0,reserved=0,count=0,row,col;
bool access=false;

class Theater{

	public:
		void menu(){			
			cout<<"\n\n\t\tPRESS ANY KEY TO RETURN TO THE MENU";
			cin.sync();
			cin.clear();
			getchar();
			showmenu();
		}
	public:
		creatTheater()
		{		
			cout<<"\n\t\t================Create a Theater================"<<endl;
			cout<<"\n\n\t\tPlease input the Rows of the theater :";
			cin>>row;
			cout<<"\n\n\t\tPlease input the Columes of the theater :";
			cin>>col;
			Totalseat=col*row;
			for(int i = 0; i < row; ++i)
		       {		       	
			    for(int j = 0; j < col; ++j)
			       {
			           arr[i][j]="*";
			       }
			   }
			   cout<<"\n\t\t================Theater Tickets Create Success================\n"<<endl;
			   show();
		}
		
	public:
		void show()
		{
				cout<<"\n\t\t================Show Status================"<<endl;
			cout<<"\n\t\t*:"<<leftSeat
			<<" seat available\t\t";
			changeColor(14);
			cout<<"0: ";
			changeColor(15);
			cout<<sold<<" sold\t";
			changeColor(12);
			cout<<"@: ";
			changeColor(15);
			cout<<reserved<<" reserved\n\n\n"<<endl;
			cout<<"\t\t    ";
			for(int i=1;i<=col;i++){
				if(i<9)
					cout<<i<<"   ";
				else
					cout<<i<<"  ";
			}
			cout<<"\n";
			for(int i = 0; i < row; ++i)
			{
				
				if(i<9){
					cout<<"\t\t"<<i+1;
				}else
				cout<<"\t       "<<i+1;
			
				for(int j = 0; j < col; ++j)
			        {
			        	if(arr[i][j]=="0"){
			        		changeColor(14);
						}else if(arr[i][j]=="@"){
							changeColor(12);
						}
					cout<<"   "<< arr[i][j];
						changeColor(15);
						if(j == col - 1)
			                cout << endl;
       				 }
			}
			menu();
		}
	public:
		void update()
		{
		cout<<"\n\t\t================Show Status================"<<endl;
			cout<<"\n\t\t*:"<<leftSeat
			<<" seat available\t\t";
			changeColor(14);
			cout<<"0: ";
			changeColor(15);
			cout<<sold<<" sold\t";
			changeColor(12);
			cout<<"@: ";
			changeColor(15);
			cout<<reserved<<" reserved\n\n\n"<<endl;
			cout<<"\t\t    ";
			for(int i=1;i<=col;i++){
				if(i<9)
					cout<<i<<"   ";
				else
					cout<<i<<"  ";
			}
			cout<<"\n";
			for(int i = 0; i < row; ++i)
			{
				
				if(i<9){
					cout<<"\t\t"<<i+1;
				}else
				cout<<"\t       "<<i+1;
			
				for(int j = 0; j < col; ++j)
			        {
			        	if(arr[i][j]=="0"){
			        		changeColor(14);
						}else if(arr[i][j]=="@"){
							changeColor(12);
						}
					cout<<"   "<< arr[i][j];
						changeColor(15);
						if(j == col - 1)
			                cout << endl;
       				 }
			}
		}
	public:
		void selling()
		{	
		update();
			int s1,s2;
		while(1){
			
				cout<<"\n\t\t================Selling Tickets================"<<endl;
				
				cout<<"\n\t\tplease input the row :";
				cin>>s1;				
				cout<<"\n\t\tplease input the colume :";
				cin>>s2;
			
				cout<<"\n\n\t\t\tTicket:<"<<s1<<","<<s2<<"> sold success."<<endl;
				arr[s1-1][s2-1]="0";
				sold++;
				Totalseat--;
				update();
		}
		
		}
	public:
		void refund()
		{
		while(1){
				
				cin.clear();
				cin.sync();
				
			int s1,s2;
				update();
				if(count==5){
					cout<<"\n\t\t================Cencelling Tickets================"<<endl;
				}else{
					cout<<"\n\t\t================Refunding Tickets================"<<endl;
				}
				
				cout<<"\n\t\tplease input the row :";
				
				cin>>s1;
				if(s1==888)menu();
				if(s1>row){
					changeColor(12);
						cout<<"\n\t\tInvalid input!!!"<<endl;
							changeColor(15);
						continue;
					}
				cout<<"\n\t\tplease input the colume :";
				cin>>s2;
				
				if(s1==888)menu();
				
				if(s2>col){
						changeColor(12);
						cout<<"\n\t\tInvalid input!!!"<<endl;
							changeColor(15);
						continue;
					}
					
					//cancel tickets..............
					if(count==5){
						s2-=1;
									s1-=1;
											
						if(arr[s1][s2]=="*"){
							changeColor(12);
							cout<<"\n\t\tThis seat not Reserved yet, you can't cancel it"<<endl;
							changeColor(15);
							continue;
						}else if(arr[s1][s2]=="0"){
							changeColor(12);
							cout<<"\n\t\tThis seat already sold, you can't cancel it"<<endl;
							changeColor(15);
							continue;
						}else if(arr[s1][s2]=="@"){
							arr[s1][s2]="*";
							reserved--;	
							leftSeat++;
							changeColor(11);
							cout<<"\n\n\t\t\tTicket:<"<<s1+1<<","<<s2+1<<"> Cencel success."<<endl;
							changeColor(15);
							continue;
						}
					}else if(count==2){
						s2-=1;
									s1-=1;
						if( arr[s1][s2]=="*"){
							changeColor(12);
							cout<<"\n\t\tThis seat not Sold yet, you can't Refund it"<<endl;
							changeColor(15);
							continue;
						}else if(arr[s1][s2]=="@"){
							changeColor(12);
							cout<<"\n\t\tThis seat already Reserved, you can't Refund it"<<endl;
							changeColor(15);
							continue;
						}else if(arr[s1][s2]=="0"){
							arr[s1][s2]="*";
							sold--;
							leftSeat++;
							changeColor(11);
							cout<<"\n\n\t\t\tTicket:<"<<s1+1<<","<<s2+1<<"> Refund success."<<endl;
							changeColor(15);
							continue;
						}
					}
				
		}	
		}
	public:
		booking()
		{
			while(1){
				int s1,s2;
			update();
			cout<<"\n\t\t================Booking Tickets================"<<endl;
				changeColor(10);
				cout<<"\n\n\t\tInput 888 to return to the Main menu."<<endl;
				changeColor(15);
			cout<<"\n\t\tplease input the row :";
			cin>>s1;
			if(s1==888)menu();
			if(s1>row){
				changeColor(12);
					cout<<"\n\t\tInvalid input!!!"<<endl;
					changeColor(15);
					continue;
				}
			cout<<"\n\t\tplease input the colume :";
			cin>>s2;
			if(s2==888)menu();
			if(s2>col){
				changeColor(12);
					cout<<"\n\t\tInvalid input!!!"<<endl;
					changeColor(15);
					continue;
				}
				
				
			if(arr[s1-1][s2-1]=="0"){
				cout<<"\n\t\tThis set already Sold"<<endl;
			}
			else if(arr[s1-1][s2-1]=="@"){
				cout<<"\n\t\tThis set already Reserved"<<endl;
			}else{
				cout<<"\n\n\t\t\tTicket:<"<<s1<<","<<s2<<"> Booking success."<<endl;
				arr[s1-1][s2-1]="@";
				count=2;
				Totalseat--;
				reserved++;
				
			}
			
		}
			
		}
	public:
		void cancel()
		{
		count=5;
		refund();
		}
	public:
		search()
		{
			while(access){
				cin.sync();
				cin.clear();
				int s1,s2;
			cout<<"\n\t\t================Search Tickets================"<<endl;
			changeColor(10);
				cout<<"\n\n\t\tInput 888 to return to the Main menu."<<endl;
				changeColor(15);
			cout<<"\n\t\tplease input the row :";
			cin>>s1;
			if(s1==888)showmenu();
			
			if(s1>row){
				changeColor(12);
					cout<<"\n\t\tInvalid input!!!"<<endl;
					changeColor(15);
					continue;
			}
			
			cout<<"\n\t\tplease input the colume :";
			cin>>s2;
				if(s2==888)showmenu();
				if(s1>col){
				changeColor(12);
					cout<<"\n\t\tInvalid input!!!"<<endl;
					changeColor(15);
					continue;
			}
			
		
			
			if(arr[s1-1][s2-1]=="0"){
				changeColor(11);
				cout<<"\n\n\t\t\tTicket:<"<<s1<<","<<s2<<"> is sold"<<endl;
				changeColor(15);
				continue;
				
			}else if(arr[s1-1][s2-1]=="@"){
				changeColor(11);
				cout<<"\n\n\t\t\tTicket:<"<<s1<<","<<s2<<"> is reserved"<<endl;
				changeColor(15);
					continue;
			}else{
				changeColor(11);
				cout<<"\n\n\t\t\tTicket:<"<<s1<<","<<s2<<"> is Empty"<<endl;
				changeColor(15);
				continue;
			}	
			}
			changeColor(12);cout<<"\n\n\t\tMaybe you forget to Create Theater!!!"<<endl;changeColor(15);
		}
			
	
	private:
		menuController()
		{
			while(1)
			{
				int num;
			changeColor(15);
				cout<<"\n\n\t\tPlease choose menu number= ";
				cin>> num ;
					if(num==8){
							Exit();					
					}else{
						switch(num)
							{	case 1:creatTheater();break;
								case 2:show();break;
								case 3:selling();break;
								case 4:count=2;refund();break;
							 	case 5:booking();break;
								case 6:cancel();break;
								case 7:search();break;
								default:
									changeColor(12);
									cout<<"\n\t\tInvalid input!!!"<<endl;
									changeColor(15);
							}
					}
						
				cin.sync();
				cin.clear();
			
			}
		}
		
	public:
		void showmenu()
		{
		changeColor(15);
			cout<<"\n\n\n"<<endl;
		    cout<<"\n\n\t\t*********************** I LOVE C++ ************************"<<endl;
		    cout<<"\n\n";
		    cout<<"\t\t************************Ticket Theater***********************"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
			cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          1.Create Theater        2.Show Theater           $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          3.Sell Ticket           4.Refund                 $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          5.Booking Ticket        6.Cencel Ticket          $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          7.Search                8.Exit                   $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t********************** Copyright@Jeet ***********************"<<endl;
		menuController();
		}
		private:		
		Exit(){
			changeColor(10);
			cout<<"\n\n\t\t\t /\\/\\ "<<endl;
			cout<<"\t\t\t_\\   \\_ "<<endl;
			cout<<"\t\t\t\\      )  _,    ,,_ "<<endl;
			cout<<"\t\t\t_|    (  ( 9`> < 6 ) _ __ "<<endl;
			cout<<"\t\t\t\\_     \\__) (__,) (_ )' / "<<endl;
			cout<<"\t\t\t  \\_    _)   \\-/  / `-,(_ "<<endl;
			cout<<"\t\t\t    `--'Z    /`\\_ `,___,/ "<<endl;
			cout<<"\t\t\t       /(__,/    ))/ "<<endl;
			cout<<"\t\t\t      /  \((_    /`/` "<<endl;
			cout<<"\t\t\t     /   |\\`\\ "<<endl;
			cout<<"\t\t\t     `-^-' "<<endl;
			cout<<"\t\t========================================================Thank You,ByeBye "<<endl;
		changeColor(15);
		exit(EXIT_FAILURE);
		}
};
int main(){
Theater th;
th.showmenu();
		
}
