//q1
#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    string ISBN;
};
class Library {
    Book books[100];
    int count;
public:
    Library() {
        count = 0;
    }
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 100) return false;
        this->books[count].title = title;
        this->books[count].author = author;
        this->books[count].ISBN = ISBN;
        count++;
        return true;
    }
    bool removeBooks(string &ISBN);
    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " " << books[i].author << " " << books[i].ISBN << endl;
        }
    }
};
bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}
int main() {
    Library lib;
    string t1="Book1", a1="Author1", i1="101";
    string t2="Book2", a2="Author2", i2="102";
    string t3="Book3", a3="Author3", i3="103";
    string t4="Book4", a4="Author4", i4="104";
    string t5="Book5", a5="Author5", i5="105";

    lib.addNewBook(t1,a1,i1);
    lib.addNewBook(t2,a2,i2);
    lib.addNewBook(t3,a3,i3);
    lib.addNewBook(t4,a4,i4);
    lib.addNewBook(t5,a5,i5);

    lib.displayDetails();

    lib.removeBooks(i3);

    lib.displayDetails();

    return 0;
}
//q2
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;

    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library {
    Book books[100];
    int count;

public:
    Library() {
        count = 0;
    }

    bool addNewBook(string &title, string &author, string &ISBN) {
        books[count] = Book(title, author, ISBN);
        count++;
        return true;
    }

    bool removeBooks(string &ISBN) {
        for (int i = 0; i < count; i++) {
            if (books[i].ISBN == ISBN) {
                for (int j = i; j < count - 1; j++) {
                    books[j] = books[j + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " " << books[i].author << " " << books[i].ISBN << endl;
        }
    }
};

int main() {
    Book b1("A","B","101");
    Book b2("C","D","102");

    Book arr1[2] = {
        Book("E","F","103"),
        Book("G","H","104")
    };

    int n = 2;
    Book *arr2 = new Book[n];
    arr2[0] = Book("I","J","105");
    arr2[1] = Book("K","L","106");

    Library lib;

    string t1="M", a1="N", i1="107";
    string t2="O", a2="P", i2="108";

    lib.addNewBook(t1,a1,i1);
    lib.addNewBook(t2,a2,i2);

    lib.displayDetails();

    lib.removeBooks(i1);

    lib.displayDetails();

    delete[] arr2;

    return 0;
}
//q3
#include <iostream>
#include <string>
using namespace std;

class Account {
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;
    static long tid;

public:
    Account(long acc, double bal) : accountNumber(acc), balance(bal) {
        transactionID = 0;
        transactionType = "";
    }

    long depositAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == to) {
            balance += amount;
            transactionID = ++tid;
            transactionType = "credit";
            return transactionID;
        }
        return -1;
    }

    long creditAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == from) {
            balance -= amount;
            transactionID = ++tid;
            transactionType = "debit";
            return transactionID;
        }
        return -1;
    }

    void displayDetails() const {
        cout << accountNumber << " " << balance << endl;
    }
};

long Account::tid = 0;

int main() {
    Account a1(101,1000);
    Account a2(102,2000);
    Account a3(103,3000);
    Account a4(104,4000);
    Account a5(105,5000);

    a1.depositAmount(101,102,500);
    a2.creditAmount(101,102,300);

    a3.depositAmount(103,104,700);
    a4.creditAmount(103,104,200);

    a5.depositAmount(105,101,1000);
    a1.creditAmount(105,101,400);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}
//q4
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int a) {
        x = a;
    }
    friend int add(A, B);
};

class B {
    int y;
public:
    B(int b) {
        y = b;
    }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a(10);
    B b(20);

    int result = add(a, b);
    cout << result << endl;

    return 0;
}
//q5
#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2) {
    int r = c1.real + c2.real;
    int i = c1.imag + c2.imag;
    cout << r << "+" << i << "i" << endl;
}

int main() {
    Complex c1(2,3);
    Complex c2(4,5);

    c1.display();
    c2.display();

    sum(c1,c2);

    return 0;
}
