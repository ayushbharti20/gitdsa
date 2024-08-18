/*#include<iostream>
using namespace std;
int main(){
    cout<<"Hello";
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    
    string str;
    getline(cin, str);
    cout << str << endl;
    char ch;
    cin >> ch ;
    cout << ch;
    return 0;
}*/

//if-else statement

/*#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age>= 18){
        cout << "you are an adult";
        
    }
    else{
        cout << " you are not an adult";
    }
    return 0;

}*/



/*#include<iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    else if(marks <=44 ){
        cout << "E";
    }
    else if(marks <= 49){
        cout << "D";
    }
    else if( marks <= 59){
        cout << "C";
    }
    else if(marks <=79){
        cout<< "B";
    }
    else if(marks <= 100){
        cout<<"A";
    }
    return 0;
}*/

// switch case

/*#include<iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout<<"Monday";
            break;

        case 2:
            cout<<"Tuesday";
            break;

        case 3:
            cout<< "Wednesday";
            break;

        case 4:
            cout<<"Thursday";
            break;
         
        case 5:
            cout<<"Friday";
            break;
        
        case 6:
            cout<<"Saturday";
            break;

        case 7:
            cout<<"Sunday";
            break;
        default:
        cout<<"Invalid";


    }
    return 0;
}
*/

// arrays 

/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cin>> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;
    cout<< arr[0] << arr[1] << arr[2] << arr[3] << arr[4] ;
    return 0;
}*/

// string

/*#include<iostream>
using namespace std;
int main(){
    string s = "Striver";
    int len = s.size();
    s[len-1]='z';
    cout << s[len-1] << "\n";
    cout << len;
}*/

// for loops and while loop

/*#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=10;i=i+1){
        cout<< "Take Action \n";
    }
    cout<<i<<endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=10;i>=0;i=i-1){
        cout<<"TAKE ACTION "<<i<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<=10){
        cout<<"TAKE ACTION "<<i<<endl;
        i=i+1;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i=2;
    do{
        cout<<"TAKE ACTION "<<i<<endl;
        i=i+1;
    }while(i<=1);
    cout<<i<<endl;
    return 0;
}*/

//functions

// void - which does not return anything

/*#include<iostream>
using namespace std;
void printname(string name){
    cout<<"Hey "<<name<<endl;
}
int main(){
    string name;
    cin >> name;
    printname(name);

    string name2;
    cin>>name2;
    printname(name2);
    return 0;

}*/

// take two numbers and print its sum

/*#include<iostream>
using namespace std;

void sum(int num1,int num2){
   int num3=num1+num2;
   cout<< num3; 
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    sum(num1,num2);
    
    return 0;
}*/

// pass by value- dont send original number , send copy value

/*#include<iostream>
using namespace std;
void doSomething(int num){
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
void doSomething(string s){
    s[0]='t';
    cout<<s<<endl;

}
int main(){
    string s="Ayush";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}*/

// pass by reference-send original value and change original value

/*#include<iostream>
using namespace std;
void doSomething(string &s){
    s[0]='t';
    cout<<s<<endl;

}
int main(){
    string s="Ayush";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
void doSomething(int &num){
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    for(i=0;i<=4;i=i+1){
        cout<<"enter number : ";
        cin>>arr[i];
    }
    for(i=0;i<=4;i=i+1){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

#include<iostream>
using namespace std;
void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}
int main(){
    int n,i;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i=i+1){
        cout<<"Enter number : ";
        cin>>arr[i];

    }
    doSomething(arr,n);
    cout<<"Value inside function: "<<arr[0]<<endl;
    return 0;
}

