#pragma once
#include <iostream>
#include <cstring>

class MyString{
    
    private:
        char* _napis;
    
    public:
        MyString(const char* napis);
        ~MyString();
        char* str() const;
        void append(const MyString& s1);
        void replace(const MyString& s1);
        static void swap(MyString& s1, MyString& s2);
    
};
