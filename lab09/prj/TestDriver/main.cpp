#include <iostream>
#include <locale.h>
#include "ModulesGordenko.h"

using namespace std;

void test_driver_1(){
    double wHeight[5] = {35, 7, 1.9, 0.6, 9.6};
    int result[5] = {12, 4, 2, 1, 5};
    cout << "Task number 9.1" << endl;
    for(int i = 0;i < 5; i++){
        if(bal_baphort(wHeight[i]) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test is failed" << endl;
        }
    }
}


void test_driver_2(){
    float celcia[3] = {20, 5, 10};
    float result[3] = {68, 41, 50};
    cout << "Task number 9.2" << endl;
    for(int i = 0; i < 3;i++){
        if(temperature(celcia[i]) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test is failed" << endl;
        }
    }
}

void test_driver_3(){
    int number[4] = {10, 30, 25434, 64131};
    int result[4] = {30, 28, 8, 9};
    cout << "Task number 9.3" << endl;
    for(int i = 0;i < 4;i++){
        if(bits_number(number[i]) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test is failed" << endl;
        }
    }
}
int main(){
    setlocale(LC_ALL, "UKR");
    test_driver_1();
    test_driver_2();
    test_driver_3();
}
