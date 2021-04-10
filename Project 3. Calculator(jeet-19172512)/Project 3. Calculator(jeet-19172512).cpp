/*calculator made by jeet sharma-19172512
	Project : 3
	date	: 07/10/2020
	copyright: jeet sharma*/
	
#include<iostream>
#include<ctime>
#include<cstdlib>
#include <windows.h> 
 
using namespace std; 
 
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
} 
void exit();
void showmenu();
void add();
void sub();
void mul();
void div();
void mixed();
void right(int x);
void wrong();
void Emain();
int count=0,n=1;
int main(){
	int num;
changeColor(15);
	while(1){
				showmenu();
			cout<<"\n\n\t\tPlease choose menu number= ";
			cin>> num ;
				if(num==6){
						exit();
				}else{
					changeColor(10);
					cout<<"\n\t\t---------------Input 888 to end the practice---------------"<<endl;
					changeColor(7);
					switch(num)
						{
							case 1:
								add();
								break;
							case 2:
								sub();
								break;
							case 3:
								mul();
								break;
								case 4:
									div();
									break;
								case 5: mixed();break;
							default:
								changeColor(10);
								cout<<"\t\tInvalid input!!!"<<endl;
								changeColor(1);
						}
				}
					
		cin.sync();
		if(num!=8){
			cout<<"\t\t\n\n\nPress any key to return to the menu"<<endl;
			getchar();
		}
	}
	
	return 0;
}
void showmenu(){
	changeColor(15);
    cout<<"\n\n\t\t*********************** Calculator **************************"<<endl;
    cout<<"\n\n";
    
    cout<<"\t\t************************ Menu List **************************"<<endl;
    cout<<"\t\t*                                                           *"<<endl;
    cout<<"\t\t*          1.Addition               2.Substraction          *"<<endl;
    cout<<"\t\t*                                                           *"<<endl;
    cout<<"\t\t*          3.Multiplication         4.Devided               *"<<endl;
    cout<<"\t\t*                                                           *"<<endl;
    cout<<"\t\t*          5.Mixer(+,-,*,/)         6.Exit                  *"<<endl;
    cout<<"\t\t*                                                           *"<<endl;
    cout<<"\t\t********************** Copyright@Jeet ***********************"<<endl;
}

void add(){
changeColor(15);
	int num1,num2,result=0;

	
	while(1){
			srand(time(0));
			num1=rand()%10;
			num2=rand()%10;
	
		cout<<"\n\t\t"<<num1<<"+"<<num2<<"= ";
		cin.clear();
		cin.sync();
		cin>>result;
	
		if(result==(num1+num2)){
			
			right(++count);
		}else if(result==888){
			cout<<"\n\t\tEnd practice"<<endl;
			break;
		}else{
			wrong();
		
			while(!0){
					cin.clear();
					cin.sync();
				cout<<"\n\t\t"<<num1<<"+"<<num2<<"= ";
				cin>>result;
				if(result==(num1+num2)){
					right(++count);
					break;
				}else if(result==888){
					cout<<"\n\t\tEnd practice"<<endl;
					break;
					}
				else{
						wrong();
					}
			}
		
		}
		if(result==888)break;
	}
Emain();
}

void sub(){
	
	int num1,num2,result=0,temp=0;

	changeColor(15);
	while(1){
			srand(time(0));
			num1=rand()%10;
			num2=rand()%10;
			if(num1<num2){
				temp=num2;
				num2=num1;
				num1=temp;
			}
			cin.clear();
			cin.sync();
			
		cout<<"\n\t\t"<<num1<<"-"<<num2<<"= ";
		cin>>result;
	
		if(result==(num1-num2)){
			right(++count);
		}else if(result==888){
			cout<<"\n\t\tEnd practice"<<endl;
			break;
		}else{
			wrong();
			
			while(!0){
					cin.clear();
					cin.sync();
				cout<<"\n\t\t"<<num1<<"-"<<num2<<"= ";
				cin>>result;
				if(result==(num1-num2)){
					right(++count);
					break;
				}else if(result==888){
					cout<<"\n\t\tEnd practice"<<endl;
					break;
					}
				else{
						wrong();
					}
			}
		
		}
		if(result==888)break;
	}
	
	Emain();
}

void mul(){
	int num1,num2,result=0;
changeColor(15);
	
	while(1){
			srand(time(0));
			num1=rand()%10;
			num2=rand()%10;
	
			cin.clear();
			cin.sync();
		cout<<"\n\t\t"<<num1<<"*"<<num2<<"= ";
		cin>>result;
	
		if(result==(num1*num2)){
			right(++count);
		}else if(result==888){
			cout<<"\n\t\tEnd practice"<<endl;
			break;
		}else{
			wrong();
			
			while(!0){
					cin.clear();
					cin.sync();
				cout<<"\n\t\t"<<num1<<"*"<<num2<<"= ";
				cin>>result;
				if(result==(num1*num2)){
					right(++count);
					break;
				}else if(result==888){
					cout<<"\n\t\tEnd practice"<<endl;
					break;
					}
				else{
						wrong();
					}
			}
		
		}
		if(result==888)break;
	}
	
	Emain();
}

void div(){
	int num1,num2,result,temp=0;
changeColor(15);
	
	while(1){
			srand(time(0));
			num1=rand()%10+1;
			num2=rand()%10;
			if(num1%2 !=0 || num2%2 !=0){
				num1*=num2;
			}else if(num1<num2){
				temp=num2;
				num2=num1;
				num1=temp;
			}
		cin.clear();
		cin.sync();
		cout<<"\n\t\t"<<num1<<"/"<<num2<<"= ";
		cin>>result;
	
		if(result==(num1/num2)){
			right(++count);
		}else if(result==888){
			cout<<"\n\t\tEnd practice"<<endl;
			break;
		}else{
			wrong();
			
			while(!0){
				cin.clear();
		cin.sync();
				cout<<"\n\t\t"<<num1<<"/"<<num2<<"= ";
				cin>>result;
				if(result==(num1/num2)){
				right(++count);
					break;
				}else if(result==888){
					cout<<"\n\t\tEnd practice"<<endl;
					break;
					}
				else{
						wrong();
					}
			}
		
		}
		if(result==888)break;
	}
	
	Emain();
}

void mixed(){
changeColor(15);
		int num1,num2,result,temp=0;

	while(1)
	{
	
			srand(time(0));
			num1=rand()%10;
			num2=rand()%10;
			
				switch(n)
				{
					case 1:
					{
						cin.clear();
						cin.sync();
						cout<<"\n\t\t"<<num1<<"+"<<num2<<"= ";
						cin>>result;
					
						if(result==(num1+num2)){
							right(++count);
						}else if(result==888){
							cout<<"\n\t\tEnd practice"<<endl;
							break;
						}else{
							wrong();
							
							while(!0){
									cin.clear();
						cin.sync();
								cout<<"\n\t\t"<<num1<<"+"<<num2<<"= ";
								cin>>result;
								if(result==(num1+num2)){
									right(++count);
									break;
								}else if(result==888){
									cout<<"\n\t\tEnd practice"<<endl;
									break;
									}
								else{
										wrong();
									}
							}
						
						}
						if(result==888)break;
						
							
				}n++;
				break;
				
					case 2:
					{
							cin.clear();
						cin.sync();
						if(num1<num2){
							temp=num2;
							num2=num1;
							num1=temp;
						}
						cout<<"\n\t\t"<<num1<<"-"<<num2<<"= ";
								cin>>result;
							
								if(result==(num1-num2)){
									right(++count);
								}else if(result==888){
									cout<<"\n\t\tEnd practice"<<endl;
									break;
								}else{
									wrong();
									
									while(!0){
											cin.clear();
						cin.sync();
										cout<<"\n\t\t"<<num1<<"-"<<num2<<"= ";
										cin>>result;
										if(result==(num1-num2)){
											right(++count);
											break;
										}else if(result==888){
											cout<<"\n\t\tEnd practice"<<endl;
											break;
											}
										else{
												wrong();
											}
									}
								
								}
								if(result==888)break;
					}
						n++;
						break;
					
					case 3:
					{
							cin.clear();
						cin.sync();
					cout<<"\n\t\t"<<num1<<"*"<<num2<<"= ";
								cin>>result;
							
								if(result==(num1*num2)){
									right(++count);
								}else if(result==888){
									cout<<"\n\t\tEnd practice"<<endl;
									break;
								}else{
									wrong();
									
									while(!0){
											cin.clear();
						cin.sync();
										cout<<"\n\t\t"<<num1<<"*"<<num2<<"= ";
										cin>>result;
										if(result==(num1*num2)){
											right(++count);
											break;
										}else if(result==888){
											cout<<"\n\t\tEnd practice"<<endl;
											break;
											}
										else{
												wrong();
											}
									}
								
								}
								if(result==888)break;
					}
					n++;
						break;
				
					case 4:
					{
					if(num1%2 !=0 || num2%2 !=0){
								num1*=num2;
							}else if(num1<num2){
								temp=num2;
								num2=num1;
								num1=temp;
							}
								cin.clear();
						cin.sync();
					
						cout<<"\n\t\t"<<num1<<"/"<<num2<<"= ";
						cin>>result;
					
						if(result==(num1/num2)){
							right(++count);
						}else if(result==888){
							cout<<"\n\t\tEnd practice"<<endl;
							break;
						}else{
							wrong();
							
							while(!0){
									cin.clear();
						cin.sync();
								cout<<"\n\t\t"<<num1<<"/"<<num2<<"= ";
								cin>>result;
								if(result==(num1/num2)){
									right(++count);
									break;
								}else if(result==888){
									cout<<"\n\t\tEnd practice"<<endl;
									break;
									}
								else{
										wrong();
									}
							}
						
						}
						if(result==888)break;
					}n=1;break;
					
			}
			if(result==888)break;
			
		
		}
						
					Emain();
	
}
void Emain()
{
		cout<<"\n\t\tPress Q to Exit the program others return to the main menu"<<endl;

			getchar();
			if(	getchar()!=10){
				cin.clear();
				cin.sync();		
				exit();
				exit(EXIT_FAILURE);
			}else
				main();
}
void right(int x){
	changeColor(10);
	switch(x){
		case 1:cout<<"\t\t\t====RIGHT"<<endl;break;
		case 2:cout<<"\t\t\t====GOOD JOB"<<endl;break;
		case 3:cout<<"\t\t\t====WELL DONE"<<endl;break;
		case 4:cout<<"\t\t\t====GREAT"<<endl;break;
		case 5:cout<<"\t\t\t====EXCELENT!!!"<<endl;break;
		case 6:cout<<"\t\t\t====PERFECT!!!"<<endl;count=0;break;	
	}
	changeColor(15);
}
void wrong(){
		changeColor(12);
	cout<<"\t\t\t====WRONG. Try again"<<endl;
	changeColor(15);
}
void exit(){
	changeColor(10);
	
	cout<<"\t\t\t /\\/\\ "<<endl;
	cout<<"\t\t\t_\\   \\_ "<<endl;
	cout<<"\t\t\t\\      )  _,    ,,_ "<<endl;
	cout<<"\t\t\t_|    (  ( 9`> < 6 ) _ __ "<<endl;
	cout<<"\t\t\t\\_     \\__) (__,) (_ )' / "<<endl;
	cout<<"\t\t\t  \\_    _)   \\-/  / `-,(_ "<<endl;
	cout<<"\t\t\t    `--'Z    /`\\_ `,___,/ "<<endl;
	cout<<"\t\t\t       /(__,/    ))/ "<<endl;
	cout<<"\t\t\t      /  \\((_    /`/` "<<endl;
	cout<<"\t\t\t     /   |\\`\\ "<<endl;
	cout<<"\t\t\t     `-^-' "<<endl;
	cout<<"\t\t\t=======================================================ByeBye"<<endl;
	changeColor(15);
exit(EXIT_FAILURE);

}
