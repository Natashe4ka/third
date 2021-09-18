#include "AT.hpp"


int AutoTest1(){
    CIntN X, Y;
    X.new_number("1");
    Y.new_number("10");
    CIntN Z=X+Y;
    if (Z.get_number()[0]==1 && Z.get_number()[1]==1) return 1;
    else return 0;
}

int AutoTest2(){
    CIntN X, Y;
    X.new_number("10");
    Y.new_number("9");
    CIntN Z=X-Y;
    if (Z.get_number()[0]==1) return 1;
    else return 0;
}



int AutoTest(){
    
    if(!AutoTest1()){
        std::cout << "AutoTest1 failed." << std::endl;
    }
     if(!AutoTest2()){
        std::cout << "AutoTest2 failed." << std::endl;
     
    }
    
     
    if( AutoTest1() && AutoTest2() ) return 1;
    else return 0;

}
