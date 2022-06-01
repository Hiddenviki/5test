#include <iostream>
using namespace std;
int main() {

//    int a = 1;
//    a - объект(переменная)
//    &а - операция взятия адреса
//    int *p; указатель
//    p - адрес указателя
//    p = &a - присвоение адреса объекта а указателю р (смотри на строке 39)
//    *р - разыменование, взятие значения по адресу.

    int a=10;
    int* p; //указатель типа int
    p=&a;
    cout<<"a "<<a<<endl; //a 10
    cout<<"&a "<<&a<<endl; //&a 0x16ae63888
    cout<<"p "<<p<<endl; //p 0x16ae63888
    cout<<"*p "<<*p<<endl; //*p 10
    cout<<"&p "<<&p<<endl; //&p 0x16ae63880

    cout<<"----------1--------"<<endl;

    int massive[5]={11,22,33,44,55};
    int* ptr = &massive[0];
    int size = sizeof massive / sizeof massive[0];
    cout<<sizeof(massive)<<" bytes is "<<size<<" symbols here "<<endl;


    cout<<"ptr "<<ptr<<endl; //ptr 0x16eedf870
    cout<<"*ptr "<<*ptr<<endl; //*ptr 11 это правильно!
    cout<<"*ptr+1 "<<*ptr+1<<endl; //*ptr+1 12 это дичь!
    cout<<"*(ptr+1) "<<*(ptr+1)<<endl; //*(ptr+1) 22 это правильно!
    cout<<"&ptr "<<&ptr<<endl; //&ptr 0x16eedf858

    cout<<"------------------"<<endl;

    int *ptr2; //а теперь создадим еще один указатель
    ptr2=ptr; //и скажем, что его адрес - это адрес предыдущего УКАЗАТЕЛЯ (в ptr ХРАНИЛСЯ адрес переменной, но при этом у самого указателя ptr есть свой адрес)

    cout<<"ptr2 "<<ptr2<<endl; //ptr2 0x16d22f870 адрес указателя ptr2 !отличается! от адреса ptr, но они !указывают на одно и то же!
    cout<<"*ptr2 "<<*ptr2<<endl; //*ptr2 11 это правильно!
    cout<<"*ptr2+1 "<<*ptr2+1<<endl; //*ptr2+1 12 это дичь!
    cout<<"*(ptr2+1) "<<*(ptr2+1)<<endl; //*(ptr2+1) 22 это правильно!
    cout<<"&ptr2 "<<&ptr2<<endl; //&ptr2 0x16d22f850 адрес адреса наверное ахаха хуй его знает

    return 0;
}
