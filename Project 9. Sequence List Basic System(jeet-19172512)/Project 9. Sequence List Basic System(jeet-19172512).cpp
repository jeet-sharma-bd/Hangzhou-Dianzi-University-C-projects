/*project:9th project=> Sequence List
   author: jeet sharma-19172512
	date: 27-11-2020*/
	
#include<iostream>
#include<vector> 
#include "sequencial.h"
#include<iomanip>
#include<sstream>
#include<string>
#include<fstream>
#include <windows.h>
using namespace std;

struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
Node *newNode(int data) 
{ 
    struct Node* new_node = new Node; 
    new_node->data  = data; 
    new_node->next = NULL; 
    return new_node; 
} 
struct Node *partition(struct Node *head, int x) 
{ 
    struct Node *tail = head; 
    Node *curr = head; 
    while (curr != NULL) 
    { 
        struct Node *next = curr->next; 
        if (curr->data < x) 
        { 
            curr->next = head; 
            head = curr; 
        } 
        else 
        { 
            tail->next = curr; 
            tail = curr; 
        } 
        curr = next; 
    } 
    tail->next = NULL; 
    return head; 
} 

void printList(struct Node *head) 
{ int c=0;
    struct Node *temp = head; 
    cout<<"\t\t";
    while (temp != NULL) 
    {  
	c++;
	cout<<temp->data<<"\t"; 
        temp = temp->next; 
    	if(c==10){
    		c=0;
    		cout<<endl<<"\t\t";
		}
       
    } 
} 

void partition(){
	 srand(time(0));
	
struct Node* head=newNode(rand()%60);		
			head->next=newNode(rand()%60);
			head->next->next=newNode(rand()%60);
			head->next->next->next=newNode(rand()%60);
			head->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);	
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
			head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next=newNode(rand()%60);
 
   changeColor(10);
  cout<<"\n\t\t\tThe sequence Before partition :"<<endl;
  changeColor(15);
   printList(head);
  int x ;
  cout<<"\n\t\tPlease input the partition value : ";
  cin>>x; 

   changeColor(10);
  cout<<"\n\t\t\tThe sequence After partition : "<<endl;
   changeColor(15);
    head = partition(head, x); 
    printList(head); 
}
void showmenu()
		{
			cout<<"\n\n\n"<<endl;
		    cout<<"\n\n\t\t*********************** I LOVE C++ *************************"<<endl;
		    cout<<"\n\n";
		    cout<<"\t\t************************Sequence List************************"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
			cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        1.Create List            2.Show List               $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        3.Clear List             4.Sort List               $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        5.Search by Location     6.Search by Value         $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        7.Insert by Location     8.Delete by Location      $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        9.Delete by Value        10.Delete Duplicate       $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        11.Reverse List          12.Partition List         $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        13.Import form File      14.Export to File         $"<<endl;
		    cout<<"\t\t$                                                           $"<<endl;
		    cout<<"\t\t$        15.Max Platform          16.Exit                   $"<<endl;
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
	Sequencial S;

			while(1)
			{
				showmenu();
				cin.sync();
				cin.clear();
				int num;
				cout<<"\n\n\t\tPlease choose menu number= ";
				cin>> num ;
					if(num==16){
							Exit();					
					}else{
						switch(num)
							{							
								case 1:S.createSequence(); break;
								case 2:S.showSequence();break;
								case 3:S.clear();returnMenu();break;
								case 4:	S.Sortlist();break;
							 	case 5:S.searchByLocation();break;
								case 6:	S.searchByValue();break;
								case 7:	S.InsertByLocation();break;
								case 8:S.deleteByLocation();break;
								case 9:S.deleteByValue();break;
								case 10:S.removeDuplicate();break;
							 	case 11:S.Reverse();break;
							 	case 12:partition();returnMenu();break;
								case 13:S.importData();returnMenu();break;
								case 14:S.ExpotTofile();returnMenu();break;
								case 15:S.maxPlatfor();break;
								default:
									changeColor(12);cout<<"\n\t\tInvalid input!!!"<<endl;changeColor(15);
									returnMenu();
							}
					}
			}	
}

