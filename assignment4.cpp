//q1
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    Rectangle(int x) {
        length = x;
        breadth = x;
    }
    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);

    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;

    return 0;
}

//q2
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    ~Rectangle() { }
};

int main() {
    Rectangle r[3] = {
        Rectangle(),
        Rectangle(5),
        Rectangle(4, 6)
    };

    for(int i = 0; i < 3; i++)
        cout << "Area = " << r[i].area() << endl;

    return 0;
}

// //q3:
#include <iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor called" << endl;
    }

    ~Sample() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Sample s;
    return 0;
}

// //q4:
#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int a){ x=a; }
};

int main() {
    int *ip = new int(10);
    float *fp = new float(5.5);

    int *ia = new int[3]{1,2,3};
    float *fa = new float[2]{1.1,2.2};

    Test *obj = new Test(100);
    Test *arr = new Test[2]{ Test(1), Test(2) };

    cout << *ip << endl;
    cout << *fp << endl;
    cout << obj->x << endl;

    delete ip;
    delete fp;
    delete[] ia;
    delete[] fa;
    delete obj;
    delete[] arr;

    return 0;
}