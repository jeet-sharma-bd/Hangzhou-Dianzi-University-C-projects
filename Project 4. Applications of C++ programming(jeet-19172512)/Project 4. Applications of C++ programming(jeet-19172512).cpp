/*project: 4th project=> Applications
   author: jeet sharma-19172512
	date: 19-10-2020*/
	
#include <iostream>
#include<string.h>
#include <windows.h> 
using namespace std;
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}
int num;
class Myclass{
	
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
							case 1:Chicken();break;
							case 2:BooksDevide();break;
							case 3:car();break;
							case 4:TimeTable();break;
							case 5:chessboard();break;
							case 6:factorization();break;
							case 7:charecterAnalysis();break;
							default:
								changeColor(12);
								cout<<"\t\tInvalid input!!!"<<endl;
								changeColor(15);
						}
				}
					
			cin.sync();
			if(num!=8){
				cout<<"\n\n\t\tPress any key to return to the menu"<<endl;
					if(getchar() != '\0'){
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
		    cout<<"\n\n\t\t************************ I LOVE C++ ************************"<<endl;
		    cout<<"\n\n";
		    cout<<"\t\t************************Applications*************************"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
			cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          1-Hundred Dollars & Hundred Chickens             $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          2-Five Books to Three Children                   $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          3-Criminal's Car Plate                           $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          4-Times Table 9x9                                $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          5-Chess Board                                    $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          6-Factorization                                  $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          7-Charecter analyssis                            $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$          8-Exit                                           $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t********************** Copyright@Jeet ***********************"<<endl;
		menuController();
		}
	private:
		Chicken()
		{
				changeColor(10);
					cout<<"\n\n\t\tZhang qiujian, an ancient Chinese mathmetician, once put forwar\n\n"
					"\n\t\tthe famous problem of \"a hundred dollars buys a hundread chickens\"\n"
					"\n\t\tA rooster's price is 5 dollars; a hen's price is 3 dollars;\n"
					"\n\n\t\tthree chick's price is one dollar. Question: To buy 100 chickens\n"
					"\n\n\t\twith 100 dollars, how many are each of the roosters, hens and chickens?"<<endl;
						changeColor(15);
					cout<<"\n\n\n"<<endl;
				int ros, hen, chick,n=1;
					for (int ros = 0; ros <= 20; ros++) {
				        for (int hen = 0; hen <= 33; hen++) {
				            for (int chick = 0; chick <= 99; chick++) {
				                if (chick == 0) {
				                	   
				                    if ((ros * 5 + hen * 3) == 100 && (ros + hen) == 100)
				                        {
				                        cout <<"\t\tSolution "<<n++<<": "<< " Rooster " <<ros << "; Hen " << hen << "; Chick " << chick<<" ."<< endl;	
										}
								} else if (chick % 3 == 0) {
				                    if ((ros * 5 + hen * 3 + chick / 3) == 100 && (ros + hen + chick) == 100)
				                       {
				                        cout <<"\t\tSolution "<<n++<<": "<< " Rooster " <<ros << "; Hen " << hen << "; Chick " << chick<<" ."<< endl;	
										}
				               	
							    }
				             
				            }
				        }
				    }
				    Emain();
					
		}
	private:
		factorization()
		{
			cout<<"\n\n\t\tInput 888 to end Prime Factorization."<<endl;
		
		    	
				 int number, i, primeCheck,temp, j, flag = 1;
				 while(1){
						cout<<"\n\n\t\tPlease input a positive integer:";
					cin>>number;
					temp=number;
					changeColor(10);
						  primeCheck = (number / 2) + 1;
						 cout<<"\n\t\t"<<number<<" = ";
						  for ( i = 2; i < number; i++ )
						  {	
						    if ((number % i))
						    {
						      flag = 1;
						    }
						    else
						    {
						      flag = 0;
						      break;
					    }
					  }
					  if (flag == 1)
					    cout<<"1 x "<<number;
					  else
					  {
					    for ( i = 2; i <= primeCheck; i++ )
					    {
					      flag = 1;
					      for ( j = 2; j < i; j++ )
					      {
					        if ( (i % j) == 0 )
					        {
					          flag = 0;
					          break;
					        }
					      }
					      if ( flag )
					      {
					        while ( !(number % i) || (number == i) )
					        {
					          cout<<i<<" ";
					          number /= i;
					          if ( number > 1 )
					            cout<<"x ";
					        }
					      }
					     
					    }					   
				}				
				 if(temp==888){break;}
				 
				  changeColor(15);
		}
			Emain();
		}
	private:
		car()
		{
			changeColor(10);
			cout<<"\n\n\t\tA car his a man and ran away. no one remembers the\n\t\tcar plate number, only some charecterstics of it.\n\n"
			"\t\tA said: the first two Numbers of the lincence are the same."
			"\n\n\t\tB said: the last teo Numbers of the linncence are the same,\n\t\tbut diffrent from the first two."
			"\n\n\t\tC is a mathmatician, and he said : the four-digit car number is exactly the square of an integer."
			"\n\n\t\tWhat is the car plate number ?"<<endl;
			changeColor(15);
			 int i,j,k,tmp;
		    for(i=0;i<=9;i++){
		    	for(j=0;j<=9;j++){
		    		if(i!=j){
		    			k=1000*i +100*i +10*j+j;
		    				for(tmp=31;tmp<=99;tmp++){
		    					if(tmp*tmp==k){
		    						cout<<"\n\n\n\t\tThe criminal;s Car Plate is: "<<k<<endl;
								}
							}
					}
				}
			}
		  Emain();
		}

	private:
		chessboard()
		{
			char a=219;
			cout<<"\n\n\t\t--------Print a Chess Board--------\n\n"<<endl;
			cout<<"\t\t";
		 	for(int i=0;i<17;i++){
		 		for(int j=1;j<=17;j++){
		 			if((i+j)%2 == 0){
		 					cout<<"  ";
					 }else{
					 	printf("%c%c",a,a);
					 }
			}
			cout<<"\n\t\t";
				 }
				 Emain();
		}
	private:
		TimeTable()
		{	
			cout<<"\n\n";
			changeColor(10);
			for(int i=1;i<10;i++){
				cout<<"\t\t";
		 		for(int j=1;j<=i;j++){
		 		cout<<j<<"x"<<i<<"="<<i*j<<"\t";
			}
			cout<<endl;
		 }
		 Emain();
		}
	private:
		charecterAnalysis()
		{
			changeColor(10);
			cout<<"\n\n\t\tString ending in 8 will return to the Menu."<<endl;
			changeColor(15);
			char str[1000];
		      int i,letter, digit, space, other;
		      getchar();
		    while(1){
		    	cout<<"\n\n\t\tPlease input a string = ";
		    	gets(str);
		      letter = digit = space = other = 0;
		      i = 0;      
		      if(str[strlen(str)-1]=='8')
		      {break;}
		      else{
		    	 while (str[i] != '\0' )
			          {
			              char ch= str[i];
			              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
			              letter++;
			              else if (ch>= '0' && ch<= '9')
			                       digit++;
			              else if (ch == ' ' || ch =='\n' || ch == '\t')
			                       space++;
			              else other++;
			                       i++;
			                
			      }             
			 cout<<"\n\t\tLetters: "<<letter<<"\n\n\t\tNumbers: "<<digit<<"\n\n\t\tSpaces : "<<space<<"\n\n\t\tOthers : "<<other<<endl;
			cin.clear();
			cin.sync();
			}  
		    
		 }
	Myclass::showmenu();
	}
	private:
		BooksDevide(){
			changeColor(10);
			cout<<"\n\n\n\t\tThere are Five  books  to lend  to A, B and  C.\n"
				"\n\t\tIf everyone could borrow onlly  one book,\n"
				"\n\t\tHow many diffrennt ways could they borrow the boooks? \n\n"<<endl;
				changeColor(15);
			int c=0;
		     for (int i = 1; i <= 5; i++) {
		             for (int j = 1; j <=5;j++) {
					 	 for (int k = 1; k <= 5; k++) {
					 	 			if((i!=j) && (i!=k)&& (j!=k)){
					 	 				c++;
					 	 				 if(c<=9){
					 	 				 	cout<<"\t\tSolution  "<<c<<": "<<i<<","<<j<<","<<k;
										   }else{
										   	cout<<"\t\tSolution "<<c<<": "<<i<<","<<j<<","<<k;
										   }
					 	 				 if(c%3==0)cout<<endl;
									  }
						  }
			
					 }
		                
		        }
        Emain();
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

int main(){
	Myclass obj;
	obj.showmenu();
	
return 0;
}


