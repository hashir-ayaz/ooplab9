//hashir ayaz 22i2407
#include <iostream>
#include <string>
#include "header9.h"
using namespace std;

//q1
string Months[] ={"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};

class DayOfYear{
    int dayofyear;

public:

DayOfYear(int d){
    dayofyear=d;
}
void print(){

}
string convertTo(int dayofyear){
    string myString="";
    if (dayofyear<=31)
    {
        myString=Months[0];
    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[1];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[2];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[3];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[4];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[5];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[6];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[7];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[8];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[9];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[10];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[11];

    }
    
}



};//class ends here


//q2

class Matrix{
int rows;
int columns;
int**Ptr;

public:
Matrix (int r, int c){
    Ptr=new int*[r];

    for (int i = 0; i < r; i++)
    {
        Ptr[i]=new int[c];
    }
    
}

bool operator <(const Matrix& right){
    bool match=true;

    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            if (Ptr[i][j]!=right.Ptr[i][j])
            {
                match=false;
            }
            
        }
        
    }
    return match;
}

void operator+=(const Matrix& right){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]+=right.Ptr[i][j];
            
        }
        
    }
}

void operator-=(const Matrix& right){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]-=right.Ptr[i][j];
            
        }
        
    }
}

void operator*=(const Matrix& right){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]*=right.Ptr[i][j];
            
        }
        
    }
}

Matrix operator++ (int){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]++;
            
        }
        
    }
}

};//class ends here


//q3

class Money{
int dollars;
int cents;

public:
Money(){
    dollars=0;
    cents=0;
}
Money(int dollars,int cents){
    this->dollars=dollars;
    this->cents=cents;
}
void operator++ (){
    ++dollars;
    ++cents;

}
Money operator++ (int){
    Money answer;

    this->dollars=answer.dollars+1;
    this->cents=answer.cents+1;

    return answer;
}

void operator-- (){
    --dollars;
    --cents;

}

Money operator-- (int){
    Money answer;

    this->dollars=answer.dollars-1;
    this->cents=answer.cents-1;

    return answer;
}

//x*=2

void operator*= (const Money& right){
    this->dollars*=right.dollars;
    this->cents*=right.cents;
}

bool operator!= (const Money& right){
    bool match=true;

    if (this->dollars!=right.dollars)
    {   
        match=false;
    }
    if (this->cents!=right.cents)
    {   
        match=false;
    }
    
    return match;
}

friend ostream& operator<< (ostream &os, Money& right){
    os<<right.dollars;
    os<<right.cents;
    return os;
}

friend istream & operator>> (istream & in,Money& right){
    in>>right.dollars;
    in>>right.cents;
    return in;
}

~Money(){
    cout<<"end";
}



};//class ends here




int main(){
    
    
    
    
    
    
    return 0;}