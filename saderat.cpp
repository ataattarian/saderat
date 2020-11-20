#include<iostream>
#include<conio.h>
using name space std;


clas saderat{
public:
  ///////////////تابع سازنده///////////////
  saderat(char n='n',int c=0, float w=0,float p=0){
    name=n;
    code_saderat=c;
    weight=w;
    price=p;
  }
  ‍‍‍‍‍‍~saderat();
  void get(char n,int c, float w,float p);
  char retname();



private:
  char name;
  int code_sadert;
  float weight;
  float price;
};

///////////داده ها رو از کاربر گرفته و ذخیره میکنه/////////////
void saderat::get(char n,int c, float w,float p){
  name=n;
  code_saderat=c;
  weight=w;
  price=p;
}
////////////////////نام کالا رو برمیگرداند/////////////////////
char saderat::retname(){
  return name;
}
