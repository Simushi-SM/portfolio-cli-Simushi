#include <iostream>
using namespace std;

/*Written using functoins and switch statements*/
void show_About();
void show_Skills();
void show_Projects();
void show_Future();

int option;
int main(){
 
 do{
 
 char i;
 for(i=1;i<=27;i++){
  cout<< "=";
 }
 cout<<endl;
 cout<<"   MY PORTFOLIO APP"<<endl;
 
 for(i=1;i<=27;i++){
  cout<< "=";
 }
 cout<<endl;
 
 cout<<"  1.About Me \n"; 
 cout<<"  2.Skills I Want to Learn"<<endl; 
 cout<<"  3.My Projects"<<endl;
 cout<<"  4.My Future Plans"<<endl;
 cout<<"  5.Exit"<<endl;
 
 cout<<"  Choose the number option "<<endl;

  cin>>option;
  if (option < 1 || option > 5){
   cout<<" You have entered an Invalid input.Please choose an option between 1 to 5 \n";
  }
  else 
 
 switch (option){
     case 1:{
      show_About();
     }
    
      case 2:{
       show_Skills();
       break;      
      }
           
     case 3:{
         show_Projects();
       break;    
       }   

     case 4:{
        show_Future();
        break; 
       }
             
        case 5:{
         cout<<"Exiting..." <<endl;
         break;
        }   
  }
} 
while ( option != 5);
 
 return 0;
}

void show_About(){   
       cout<<" I am a person who loves learning and building Tech related stuff and teaching others how to use and familiarize themselves with the current Technology "<<endl;
}
void show_Skills(){
       cout<<" I would like to learn the relevant programming languages which would allow me to build real world robots and be able to write some usable software."<<endl;
}  
void show_Projects(){
        cout<<" One of the projects I've worked on and which I'm currently working on are:" <<endl << "  i.CBU CA Calculator "<<endl << "  ii.Simple Basic Calculator "<<endl << "  iii.Offline Quadratic Equation Solver"<<endl << "  iv.Thee GenZ Pool"<<endl;     
}
void show_Future(){
        cout<<"  1.Build my first Website" <<endl <<"  2.Get started with the GenZ pool Project "<<endl <<"  3.Participate in the HUAWEI DATACOM PROGRAM"<<endl;
}
