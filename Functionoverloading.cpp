#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
int add(float a, float b){
    return a+b;
}
int main(){
    cout<<"add of two num is : "<< add(50,10)<<endl;
    cout<<"add of three num is : "<< add(50,10, 30)<<endl;
    cout<<"add of two float num is : "<< add(5.9f,10.4f)<<endl;
}
