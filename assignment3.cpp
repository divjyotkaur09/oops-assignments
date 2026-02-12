// //Q1(a)
#include <iostream>
using namespace std;

class A{
public:
    int x;
    void set(int a){ x=a; }
    void show(){ cout<<x<<endl; } 
};
int main(){
    A o,*p;
    p=&o;
    o.set(10);
    o.show();
    p->set(20);
    p->show();
}
// //(b) 
#include <iostream>
using namespace std;

class A{
    int x;
public:
    void set(int x){ this->x=x; }
    void show(){ cout<<x; }
};
int main(){
    A a;
    a.set(5);
    a.show();
}

// //Q2
#include <iostream>
using namespace std;

class B;
class A{
    int x;
public:
    A(int a){ x=a; }
    friend void swap(A&,B&);
    void show(){ cout<<x<<endl; }
};
class B{
    int y;
public:
    B(int b){ y=b; }
    friend void swap(A&,B&);
    void show(){ cout<<y<<endl; }
};
void swap(A &a,B &b){
    int t=a.x; a.x=b.y; b.y=t;
}
int main(){
    A a(10); B b(20);
    swap(a,b);
    a.show(); b.show();
}

// //Q3
#include <iostream>
using namespace std;

class B;
class A{
    int x;
public:
    A(int a){ x=a; }
    friend int add(A,B);
};
class B{
    int y;
public:
    B(int b){ y=b; }
    friend int add(A,B);
};
int add(A a,B b){
    return a.x+b.y;
}
int main(){
    A a(10); B b(20);
    cout<<add(a,b);
}

// //Q4
#include <iostream>
using namespace std;

class B;
class A{
    int x;
public:
    A(){ x=100; }
    friend class B;
};
class B{
public:
    void show(A a){ cout<<a.x; }
};
int main(){
    A a; B b;
    b.show(a);
}

// //Q5
#include <iostream>
using namespace std;

class R{
    int l,b;
public:
    void get(){ cin>>l>>b; }
    void area(){ cout<<l*b<<endl; }
};
int main(){
    R r[3];
    for(int i=0;i<3;i++) r[i].get();
    for(int i=0;i<3;i++) r[i].area();
}

// //Q6
#include <iostream>
using namespace std;

inline int cube(int x){
    return x*x*x;
}
int main(){
    int n; cin>>n;
    cout<<cube(n);
}

// //Q7(a) 
#include <iostream>
using namespace std;

class A{
public:
    int x;
};
A fun(A a){
    a.x+=10;
    return a;
}
int main(){
    A a,b;
    a.x=10;
    b=fun(a);
    cout<<a.x<<endl<<b.x;
}
// //(b)
 #include <iostream>
using namespace std;

class A{
public:
    int x;
};
A fun(A &a){
    a.x+=10;
    return a;
}
int main(){
    A a,b;
    a.x=10;
    b=fun(a);
    cout<<a.x<<endl<<b.x;
}