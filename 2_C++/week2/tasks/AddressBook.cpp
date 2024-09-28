#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <list>
#include <ostream>
#include <string>
#include <vector>

//Simple Address Book program

int main(){
    
    std::string user_string;
    std::vector<std::string>array_string;

    while(1)
    {
    std::cout<<"Welcome to your favorite address Book!"<<std::endl;
    std::cout<<"What you want to do?"<<std::endl;

    std::cout<<std::setw(4)<<"|"<<" List       | List all users"<<std::endl;
    std::cout<<std::setw(4)<<"|"<<" Add        | Add a user"<<std::endl;
    std::cout<<std::setw(4)<<"|"<<" Delete     | Deletes a user"<<std::endl;
    std::cout<<std::setw(4)<<"|"<<" Delete All | Removes all users"<<std::endl;
    std::cout<<std::setw(4)<<"|"<<" Search     | Search a user"<<std::endl;
    std::cout<<std::setw(4)<<"|"<<" Close      | Close The Address book"<<std::endl<<std::endl;

    std::getline(std::cin,user_string); //get input from the user

    if(user_string =="Close" || user_string=="close") 
    {
         std::cout<<"Closing, Bye Bye !!"<<std::endl;
        return 0;
    }

    else if (user_string=="List" ||user_string=="list") {  //print all the list
        for(auto i:array_string)
        {
            std::cout<<"Name: "<<i<<std::endl;
        }
        std::cout<<std::endl;
    }

    else if (user_string=="Add"||user_string=="add") { //add a new user to the end of the vector
        std::cout<<"Enter a name: ";
        std::getline(std::cin,user_string);
        std::cout<<std::endl;
        array_string.emplace_back(user_string);
    }

    else if (user_string=="Delete"||user_string=="delete") { //delete specific name the user choose
        std::cout<<"Enter a name: ";
        std::getline(std::cin,user_string);

        auto i=std::find(array_string.begin(),array_string.end(),user_string);
        if (i==array_string.end())
        {
            std::cout<<"element has not been found "<<std::endl;
            std::cout<<std::endl;
        }
        else
        {
            array_string.erase(i);
            std::cout<<"element has been deleted"<<std::endl;
            std::cout<<std::endl;
        }   
    
    }

    else if (user_string=="Delete All"||user_string=="delete all") { //delete all data
        array_string.clear();
        std::cout<<"all data has been deleted"<<std::endl;
        std::cout<<std::endl;
    }

    else if (user_string=="Search"||user_string=="search") { // search if the name exist or no
        std::cout<<"Enter a name: ";
        std::getline(std::cin,user_string);

        auto i=std::find(array_string.begin(),array_string.end(),user_string);
        if (i==array_string.end())
        {
            std::cout<<"element has not been found "<<std::endl;
            std::cout<<std::endl;
        }
        else
        {
            std::cout<<"element has been found "<<std::endl;
            std::cout<<std::endl;
        }   
        
        }
    else   //wrong input from the user try again
    {
        std::cout<<"Wrong Input !!! "<<std::endl;
        std::cout<<std::endl;
    }

    }

    return 0;
}