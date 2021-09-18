#ifndef cdist_class_hpp
#define cdist_class_hpp

#include <iostream>

class CIntN {
private:
    int* number;
    char sign;
    int lenght_number;
public:
    CIntN (const int);
    
    CIntN (const int , std::string);
    
    void print ();
    
    CIntN () ;
    
    char get_sign () ;
    int get_lenght () ;
    int* get_number () const ;
    
    void new_sign (char );
    
    void new_number (const int , const int* );
    
    void new_number (std::string );
    CIntN(const CIntN& ) ;
    
    ~CIntN () ;
    
    void set_lenght(const int );

    
    CIntN& operator=(const CIntN& );

};

#endif


