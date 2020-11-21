#include<iostream>
#include<conio.h>
using name space std;
clas saderat{
public:
  ////////////////////تابع سازنده//////////////////////
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
/////////////تابع برای یافتن کالا با بیشترین صادرات //////////////
char max_export(saderat m[100]){
  char name[100],test;
  int i=0,j=0, number[100];
  for(i=0;i<100;i++){
    test=m[i].retname();
    if (checkname(test,name[100],j)==0){
      name[j]=test;
      number[j]=num(name[j],m[100],j);
      j++;
    }
    else{
      continue;
    }
  }
  i=checkrep(number[100],j);
  return name[i];
}
///////////////بررسی میکند اسم کالا تکراری نباشد/////////////////
int checkname(char t,char n[100],int j){
  for(int i=0;i<=j;i++){
    if(t==n[i]){
      return 1;
    }
    else{
      continue;
    }
  }
  return 0;
}
///////////////تعداد یک کالا را بررسی میکند/////////////////
int num(char t,char n[100],int j){
  int count=0;
  for(int i=0;i<100;i++){
    if(t==n[i].retname()){
      count++;
    }
    else{
      continue;
    }
  }
  return count;
}
//////////////یافتن بیشترین تکرار کالا ////////////////
int checkrep(int num[100],int k){
  int i=0,j=0,b=0;
  for(i=0;i<k;i++){
    if(num[i]>b){
      b=num[i];
      j=i;
    }
    else{
      continue;
    }
  }
  return j;
}
