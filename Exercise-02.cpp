/*
Nama: Gede Bagus Darmagita
NPM: 140810180068
Tanggal: 07-05-2019
Deskripsi: Exercise 2
*/

#include<iostream>
using namespace std;

const int maxElemen = 255;
struct StackLinked{
    char isi[maxElemen];
    StackLinked* next;
};
typedef StackLinked* pointer;
typedef pointer Stack;

void createStack(Stack& Top){
    Top = NULL;
}

void createElemen(pointer& pBaru){
    pBaru = new StackLinked;
    cout << "Masukan satu huruf: ";
    cin >> pBaru->isi;
    pBaru->next = NULL;
}

void push(Stack& Top, pointer& pBaru){
    if (Top == NULL){
        Top = pBaru;
    }
    else{
        pBaru->next = Top;
        Top = pBaru;
    }
}

void pop(Stack& Top, pointer& pHapus){
    if (Top == NULL){
        cout << "Tumpukan Kosong!" << endl;
    }
    else if (Top->next = NULL){
        pHapus = Top;
        Top = NULL;
    }
    else{
        pHapus = Top;
        Top = Top->next;
        pHapus->next = NULL;
    }
}

void print(Stack Top){
    pointer temp;
    while (Top != NULL){
        temp = Top;
        cout << temp->isi;
        Top = Top->next;
    }
}

int main(){
    Stack S;
    int n;
    pointer a;

    createStack(S);

    cout << "Masukan banyak huruf yang ingin di masukan: ";
    cin >> n;
    for (int i = 0; i<n; i++){
        createElemen(a);
        push(S,a);
    }
    cout << "Kata yang sudah di reverse: ";
    print(S);
}