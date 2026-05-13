#include <iostream>
using namespace std;

struct Buku{

    string judul, pengarang;
    int tahun_terbit;

    Buku *next;
};

int main(int argc, char** argv){

    Buku *node1, *node2, *node3;

    node1 = new Buku();
    node2 = new Buku();
    node3 = new Buku();

    node1->judul = "Test1";
    node1->pengarang = "Tester1";
    node1->tahun_terbit = 1992;
    node1->next = node2;

    node2->judul = "Test2";
    node2->pengarang = "Tester2";
    node2->tahun_terbit = 1992;
    node2->next = node3;
    
    node3->judul = "Test3";
    node3->pengarang = "Tester3";
    node3->tahun_terbit = 1992;
    node3->next = NULL;

    Buku *current;
    current = node1;
    int i = 1;
    
    while(current != NULL){
        cout << "Judul Buku #" << i << ": " << current->judul << endl;
        cout << "Penulis Buku #" << i << ": " << current->pengarang << endl;
        cout << "Tahun Terbit Buku #" << i << ": " << current->tahun_terbit << endl;

        cout << endl;
        i++;
        current = current->next;
    }

    return 0;
}