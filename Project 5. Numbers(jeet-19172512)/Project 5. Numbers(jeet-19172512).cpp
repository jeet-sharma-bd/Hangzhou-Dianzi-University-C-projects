/*project: 5th project=> Applications
   author: jeet sharma-19172512
	date: 21-10-2020*/
	
#include <iostream>
#include<string.h>
#include <windows.h> 
#include<math.h>
using namespace std;
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}
int DivSum(int num)
{
	int result=0;
	for(int i=1; i<num; i++)
	{
		if (num%i == 0) result += i;	
	}
	return result;
}

void Divisors(int num1, int num2)		
{	changeColor(15);							
	int sum=0;
	for (int i=1; i<num1; i++){
		if (num1%i==0)
		{
			sum += i;
			if (sum!=num2) 	cout<<i<<"+";
			else			cout<<i;
		} 
	}
}
int num;
int sum=0;
bool CheckFriendlyNum(int x, int y){ return ( DivSum(x) == y && DivSum(y) == x && DivSum(x) != 1); }
class Myclass{
	public:
		long int power(int num, int exp);
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
							case 1:perfectNum();break;
							case 2:friendlyNUM();break;
							case 3:NarcissisticNum();break;
							case 4:ArmostrongNum();break;
							case 5:pythagorean();break;
							case 6:mantissa();break;
							case 7:gcllcm();break;
							default:
								changeColor(12);
								cout<<"\t\tInvalid input!!!"<<endl;
								changeColor(15);
						}
				}
					
			cin.sync();
			if(num!=8){
				cout<<"\n\n\t\tPress any key to return to the menu"<<endl;
					if(getchar() != 0){
							showmenu();
					}
		}
		}
		}
	public:
		showmenu()
		{
			changeColor(15);
			cout<<"\n\n\n"<<endl;
		    cout<<"\n\n\t\t=========================I LOVE C++========================="<<endl;
		    cout<<"\n\n";
		    cout<<"\t\t***************************Numbers***************************"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
			cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          1-perfect Number                                 $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          2-Friendly Number                                $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          3-Narcissistic Number                            $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          4-Armsstrong Number                              $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          5-Pythagorean Triple                             $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          6-Mantissa                                       $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$    7-Lowest Common Multiple & Greatest Common Divisor     $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          8-Exit                                           $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t********************** Copyright@Jeet ***********************"<<endl;
		menuController();
		}
	private:
		ArmostrongNum(){
			changeColor(10);
			cout<<"\n\t\t------------------Armstrong Number------------------"<<endl;
		    
		    cout<<"\n\n\t\tAn Armstrong Number is a number that is equal to the sum of"
		    	"\n\t\tall its digits raised to the power of the amount of digits it has."<<endl;
		   
   			 changeColor(15);
			int i,j,k,sum,temp;
			for(i=1; i<=8;i++){
				cout<<"\n\n\t\tThe Armstrong Number of "<<i<<" digit are: ";
				for(j=power(10,i-1); j<power(10,i);j++){
					sum=0;
					temp=j;
					while(temp!=0){
						k=temp%10;
						sum+=power(k,i);
						temp=temp/10;
					}
					if(sum==j){
						cout<<j<<" ";
					}
				}
			}
			cout<<endl;
		}
	private:
		pythagorean(){
			changeColor(10);
				cout<<"\n\n\t\t----------------------------------Pythagoren Triple----------------------------------"<<endl;
					cout<<"\n\n\t\tTriple of positive integer can costruct a right triange with \n"
					"\t\tsegments of length corresponding to triple.\n"
					"\n\t\tFor example <3,4,5> <5,12,,13> <6,8,10>"<<endl;
					changeColor(12);
					cout<<"\n\n\t\tNOTICE: Input 888 to Return to the Main Menu."<<endl;
					changeColor(15);
			while(1){
				 int initial,final,a,b,c,counter=0,no=0;
				    cout<<"\n\n\t\tPlease inpute the start Number : ";
				    cin>>initial;
				     if(initial==888)break;
				   cout<<"\n\n\t\tPlease inpute the end Number : ";
				   cin>>final;
				   if(final==888)break;
				   cout<<"\n\t\t";
				   for(a=initial;a<=final;a++){
				        for(b=a+1;b<=final;b++){
				            for(c=b+1;c<=final;c++){
				                if(c*c==a*a+b*b){
				                	if(a<10 && b<10 && c<10){
				                		counter++;
				                		cout<<" "<<a<<"   "<<b<<"   "<<c<<"\t";
									}
									else if(a<10 && b<10 && c>=10){
				                		counter++;
				                		cout<<" "<<a<<"   "<<b<<"  "<<c<<"\t";
									}
									else if(a<10 && b>=10 && c>=10){
										counter++;
										cout<<" "<<a<<"  "<<b<<"  "<<c<<"\t";
									}
									else if(a>=10 && b>=10 && c==100){
									counter++;
				                	cout<<a<<"  "<<b<<" "<<c<<"\t";
									}
									else{
										counter++;
										cout<<a<<"  "<<b<<"  "<<c<<"\t";
									}
				                	
				                    no++;
				                    if(counter==4){
				                    	cout<<"\n\t\t";
				                    	counter=0;
									}
				                }
				            }
				        }
				    }
				    changeColor(10);
					cout<<"\n\n\t\t\tThere are "<<no<<" Pythagorean Triple between "<<initial<<" and "<<final<<"."<<endl;
					changeColor(15);
				}
	}
	private:
		perfectNum(){
			changeColor(10);
			cout<<"\n\t\t------------------Perfect Number------------------"<<endl;
		    cout<<"\n";
		    cout<<"\n\t\tA perfect number is a positive integer that is equal to"
			    "\n\t\tthe sum of all its proper divisors. For example, 6, whose"
			   "\n\t\tproper divisors are 1, 2, and 3, and indeed 6 = 1 + 2 + 3."<<endl;
		    changeColor(12);
    
			int startNum,EndNum,count=0;
			cout<<"\n\t\tNotice: Input 888 to return to the Main Menu."<<endl;
			changeColor(15);
			do{
				cout<<"\n\t\tPlease input the start number: ";
				
				while(!(cin>>startNum) || (startNum<=0))
				{
				cout<<"\n\t\tInvalid. Please input the start number again:";
				cin.clear();
				cin.sync();
				}
				if(startNum==888)break;
				cout<<"\n\t\tPlease input the End number: "; 
				while(!(cin>>EndNum) || (EndNum<=startNum))
				{
					if(EndNum<=startNum){
						cout<<"\n\t\tInvalid. The end Number cannot less than the start Number.";
						cout<<"\n\t\tPlease input the end Number again";
					}else{
							cout<<"\n\t\tPlease input the start Number again";
					}
					cin.clear();			
				}
				if(EndNum==888)break;
					int i,j,k,sum,factor[1000],n,count=0;
					
					for(i=startNum;i<=EndNum;i++)
					{
						sum=0;
						n=0;
						for(j=1;j<i;j++)
						{
							if(i%j==0){
								factor[n]=j;
								n++;
								sum+=j;
							}
						}
						if(i==sum)
						{
						count++;
						cout<<"\n\n\t\t"<<i<<" is a perfect number:";
						cout<<i<<"=";
							for(k=0;k<n-1;k++){
								cout<<factor[k]<<"+";
							}
							cout<<factor[n-1];
						}
					}
				changeColor(10);
				cout<<"\n\n\t\tThere are "<<count<<" perfect Number berween "<<startNum<<" to "<<EndNum<<"."<<endl;
				changeColor(15);
			}	while(startNum!=888);
			showmenu();
	}
	private:
		gcllcm(){
			changeColor(10);
			 cout<<"\n\t\t------------------Lowest Common Multiple------------------"<<endl;
		    cout<<"\n";
		    cout<<"\n\t\the smallest common multiple of 2 or more numbers."<<endl;
		    cout<<"\n";
		    cout<<"\n\t\t------------------Greatest Common Divisor------------------"<<endl;
		    cout<<"\n";
		    cout<<"\n\t\tThe largest integer that is an exact divisor of each of 2 or more integers."<<endl;
		    cout<<"\n";
		    changeColor(12);
		    cout<<"\n\t\tNOTICE: Input 888 to return to the menu."<<endl;
		    changeColor(15);
			int a, b, x, y, t, gcd, lcm;
			while(1){
			
			 cout<<"\n\n\t\tPlease input the first number: ";
			 cin>>x;
			 if(x==888)break;
			 cout<<"\n\n\t\tPlease input the first number: ";
			 cin>>y;
			 if(y==888)break;
			  a = x;
			  b = y;
			  while (b != 0) {
			    t = b;
			    b = a % b;
			    a = t;
			  }
			  gcd = a;
			  lcm = (x*y)/gcd;
			  changeColor(10);
			  cout<<"\n\n\t\tThe lowest Common Multiple of "<<x<<" and "<<y<<" is "<<lcm<<endl;
			   cout<<"\n\n\t\tThe Greatest Common Divisor of "<<x<<" and "<<y<<" is "<<gcd;
			changeColor(15);
			}

		}
	private:
		friendlyNUM(){
		int start,end, friendlyNumCount=0;
changeColor(10);
    cout<<"\n\t\t------------------Friendly Number------------------"<<endl;
   
    cout<<"\n\t\tThere are 2 integers a and b. If the sum of b's divisors"
	    "\n\t\tequals to a, and the sum of a's divisors equals to b, we call"
	    "\n\t\tthese 2 integers \"Friendly Numbers\"."<<endl;
    
    cout<<"\n\t\tE.g:"<<endl;
    cout<<"\n\t\t284 and 220"<<endl;
    cout<<"\n\t\t284's divisors: 1+2+4+71+142 = 220"<<endl;
    cout<<"\n\t\t220's divisors: 1+2+4+5+10+11+20+22+44+55+110 = 284"<<endl;
    cout<<"\n\t\tSo 9 and 4 are not Friendly numbers."<<endl;
    cout<<"\n";
    changeColor(12);
    cout<<"\n\t\tNOTICE: Input 888 to return to the menu."<<endl;
    changeColor(15);
    
	while (start != 888)
    {    
	    cout<<"\n\t\tPlease input the start number: ";
	    cin>>start;
	    
   		if (start != 888)
		{
		    
		    cout<<"\n\t\tPlease input the end number: ";
		    cin>>end;
		    cout<<"\n";
		    
		    for(int i=start; i<end; i++)
			{
				for(int j=i+1; j<=end; j++)
				{
					if (CheckFriendlyNum(i, j))
					{
						friendlyNumCount++;
						changeColor(10);
						cout<<"\t\t"<<i<<" & "<<j<<" are friendly numbers."<<endl;
						changeColor(15);
						cout<<"\n\t\t"<<j<<"'s divisor: ";
						Divisors(j, i);
						cout<<"="<<i<<endl;
						cout<<"\n\t\t"<<i<<"'s divisor: ";
						Divisors(i, j);
						cout<<"="<<j<<endl;
						cout<<"\n\n";
						changeColor(10);
						cout<<"\n\t\tThere are "<<friendlyNumCount<<" pairs of Friendly Numbers between "<<start<<" and "<<end<<"."<<endl; 
						changeColor(15);
					} 
				}
		    }
		    friendlyNumCount=0;
		} 
    }

}

	private:
		NarcissisticNum(){
			changeColor(10);
			 cout<<"\n\t\t------------------Narcissistic Number------------------"<<endl;
		    cout<<"\n";
		    cout<<"\n\t\tIf a positive 3-digits integer is equal to the sum of its"
		    "\n\t\tevery figure's 3th power, we call the number Narcissistic Number.\n"<<endl;
		    
		    changeColor(15);
		  
			cout<<"\n\t\tThe Narcissistic numbers are: ";
	
			int hun,ten,one,i;
			for(i=100;i<=999;i++){
				hun=i/100;;
				ten=(i%100)/10;
				one=i%10;
				
				if(pow(hun,3)+pow(ten,3)+pow(one,3)==i){
					cout<<i<<" ";
				}
			}
			
		}
	private:
		mantissa(){
			changeColor(10);
			 cout<<"\n\t\t------------------Mantissa Problem------------------"<<endl;
		    cout<<"\n";
		    cout<<"\n\t\tFind the last n digits of Base to the Exponent power."
		   "\n\t\tFor example, find the last 3 digits of 13^16."<<endl;
		    cout<<"\n";
		    changeColor(12);
		    cout<<"\t\tNOTICE: Input 888 to return to the menu."<<endl;
    		changeColor(15);
				int n,base,exp;
				do
				{
				
				cout<<"\n\t\tPlease input a positive integer for the Base: ";
				cin>>base;
					while((!base) || (base<=0))
					{
						cin.clear();
						cin.sync();
						cout<<"\n\t\tInvalid. Please input a positive integer for the Base: ";
					}
					if(base==888)break;
					cin.ignore(1000,'\n');
					cout<<"\n\t\tPlease input a positive integer for the Exponent:";
					while(!(cin>>exp)|| (exp<=0)){
							cin.clear();
						cin.sync();
						cout<<"\n\t\tInvalid. Please input a positive integer for the Exponent: ";
					}
					cout<<"\n\t\tPlease input a positive integer for the Digits(1-6): ";
					cin.ignore(1000,'\n');
					
						while(!(cin>>n)|| (n<1)|| (n>6)){
						cin.clear();
						cin.sync();
						cout<<"\n\t\tInvalid. Please input a positive integer for the Digits(1-6): ";
					}
					cin.ignore(1000,'\n');
					
					cout<<"\n";
					
					int i,pro=1;
					for(i=0;i<exp;i++)
					{
						pro*=base;
						pro=pro%(power(10,n));
					}
					changeColor(10);
					cout<<"\n\t\tThe last "<<n<<" digit of "<<base<<" to the "<<exp<<" power is "<<pro<<endl;
					changeColor(15);
				}while(1);
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
	private:
		void Emain()
		{
			changeColor(15);getchar();
					cout<<"\n\n\t\tPress Q to Exit the program, others return to the main menu"<<endl;
			char a;
				a=getchar();
						if(a=='q' || a=='Q'){
							cin.clear();
							cin.sync();		
							Exit();
							exit(EXIT_FAILURE);
						}else{
							Myclass::showmenu();
						}
		}				
};
long int  Myclass::power(int num, int exp){
		int i;
				long int product=1;
				for(i=0;i<exp;i++){
					product=product*num;
				}
				return product;
}
int main(){
	Myclass obj;
	obj.showmenu();
return 0;
}

