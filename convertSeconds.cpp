#include <iostream>

class Time{
    public: //constructors and methods
       Time(int inputSeconds) { //value constructor
         this -> seconds = inputSeconds;
         //conversion:
         years= seconds/31536000;
           seconds = seconds%31536000; 
           days= seconds/86400;
           seconds= seconds%86400;
           hours=seconds/3600;
           seconds=seconds%3600;
           minutes=seconds/60;
           seconds=seconds%60;
       }
       void printConversion(){
           std::cout<< years << " years, "<<days<< " days, "<< hours<< " hours, "<<minutes<< " minutes, "<< seconds << " seconds."<<std::endl;
       }
    private: //data members
        int years;
        int days;
        int hours;
        int minutes;
        int seconds;
};

int main(int argc, char* argv[]){
    if (argc!=2){ //input validation
        std::cout<< "Error. Input 1 number." << std::endl;
        return 0;
    }
    int inputSeconds = std::stoi(argv[1]);
    Time userInput(inputSeconds); //create object 
    userInput.printConversion(); //call member function
    return 0;
}
