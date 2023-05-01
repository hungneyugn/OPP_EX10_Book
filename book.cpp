#include<iostream>
#include<string>
using namespace std;
class book{
    private:
        string name;
        string author;
        int publishYear;
        int tempQuantity;
        int maxQuantity;
    public:
        book(string name, string author, int publishYear, int quantity);
        void display();
        void borrow();
        void giveBack();
};
book::book(string name, string author, int publishYear, int maxQuantity){
    this->name = name;
    this->author = author;
    this->publishYear = publishYear;
    this->maxQuantity = maxQuantity;
    this->tempQuantity = maxQuantity;
}
void book::display(){
    cout<<"----------------------"<<endl;
    cout<<"Informations Of Book:"<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Author: "<<this->author<<endl;
    cout<<"Publishing year: "<<this->publishYear<<endl;
    cout<<"Quantity: "<<this->tempQuantity<<endl;
}
void book::borrow(){
    cout<<"----------------------"<<endl;
    if(this->tempQuantity > 0)
    {
        cout<<"Borrowed"<<endl;
        this->tempQuantity -= 1;
    }
    else cout<<"Out Of Books"<<endl;
}
void book::giveBack(){
    cout<<"----------------------"<<endl;
    if(this->tempQuantity == this->maxQuantity)cout<<"Quantity is enough"<<endl;
    else 
    {
        this->tempQuantity += 1;
        cout<<"Gave Book Back"<<endl;
    }
}
int main(){
    book book1("Dac nhan tam","Dale Carnegie",1936,2);
    book1.display();
    book1.borrow();
    book1.display();
    book1.borrow();
    book1.display();
    book1.borrow();
    book1.giveBack();
    book1.display();
    book1.giveBack();
    book1.display();
    book1.giveBack();
    return 0;
}