#include<iostream>
using namespace std;
void eligible(int age);
void noteligible(int age);
main(){
int age;
while(true){
cout<<"Enter your age:";
cin>>age;
eligible(age);
noteligible(age);
}





}
void eligible(int age){
if(age>=18){

cout<<"You are eligible:";}
}
void noteligible(int age){
if(age<18){
cout<<"You are not eligible:";
}

}