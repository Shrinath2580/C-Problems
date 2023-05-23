#include<bits/stdc++.h>
using namespace std;

/*
We'll come accross 3 types of Access modifiers.
1. Public
2. Private
3. Protected

*/

class Hero {

    //properties
    //public:         //iss class ko kahi bhi access kar sakte hai, class ke ander bhi aur class ke bahar bhi


    private:
    int health;


    //private:        //iss class ko sirf class ke ander hi access kar sakte hai, class ke bahar nahi access kar payenge.     Agar kuch mention naa kiya properties ke upar toh by default voh property private hi maani jayegi.

    

    public:
    char *name;
    char level;
    static int timeToComplete;
    void print(){
        cout << endl << endl;
        cout << "Name: " << this->name << endl;
        cout << "Level " << this->level << endl;
        cout << "Health " << this->health << endl;
    }

    //getters and setters
    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }


    //creating a constructor
    Hero() {
        cout << "Simple Constructor Called " << endl;
        name = new char[100];
    }

    //Parameterised Constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }


    //copy constructor
    // Hero(Hero& temp){
    //     cout << "Copy constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    // void setName(char name[]){
    //     strcpy(this->name, name);
    // }

    Hero(Hero& temp){

        //example of Deep Copy

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

//destructor
    ~Hero(){
        cout << "Destructor Bhai Called " << endl;
    }


//Static function
    static int random() {
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main(){

/*
    //creation of object
    Hero h1;
    //h1.health = 70;     //health agar private kar diya toh yaha error aa jayega 
    h1.level = 'A';

    //use setter
    h1.setHealth(70);
    
    //use getter
    cout << "H1 health is " << h1.getHealth() << endl;

    //cout << "health is : " << h1.health << endl;    //we can access properties of class by "." operator
    cout << "Level is : " << h1.level << endl;

    //cout << "size : " << sizeof(h1) << endl;
*/


/*
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    //dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;
*/ 



/*
        //object created statically 
    //cout << "Hi" << endl;
    Hero H1;
    //cout << "Hello " << endl;

        //dynamically
    Hero *h = new Hero();
*/

/*
    Hero ramesh(10);
    //cout << "Address of ramesh " << &ramesh << endl;
    ramesh.print();

    Hero *h = new Hero(11);
    h->print();

    Hero temp(22,'B');
    temp.print();
*/

/*
    //testing copy constructor 
    Hero S(70, 'C');
    S.print();

    Hero R(S);
    R.print();
*/

/*
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor      shallow copy ho raha hai yaha pe
    Hero hero2(hero1);
    hero2.print();
    //Hero hero2 = hero1;

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();



    //Copy Assignment Operator

    hero1 = hero2;
    hero1.print();
    hero2.print(); 
*/

/* 
    //static
    Hero a;

    //dynamic
    Hero *b = new Hero();

    //manually destructor called for dynamic memory
    delete b;
*/


    //cout << Hero::timeToComplete << endl;

    cout << Hero::random() << endl;

    return 0;
}