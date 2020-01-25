#include "MyString.h"

MyString::MyString(const char* napis){
    int dlugosc = strlen(napis);
    _napis = new char[dlugosc+1];
    
    for(int i=0; i<=dlugosc; i++){
        _napis[i] = napis[i];
    }
}

MyString::~MyString(){
    std::cout << "- deleting " << _napis << std::endl;
    delete[] _napis;
}

char* MyString::str() const{
    return _napis;
}

void MyString::append(const MyString& s1){
    int dlugosc = strlen(_napis) + strlen(s1._napis)+1;
    int dl1 = strlen(_napis);
    int dl2 = strlen(s1._napis);
    char* s = new char[dl1+1];
    strcpy(s, _napis);
    delete[] _napis;
    _napis = new char[dlugosc+1];
    strcpy(_napis, s);
    strcat(_napis, s1._napis);
    delete[] s;
}

void MyString::replace(const MyString& s1){
    delete[] _napis;
    _napis = new char[strlen(s1._napis)+1];
    strcpy(_napis, s1._napis);
}

void MyString::swap(MyString& s1, MyString& s2){
    int dl1 = strlen(s1._napis);
    int dl2 = strlen(s2._napis);
    
    char* nap = new char[dl1+1];
    strcpy(nap, s1._napis);
    delete[] s1._napis;
    s1._napis = new char[dl2+1];
    strcpy(s1._napis, s2._napis);
    delete[] s2._napis;
    s2._napis = new char[dl1+1];
    strcpy(s2._napis, nap);
    delete[] nap;
}
