/*project: 2nd project=> mathlibs game
   author: jeet sharma-19172512
	date: 6-10-2020*/
	
#include <iostream>
#include<string.h>
#include <windows.h> 
using namespace std;
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}

class Myclass{
	public:
		void Exit();
		void date();
		void tarzan();
		void chinese();
	public:
		void menuController()
		{ 
			int num;
			cout<<"\n\n\t\tplease choose menu number= ";
			cin>> num ;
			
			if(num==4){
					Exit();
			}
			switch(num)
				{
					case 1:chinese();break;
					case 2:tarzan();break;
						case 3:date();break;
					default:
						changeColor(12);
						cout<<"\n\nInvalid input!!!"<<endl;
							cin.clear();
							cin.sync();
							changeColor(15);
							break;
				}
				cin.sync();
				if(num!=4){
					cout<<"\n\n\n\t\tPress any key to return to the menu"<<endl;
					if(getchar() != NULL){
							showmenu();
					}
				}
			
		}

	public:
		void showmenu()
		{
				    cout<<"\n\n\t\t*********************** Story Maker **************************"<<endl;
				    cout<<"\n\n";
				    
				    cout<<"\t\t************************Mad Lib Game*************************"<<endl;
				    cout<<"\t\t$                                                           $"<<endl;
				    cout<<"\t\t$              1.Chinese Dinner       2.Tarzan              $"<<endl;
				    cout<<"\t\t$                                                           $"<<endl;
				    cout<<"\t\t$              3.Love Date            4.Exit                $"<<endl;
				    cout<<"\t\t$                                                           $"<<endl;
				    cout<<"\t\t********************** Copyright@Jeet ***********************"<<endl;
					Myclass::menuController();
		}
	public:
		void Emain()
		{
			getchar();
			changeColor(15);
					cout<<"\n\n\t\tPress Q to Exit the program, others return to the main menu"<<endl;
						char a=getchar();
						if(a=='q' || a =='Q'){
							cin.clear();
							cin.sync();		
							exit(EXIT_FAILURE);
						}else{
							Myclass::showmenu();
						}
					
		}
			
					
};
	
int main(){
Myclass main;

main.showmenu();
	
return 0;
}
void Myclass::Exit(){
	changeColor(10);
	cout<<"\n\n"<<endl;
	cout<<"\t\t\t /\\/\\ "<<endl;
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
	cout<<"\t\t=================================================================Thank You,ByeBye "<<endl;
changeColor(15);
exit(EXIT_FAILURE);	
}
void Myclass::date(){
		cout<<"\n\t\t=====================Love Date====================="<<endl;
		string bname,gname,ad1,noun,number,restaurent,food,drink,vb,body,car,gift,candy,flower,place;
		
		cout<<"\n\n\n";
		cout<<"\t\tA boy name: ";
		cin>>bname;
	
		cout<<"\n\t\tA girl  name: ";
		cin>>gname;
		cout<<"\n\t\tan Adjective:  ";
		cin>>ad1;
		
		cout<<"\n\t\tA  Noun:  ";
		cin>>noun;
		cout<<"\n\t\tA  number:  ";
		cin>>number;
		cout<<"\n\t\tYour favourit  restaurant: ";
		cin>>restaurent;
		cout<<"\n\t\tA  type  of food:   ";
		cin>>food;
		cout<<"\n\t\tA  type  of driink:   ";
		cin>>drink;
		
		cout<<"\n\t\tVerv(ing): ";
		cin>>vb;
			cout<<"\n\t\tA body  part: ";
		cin>>body;
			cout<<"\n\t\tcar name:";
		cin>>car;
			cout<<"\n\t\tA type of gift:";
		cin>>gift;
		
		cout<<"\n\t\tA type of candy:";
		cin>>candy;
		cout<<"\n\t\tA type of flower:";
		cin>>flower;
		cout<<"\n\t\tA place:";
		cin>>place;
		cout<<"\n\n\n\t\t=========================== Love Date ==========================="<<endl;
			changeColor(10);
		cout<<"\n\n\t\tThere once a "<<ad1<<" couple,their names is "<<bname<<" and "<<gname<<".\n"
		<<"\t\tThey had never really been  on  a "<<noun<<", so they decide to  go  on "<<number<<".\n"
		<<"\t\t"<<bname<<"  took "<<gname<<" to "<<restaurent<<".They orddered "<<food<<" and "<<drink<<".\n"
		<<"\t\tWhen they were done going, "<<bname<<"tooks"<<gname<<"'s "<<body<<" and  put her in  his "<<car<<".\n"
		<<"\t\tHe gave her a "<<gift<<","<<candy<<" and "<<flower<<" and then he took her to  home"<<endl;
		changeColor(15);
	Myclass::Emain();
}
void Myclass::chinese(){
	changeColor(15);
	cout<<"\n\t\t=====================Chinese Dinner====================="<<endl;
	string ad1,ad2,ad3,ad4,ad5,n1,n2,n3,n4,food1,food2,food3,p;
	cout<<"\n\n\t\tInput a girl name: ";
	cin>>n2;
	cout<<"\n\n\t\tInput a adjective: ";
	cin>>ad1;
	cout<<"\n\n\t\tInput a boy name: ";
	cin>>n1;
	cout<<"\n\n\t\tInput a adjective: ";
	cin>>ad2;
	cout<<"\n\n\t\tInput a noun: ";
	cin>>n3;
	cout<<"\n\n\t\tInput a chinese food: ";
	cin>>food1;
	cout<<"\n\n\t\tInput a adjective: ";
	cin>>ad3;
	cout<<"\n\n\t\tCelibraty: ";
	cin>>p;
	cout<<"\n\n\t\tInput a chinese food: ";
	cin>>food1;
	cout<<"\n\n\t\tInput a adjective: ";
	cin>>ad4;
	cout<<"\n\n\t\tInput a chinese food: ";
	cin>>food2;
	cout<<"\n\n\t\tInput a adjective: ";
	cin>>ad5;
	cout<<"\n\n\n\t\t=========================== Chinese Dinner ==========================="<<endl;
	changeColor(10);
	cout<<"\n\n\t\tI recently had dinner at a Chinese restaurant. The cooking was \n"
	"\n\t\t"<<ad1<<" and the service was "<<ad2<<". The owner of the restaurant "<<p<<".\n "
	"\n\t\tsuggested that for my first course i have sweet and "<<ad3<<" spare ribs, which is a\n"
	"\n\t\tspecialty of the "<<n1<<". They were "<<ad4<<". For the next course, I was served a "<<ad4<<" "<<n2<<" soup.\n"
	"\n\t\tThe Main course consisted of Egg Foo "<<n3<<", lobster in "<<food1<<" sauce, and pressed"<<food2<<".\n"
	"\n\t\tFor dessert, i ordered those famous Chinese "<<n4<<" cookies with sliced "<<food3<<"."<<endl;
		changeColor(15);
	Myclass::Emain();
}

void Myclass::tarzan(){
		cout<<"\n\t\t=====================Tarzan====================="<<endl;
	string noice,person,place,ad1,ad2,ad3,ad4,animal1,animal2,noun,pNoun1,pNoun2,food;
	
	cout<<"\n\n\n";
	cout<<"\t\tA Funny Noise: ";
	cin>>noice;
	cout<<"\n\t\tAdjective #1:  ";
	cin>>ad1;
	cout<<"\n\t\tA person you know: ";
	cin>>person;
	cout<<"\n\t\tAdjective #2:  ";
	cin>>ad2;
	
	cout<<"\n\t\tA Place ";
	cin>>place;
	cout<<"\n\t\tAdjective #3:  ";
	cin>>ad3;
	cout<<"\n\t\tAnimal #1:  ";
	cin>>animal1;
	cout<<"\n\t\tAdjective #4:  ";
	cin>>ad4;
	cout<<"\n\t\tAnimal #2:  ";
	cin>>animal2;
	cout<<"\n\t\tNoun:  ";
	cin>>noun;
	cout<<"\n\t\tPlural Noun #1:  ";
	cin>>pNoun1;
	cout<<"\n\t\tPlural type of  food:  ";
	cin>>food;
	cout<<"\n\t\tPlural Noun #2:  ";
	cin>>pNoun2;
	
	cout<<"\n\n\n\t\t=========================== Tarzan ==========================="<<endl;
		changeColor(10);
	cout<<"\n\n\t\tOne of the most "<<ad1<<"  characters  in  fiction is called ""Tarzan"" of the "<<pNoun1<<".\n"
	<<"\t\tTarzan was raised  by a "<<animal1<<" and living in  a "<<ad2<<" jungle in the heart of darkest "<<place
	<<".\n\t\tHe spends  most  of his time to eating "<<food<<" and swinging from tree to "<<noun<<".\n \t\tWhenever  he gets angry, he beats on his chest and says "<<noice
	<<".\n\t\tThis is his  war cry. Tarzan  always  dresses in "<<ad3<<" shorts made from the skin of  a "<<animal2<<",\n \t\tand his  best friend Cheetah."
	"\n\t\tHe supposed  to be able to speak to  elephants and "<<place<<".\n \t\tin this movies, Tarzan is playe by"<<person<<endl;
	changeColor(15);
	Myclass::Emain();
}
