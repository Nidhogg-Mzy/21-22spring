#include "student-non-static.h" /* File: exam-non-static.cpp */

int main()
{
    Student Jim("Jim");
    Jim.memorize("Data consistency is important");
    Jim.memorize("Copy constructor != operator=");
    
    Student Steve("Steve");
    Steve.memorize("Overloading is convenient");
    Steve.memorize("Make data members private");
    Steve.memorize("Default constructors have no arguments");
    
    Student Alan("Alan");
    
    Jim.do_exam();
    Steve.do_exam();
    Alan.do_exam();
    return 0;
} // Compile: g++ student-non-static.cpp exam-non-static.cpp 