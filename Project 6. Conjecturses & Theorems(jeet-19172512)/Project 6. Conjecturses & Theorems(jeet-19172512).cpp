/*project: 6th project=> Conjectures
   author: jeet sharma-19172512
	date: 09-11-2020*/
	
#include <iostream>
#include <sstream>
#include<string.h>
#include <vector>
#include <windows.h> 
#include<math.h>
using namespace std;
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}
int machigpair(int i,int j,int k , char wife[]){
    if(wife[i] == 'X') return 0;
	if(wife[k] == 'Z') return 0;
    if(wife[k] == 'X') return 0;
    return 1;
}

string switchToChar (char x) {
  switch(x) {
  case 'X':
    return "true"; 
  default:
   return "lying"; 
}
}
int primecheck(long int x)
{
long int i=2;
while (i<x)
{
if ((x%i)==0)
break;
++i;
}
if (i==x)
return(0);
else
return(1);
}
int c=0;
void collatz( unsigned long val ) {
   cout << val << "->";
   while( true ) {
   	c++;
      val = val & 1 ? 3 * val + 1 : val >> 1;
      cout << val << ( val > 1 ? "->" : "\n" );
      if( 1 == val ) return;
   }
  
}
int num;
int sum=0;
class Myclass{
	public:
	//	Goldbach();
		//Collatz();
	//	NicoTheorem();
	//	FourSquareTheorem();
	//	SieveofEratosthenes();
		//brideandGroom();
	//	TrueandLie();
//		Exit();
	private:
		menuController()
		{
	
		while(1){
	
		changeColor(15);
			cout<<"\n\n\t\tPlease choose menu number= ";
			cin>> num ;
				if(num==8){
						Exit();					
				}else{
					switch(num)
						{
							case 1:Goldbach();break;
							case 2:Collatz();break;
							case 3:NicoTheorem();break;
							case 4:FourSquareTheorem();break;
							case 5:SieveofEratosthenes();break;
							case 6:brideandGroom();break;
							case 7:TrueandLie();break;
							default:
								changeColor(12);
								cout<<"\t\tInvalid input!!!"<<endl;
								changeColor(15);
						}
				}
					
			cin.sync();
			showmenu();
		}
		}
	public:
		showmenu()
		{
			changeColor(15);
			cout<<"\n\n\n"<<endl;
		    cout<<"\n\n\t\t=========================I LOVE C++========================="<<endl;
		    cout<<"\n\n";
		    cout<<"\t\t***************************Conjecturses***************************"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
			cout<<"\t\t$                                                                $"<<endl;
		  	cout<<"\t\t$               1-Goldbach's Conjecture                          $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               2-Collatz Conjecture                             $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               3-Nico Chester Theorem                           $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               4-Four Square Theorem                            $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               5-Sieve of Eratosthenes                          $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               6-Bride & Groom                                  $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               7-Truth or Lie                                   $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$               8-Exit                                           $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t$                                                                $"<<endl;
		    cout<<"\t\t************************ Copyright@Jeet **************************"<<endl;
		menuController();
		}
	private:
		int Goldbach(){
		changeColor(10);
		cout<<"\n\t\t-------------------Goldbach's Conjecture---------------------"<<endl;
			cout<< "\n\t\tFor any even number N greater than or equal to 4,there exists\n\t\tat least one pair of prime numbers p1 and p2 such that N = p1 + p2" << endl;
		
		         
			while(1){
				changeColor(12);
				cout<<"\n\t\tNOTICE: Input 888 to Return to the Main Menu."<<endl;
				changeColor(15);
				  long int a,p1,p2;
				  int i,j,k,count=0;
				  cout<<"\n\t\tPlease input a positive integer: ";
				cin>>a;
				if(a==888)break;
				  if ((a%2)==1)
				  {
				    return 1;
				  }
				  
				  for (p1=2;p1<a;++p1)
				  {
				    for (p2=2;p2<a;++p2)
				    {
				     j=primecheck(p1),k=primecheck(p2);
				       if ((j==0) && (k==0) && (p1+p2==a) && (p1<=p2)){
				       	count++;
				       	cout<<"\t\t"<<a<<"="<<p1<<"+"<<p2<<endl;
					   }
				        
				  }
				  }
				  changeColor(10);
				  cout<<"\n\n\n\t\tThere are "<<count<<" pair<s> of Prime Number that add up to "<<a<<endl<<endl;
				changeColor(15);
			}
			
	}
	private:
		int Collatz() 
		{
				changeColor(10);
				cout<<"\n\t\t-------------------Collatz Conjecture---------------------"<<endl;
				cout<< "\n\n\t\tTake any positive number: if it's even you divide it by 2 and if it's odd multiply \n\t\tit by 3 and add 1."
			    "Repeat this process indefinitely, no matter what number you \n\t\tstart with, you will always end up at 1. " << endl;
			    cout << "\n\n\t\tThe conjecture remains stubbornly unproven. Mathematics is not yet \n\t\tready for such problems." << endl;
			changeColor(15);
			   setlocale(LC_ALL, "rus");
			 changeColor(12);
					cout<<"\n\t\tNOTICE: Input 888 to Return to the Main Menu."<<endl;
					changeColor(15);
			   string e;
			   unsigned long d;
			   while(1) {
			      cout << "\n\t\tPlease Input a positive integer: ";
			      getline( cin, e );
			      if(e=="888")break;
			      
			      istringstream ist( e );
			      cout<<endl;
			      while( ist >> d )
			        collatz( d );
			        changeColor(10);
			         cout<<"\n\n\t\tThere are "<<c<<" steps to get to 1 for "<<e<<"."<<endl;
			         changeColor(15);
			   }
	}
	private:
		void NicoTheorem(){

			changeColor(10);
			cout<<"\n\t\t-------------------Nico Chester Theorem---------------------"<<endl;
			cout<<"\n\t\tAny integer to the third power can be represented as the sum of a\n\t\tseries of consecutive odd Numbers." << endl;
			int n,counter=0,sum;
		    while (1)
		    {
		    	changeColor(12);
				cout<<"\n\t\tNOTICE: Input 888 to Return to the Main Menu."<<endl;
				changeColor(15);
				
			   	cout<<"\n\t\t"<<"Please input a positive integer: ";
			    cin>>n;
			    
			   if(n==888)break;
			   
			   		cout<<endl;
				    int cube=pow(n,3);
				    for(int i=1; i<cube; i+=2)
					{
						sum=0;
						for(int j=i; j<cube; j+=2)
						{
							sum += j;
							if (sum==cube)
							{
								cout<<"\n\t\t"<<cube<<" = ";
								for(int k=i; k<j; k+=2){
									cout<<k<<"+";
									counter++;
									if(counter==15){
										cout<<endl;
										counter=0;
										cout<<"\t\t\t";
									}
								}
								cout<<j<<endl;
								counter=0;
								
								if (n>50){
									cout<<"There are too many solutions."<<endl;
									i=cube;
								}
							}
						}	
				    }
		    	
		    }
}
	private:
	void FourSquareTheorem()
	{
				changeColor(10);
				cout<<"\n\t\t-------------------Four-Square Theorem---------------------"<<endl;
				cout<< "\n\t\tFour-square Theorem: Each positive integer may be expressed as\n\t\tthe sum of the squares of four integers." << endl;
			        
				while(1){
					 double loop=0;
					changeColor(12);
					cout<<"\n\t\tNOTICE: Input 888 to Return to the Main Menu."<<endl;
					changeColor(15);
					
					cout<< "\n\t\tPlease input a positive integer : ";
					  int a;
					 
						cin>>a; 
						if(a==888)break;
						cout<<"\t\t\t";
					   for (int i = 0; i * i <= a; i++) { 
					        for (int j = i; j * j <= a; j++) { 
					            for (int k = j; k * k <= a; k++) { 
					                for (int l = k; l * l <= a; l++) { 
					  					loop++;
					                    if (i * i + j * j + k * k + l * l == a) {  
					                        cout << a << " = " << i << "x" << i 
					                            << " + " << j << "x" << j << " + "; 
					                        cout << k << "x" << k << " + " 
					                             << l << "x" << l << "\n\t\t\t"; 
					                    } 
					                } 
					            } 
					        } 
					    } 
					    cout<<"\n\t\tThe total loop is "<<loop<<endl;
					loop=0;
					}
					
			}
	private:
			void SieveofEratosthenes()
			{
					changeColor(10);
					cout<<"\n\t\t-------------------Sieve of Eratosthens---------------------"<<endl;
					
					while(1){
						changeColor(12);
						cout<<"\n\n\n\t\tNOTICE: Input 888 to Return to the Main Menu."<<endl;
						changeColor(15);
						cout<<"\n\t\tStart from 1, please input the end number :";
					    int n,coun=0,c=0; 
				  	cin>>n;
				  	if(n==888)break;
				    bool prime[n+1]; 
				    memset(prime, true, sizeof(prime)); 
				  
				    for (int p=2; p*p<=n; p++) 
				    { 
				     
				        if (prime[p] == true) 
				        {
				            
				            for (int i=p*p; i<=n; i += p) {
				            
				            	  prime[i] = false; 
							}
				              
				        } 
				    } 
				     for (int p=2; p<=n; p++)
					 {
				       if (prime[p]){
					   c++;
					   }
				   }
				   changeColor(10);
				cout<< "\n\t\tThere are " << c << " prime number between 1 and " << n << "." << endl;
				cout<<"\n\t\tPrint all these prime number<Y/N> :";
				changeColor(15);
				getchar();
				if(getchar()=='Y'){
					cout<<"\n\t\t";
					for (int p=2; p<=n; p++) 
				       if (prime[p]){
				       	coun++;
				       	cout << p;
				       	if(coun==10){
				       		cout<<endl<<endl<<"\t\t";
				       		coun=0;
						   }
				       	else  cout<<"\t";
					   }
				}
				}
			}
	private:
			void brideandGroom(){
				changeColor(10);
				cout<<"\n\t\t-------------------Bride and Groom---------------------"<<endl;
				cout<<"\n\t\tThere are 3 bries <A, B, C> and 3 grooms <X, Y, Z>."
					"\n\n\t\tA: I will marry X."
					"\n\n\t\tX: My fiance is C."
					"\n\n\t\tC: I will marry Z."
					"\n\n\t\tIt is known that they are all kidding ."
					"\n\n\t\tThen, do you know who and who are a couple?"<<endl;
					
					
					changeColor(15);
					cout<<"\n\t\tPress any key to show the answer.";
					cin.clear();
					cin.sync();
					getchar();
					
				char hansband[3]={'A','B','C'};
			
			    char wife[3]={'X','Y','Z'};
			
			    int i,j,k;
			
			    for(i=0;i<3;i++){
			
			        for(j=0;j<3;j++){
			
			            for(k=0;k<3;k++){
			
			                if(i!=k&&j!=k&&i!=j){
			
			                    if(machigpair(i,j,k,wife)){
			                    	printf("\n\t\tThe groom %c's bride is B\n",wife[j]);
									printf("\t\tThe groom %c's bride is C\n",wife[k]);
			                        printf("\t\tThe groom %c's bride is A\n",wife[i]);
			                    }
			                }
			            }
			        }
			    }
			    cout<<"\n\t\tPRESS ANY KEY TO RETURN TO THE MENU";
			    getchar();
			    showmenu();
			}
		private:
			int TrueandLie(){
				changeColor(10);
			cout<<"\n\t\t-------------------True or Lie---------------------"<<endl;
			
			cout<<"\n\t\tBen says that Bob is lying."
					"\n\n\t\tBob says that Bill is lying."
					"\n\n\t\tBill says that they are all lying."
					"\n\n\t\tThen , do you know who is lying ?"<<endl;
					changeColor(15);
					cout<<"\n\n\t\tPress any key to show the answer.";
					cin.sync();
					cin.clear();
					getchar();
					
			int a,b,c;
			char DD,EE,FF;
			for (a=1;a<=3;a++)
			{
				for (b=1;b<=3;b++)
				{		
					for (c=1;c<=3;c++)
					 {
					 	   if (a!=1&&c!=1&&c!=3)
							{
							    DD='X'+a-1;
							    EE='X'+b-1;
							    FF='X'+c-1;
							    cout<<"\n\t\tBen is "<< switchToChar(DD) << "." << endl << endl ;
							    cout<<"\t\tBob is "<< switchToChar(EE) <<  "." << endl << endl ;
							    cout<<"\t\tBill is "<< switchToChar(FF) << "." <<endl << endl ;
								
								cout<<"\n\t\tPRESS ANY KEY TO RETURN TO THE MENU"<<endl;
			   
							   getchar();
							   showmenu();
							}
					 }
				}
			}
   
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
	Myclass obj;
	obj.showmenu();
return 0;
}

