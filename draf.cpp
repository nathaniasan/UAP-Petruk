//ini adalah draf projek uap
#include<iostream>
#include<algorithm>
#include<conio.h>
#include<vector>
#include<stdlib.h>
#include<iomanip>
#include<string>

#define max 50

vector<int> v;
typedef struct {
    string name[max], nik[max], kelas[max];
    int head, tail;
}Queue;
Queue antrian;

void create(){
    antrian.head=antrian.tail=-1;
}

bool isempty(){
    if(antrian.tail==-1)
        return true;
    else
        return false;
}

bool isfull(){
    if (antrian.tail==max-1) 
        return true;
    else
        return false;
}

int enqueue (string nama, string nik, string kelas){

    if (isempty()==true)
    {
        antrian.head = antrian.tail = 0;
    }
    


}
using namespace std ;

int main(int argc, char const *argv[])
{
    
    return 0;
}
