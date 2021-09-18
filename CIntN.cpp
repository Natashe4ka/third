#include "CIntN.hpp"

    CIntN::CIntN (const int N) {
        lenght_number = N;
        number = new int[N];
        for (int i=0; i<N; i++) {
            number [i] = 0;
        }
        sign = '+';
    }
    
CIntN::CIntN (const int N, std::string x) {
        lenght_number = N;
        number = new int[N];
        if (x[0]=='-') {
            sign = '-';
            x.erase (0,1);
        }
        else sign = '+';
        for (int i=0; i<N; i++) {
            number [i] = stoi(x.substr(i, 1));
        }
    }
    
    void CIntN::print (){
        if (sign != '+') std::cout << sign;
        for (int i=0; i<lenght_number; i++){
            std::cout <<number[i];
        }
        std::cout << std::endl;
    }
    
CIntN::CIntN () {
        sign = '+';
        lenght_number = 0;
        number = NULL;
    }
    
    char CIntN::get_sign () {
        return sign;
    }
    int CIntN::get_lenght () {
        return lenght_number;
    }
    int* CIntN::get_number () const {
        return number;
    }
    
    void CIntN::new_sign (char _sign) {
        sign= _sign;
    }
    
    void CIntN::new_number (const int lenght, const int* num){
            if( lenght <= 0 ){
                std::cout << "Error! array's lenght is not correct." << std::endl;
                exit(-1);
            }
            if(number) delete[] number;
            lenght_number= lenght;
            number = new int[lenght];
            for(int i = 0; i < lenght; i++){
                number[i] = num[i];
            }
        }
    
    void CIntN::new_number (std::string num){
            if(num[0] == '-'){
                sign = '-';
                num.erase(0, 1);
            }
            else sign = '+';
            lenght_number = int (num.size());
            if (number) delete[] number;
            number = new int[lenght_number];
            
            for(int i = 0; i < lenght_number; i++){
                number[i] = stoi(num.substr(i, 1));
            }
        }
    
CIntN::CIntN(const CIntN& w) {   //оператор копирования (автоматически)
        lenght_number = w.lenght_number;
        sign = w.sign;
        number = new int[lenght_number];
        for (int i = 0; i < lenght_number; i++) {
            number[i] = w.number[i];
        }
      }
    
CIntN::~CIntN () {
        delete[] number;
    }
    
    
    void CIntN::set_lenght(const int lenght){
        lenght_number = lenght;
        if(number) delete [] number;
        number = new int[lenght_number];
        for (int i = 0; i < lenght_number; i++) {
            number[i] = 0;
        }
    }

    
CIntN& CIntN::operator=(const CIntN& X) {
        if (this == &X) return *this;
        sign = X.sign;
        lenght_number = X.lenght_number;
        if (number) delete[] number;
        number = new int[lenght_number];
        for (int i = 0; i<lenght_number; i++) {
            number [i]= X.number [i];
        }
        return *this;
    }

