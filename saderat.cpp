#include<iostream>

#include <stdlib.h>
using namespace std;
class saderat{
public:
  ////////////////////تابع سازنده//////////////////////
  saderat(char n='n',int c=0, float w=0,float p=0){
    name=n;
    code_sadert=c;
    weight=w;
    price=p;
  };
  void get(char n,int c, float w,float p);
  char retname();
  float reweight();
  float reprice();
  float total();
  char name;
  int code_sadert;
  float weight;
  float price;
};

char max_export(saderat list[100]);
int checkname(char t,char n[100],int j);
int num(char t,saderat list[100]);
int checkrep(int num[100],int k);
char raandchar();
///////////داده ها رو از کاربر گرفته و ذخیره میکنه/////////////
void saderat::get(char n,int c, float w,float p){
  name=n;
  code_sadert=c;
  weight=w;
  price=p;
}
////////////////////نام کالا رو برمیگرداند/////////////////////
char saderat::retname(){
  return name;
}
///////////////////حجم کالا رو برمیگرداند/////////////////////
float saderat::reweight(){
  return weight;
}
//////////////////قیمت کالا رو برمیگرداند/////////////////////
float saderat::reprice(){
  return price;
}
//////////////////قیمت کل کالا/////////////////////
float saderat::total(){
  float totalp=1;
  totalp=weight*price;
  return totalp;
}
////////////تابع برای یافتن کالا با بیشترین حجم صادرات///////////
char max_export(saderat list[100]){
  char name[100],test;
  int i=0,j=0, number[100];
  for(i=0;i<100;i++){
    test=list[i].retname();
    if (checkname(test,name,j)==0){
      name[j]=test;
      number[j]=num(name[j],list);
      j++;
    }
    else{
      continue;
    }
  }
  i=checkrep(number,j);
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
//////////////حجم یک نوع کالا رو برسی میکنه/////////////////
int num(char t,saderat list[100]){
  int count=0;
  for(int i=0;i<100;i++){
    if(t==list[i].retname()){
      count=count+list[i].reweight();
    }
    else{
      continue;
    }
  }
  return count;
}
/////////////یافتن کالا با بیشترین حجم////////////////
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
////////////تابع برای محاسبه مجموعه ارزش صادرات////////////////
float exportvalue(saderat list[100]){
  float total_price=0;
  for(int i=0;i<100;i++){
    total_price=total_price+list[i].total();
  }
  return total_price;
}
/////////////////main تابع/////////////////////
int main(){
  saderat list[100];
  for(int i=0;i<100;i++){
    list[i].name=raandchar();
    list[i].weight=rand()%3001;
    list[i].price=rand()%3001;
    list[i].code_sadert=rand();
  }
  
  return 0;
}
//////////////تابع برای محاسبه رندم یک کاراکتر///////////////
char raandchar(){
  int i=rand()%27;
  char all_characters[26] = {
      'a','b','c','d','e','f','g','h','i','j','k','l','m',
     'n','o','p','q','r','s','t','u','v','w','x','y','z'
  };
  return all_characters[i];
}
