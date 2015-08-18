/* 
 * File:   main.cpp
 * Author: caoshan
 *
 * Created on August 18, 2015, 1:43 PM
 */

#include <cstdlib>
#include <locale>
#include <iostream>
using namespace std;

/*
 * 
 */

//pass by pointer.
void MakeMeYoun(int * age)
{
    cout<< " my previous age is "<< *age<<endl;
    *age=19;
}
/// pass by references;
void actuallyAge(int& age)
{
    age=39;
}

int main(int argc, char** argv) {
    int myAge=39;
    char myGrade='A';
    std::cout<<"Size of int "<<sizeof(myAge)<<std::endl;
    std::cout<<"Size of char "<<sizeof(myGrade)<<std::endl;
    
    int* agePtr=&myAge; 
    cout<<"Data at memory address "<<*agePtr<<endl;
    cout<<"Address of the Pointer"<<agePtr<<endl;
    
    int badNum[5]={1, 2, 2, 3, 5};
    int* numArrayPtr=badNum;
    cout<< " Address " <<numArrayPtr<<" Value "<<*numArrayPtr<<endl;
    numArrayPtr++;
    cout<< " Address " <<numArrayPtr<<" Value "<<*numArrayPtr<<endl;
    cout<< " Address "<<badNum<< " Value "<<*badNum<<endl;
    
    //pass by ptr
    MakeMeYoun(&myAge);
    cout << " I am " <<myAge<< " years old now" <<endl;
    
    int& ageRef=myAge; ///this need to initialized.
    cout<<"  My age is " << myAge<<endl;
    ageRef++;
    cout<< " My age is "<< myAge<<" now " <<endl;
    
    //pass by ref
    actuallyAge(ageRef);
    cout<< " My age is "<< myAge<<" now " <<endl;
    
    
    
    return 0;
}

/*
 * 1. using pointer when you don't want to initialize every time;
 * 2. 
 
 */

