#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
int akku_choice,computer_choice,turn=0;

   srand(time(0));
   computer_choice=(rand()%100)+1;
   cout<<" \n menu : [player can choose number between 1-100]"<<endl;
                     
   
   do
   {
    cout<<"\nenter player choices\n";
    
   cin>>akku_choice;
   turn++;
   
   if(akku_choice>computer_choice)
   
    cout<<"\ntry small number";
   
   else if(akku_choice<computer_choice)
   
    cout<<"\ntry higher number";
   
   else
   
    cout<<"\ncorrect guess";
   


   }while(akku_choice != computer_choice);
   cout<<"\n number of turn player plays the game="<<turn;
   

return 0;
}