#include <iostream>
#include <time.h>
#include <string>


using namespace std;


int test = 1;


void checkifodd(int num){

    //Odd case
    if((num % 2) == 1){
        cout << "Number is odd" << endl;


    }
    //Even case
    if((num % 2) == 0){
        cout << "Number is even" << endl;


    }

}


int main(){
   
    srand(time(NULL));

    int randomnum = rand();

    cout << randomnum << endl;

    checkifodd(randomnum);



    string waitin = " ";
    cout << "type esc to end, anything else to restart program" << endl;
    cin >> waitin;

    if (waitin == "esc")
    {
        system("cls");
        return 0;
    }
    else
    {
        system("cls");
        main();
    }

}