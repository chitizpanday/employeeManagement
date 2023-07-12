#include<iostream>
#include<windows.h>
void enterData(){

};
void showData(){
   
};

void searchData(){
   
};

void updateData(){
   
};

void deleteData(){

};

int main(){
   std::string userName;
   std::string password;
   std::cout<<"*****************Employee Management System*************\n";
   std::cout<<"**********************Sign-Up Page**********************\n";
   std::cout<<"User Name: ";
   std::cin>>userName;
   std::cout<<"Password: ";
   std::cin>>password;
   std::cout<<"\n \t \tYour Account is being Created";
   for(int i=0; i<6; i++){
      std::cout<<'.';
      Sleep(1000);
   }
   system("CLS");
    std::cout<<"\n \t \tYour Account is Successfully Created !\n";
    start:
    std::cout<<"*****************Employee Management System*************\n";
    std::string userName1, password1;
   
   std::cout<<"User Name: ";
   std::cin>>userName1;
   std::cout<<"Password: ";
   std::cin>>password1;
   if(userName==userName1 && password==password1){
      system("CLS");
    while(1){
      int userChoice;
      std::cout<<"*****************Employee Management System*************\n";
      std::cout<<"\n Enter 1 to Enter Employee Data"
               <<"\n Enter 2 to Display Employee Data"
               <<"\n Enter 3 to Search Employee Data"
               <<"\n Enter 4 to Update Employee Data"
               <<"\n Enter 5 to Delete Employee Data"
               <<"\n Enter 6 to Exit";
      std::cin>>userChoice;
      switch (userChoice)
      {
      case 1:
         enterData();
         break;
      case 2:
         showData();
         break;
      case 3:
         searchData();
         break;
      case 4:
         updateData();
         break;
      case 5:
         deleteData();
         break;
      
      default:std::cout<<"Not a Valied Input \n";
         break;
      }
   }
   }
   else if (userName!=userName1){
   std::cout<<"The username you entered is incorrect\n\n";
   Sleep(2000);
   goto start;
   }
   else if (password!=password1){
   std::cout<<"The password you entered is incorrect";
   Sleep(4000);
   goto start;
   }
   
   return 0;
}