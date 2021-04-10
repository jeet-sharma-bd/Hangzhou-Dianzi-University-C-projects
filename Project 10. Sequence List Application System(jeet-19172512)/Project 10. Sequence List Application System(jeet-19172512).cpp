/*project:10th project=> Sequence List Application System
   author: jeet sharma-19172512
	date: 27-11-2020*/
	
#include<iostream>
#include<vector> 
#include "header.h"
#include<iomanip>
#include<sstream>
#include<string>
#include<fstream>


using namespace std;

void showmenu()
		{
			cout<<"\n\n\n"<<endl;
		    cout<<"\n\n\t\t*********************** I LOVE C++ ************************"<<endl;
		    cout<<"\n\n";
		    cout<<"\t\t**************Sequence List Application System***************"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
			cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        1.Intersection            2.Subtraction            $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        3.Union                   4.Merge                  $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        5.Subset & Supset         6.Sum of A               $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        7.Order List Insertion    8.Interval Delete        $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        9.Joesphus Problem        10.Exit                  $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t********************** Copyright@Jeet ***********************"<<endl;
			
		}
		
		
		
void Exit(){
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

int main(){
	SetOperation S;
			while(1)
			{
				showmenu();
				cin.sync();
				cin.clear();
				int num;
				cout<<"\n\n\t\tPlease choose menu number= ";
				cin>> num ;
					if(num==10){
							Exit();					
					}else{
						switch(num)
							{							
								case 1:S.Intersection(); break;
								case 2: S.Subtraction();break;								
								case 3: S.unionset();break;
								case 4: S.marge();break;
								case 5: S.sup();break;
								case 6: S.SumofA();break;
								case 7:S.Order();break;
								case 8:S.IntervalDelete();break;
								case 9:S.joshepe();break;
								default:
									cout<<"\n\t\tInvalid input!!!"<<endl;	
							}
					}
			}	
}



