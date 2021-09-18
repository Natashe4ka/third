#include "head.hpp"
#include "AT.hpp"


int main() {
    
    if (!AutoTest() ) {
        std::cout << "Autotests failed!\n";
        return 0;
    }
    else {
    std::cout << "Input 1 to sum" << std::endl;
        std::cout << "Input 2 to differ" << std::endl;
        std::cout << "Input 0 to break" << std::endl;

        while(true){
            std::cout << "Input the command" << std::endl;
            int enter;
            std::cin >> enter;
            
            if (enter!= 0 && enter != 1 && enter != 2) {
                std::cout <<"Error! Unknown command!!!" << std::endl;
                return 0;
            }
            if(enter == 0) break;
            if(enter == 1){
                CIntN q, w;
                std::cout << "Input 2 numbers: " << std::endl;
                std::string x, y;
                std::cin >> x >> y;
                q.new_number (x);
                w.new_number(y);
                CIntN z = q+w;
                z.print();
            }
            if(enter == 2){
                CIntN q, w;
                std::cout << "Input two numbers: " << std::endl;
                std::string x, y;
                std:: cin >> x >> y;
                q.new_number (x);
                w.new_number(y);
                CIntN z = q-w;
                z.print();
            }
        }
    }
    
    return 0;
}
