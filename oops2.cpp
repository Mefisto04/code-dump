#include<iostream>
using namespace std;
/**class student{
        private:
        string name;
        int age;
        int height;
        public:
        int getage(){
            return this->age;
        }
};

int main(){
    //encapsulation
    //wrapping data member and function in single capsule 
    //and capsule is a class
    //ek fully encapsulated class have all data member are private
    //advantage of encapsulation--1.data hiding, 2.if we want we can make class 'read only', 3.unit testing
   
    student first;
    cout<<"sab badhiya"<<endl;

}  **/


/**class human{
        public:
        int height;
        int age;
        int weight;
        public:
        int getage(){
            return this->age;
        }
        void setweight(int w){
            this->weight= w;
        }
};
class male: public human{
    public:
    string colour;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};
int main(){
    //inheritence
    //apki height apke papa jaisi hai
    male object1;
    cout<<"object1 age :"<<object1.age<<endl;
    cout<<"object1 height :"<<object1.height<<endl;
    cout<<"object1 weight :"<<object1.weight<<endl;
    cout<<"make colour :"<<object1.colour<<endl;
    object1.setweight(85);
    cout<<object1.weight<<endl;
    object1.sleep();
    human first;
    cout<<"sab badhiya"<<endl;
    return 0;
    //superclass -> Access modifier,property,data member
    //sub class -> mode of inheritance
    //if in supclass me DM public hai aur hm usse subclass me mode od inheritance public he hai so ans is public
    //if supclass-public,subclass-private then ans is private
    //if supclass-public, subclass-protected then ans is  protected.
    //protected,public,protected
    //protected,protected,protected
    //protected,private,privated
    //private,public,not accessible
    //...  not accesseble
    //..., not accesseble
} **/


/**class human{
        public:
        int height;
        int weight;
        private:
        int age;
        public:
        int getage(){
            return this->age;
        }
        void setweight(int w){
            this->weight= w;
        }
};
class male: public human{
    public:
    string colour;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};
int main(){
    male m1;
    m1.height;//this is ans which is going to give output

} **/


/**class animal{
    //this is single inheritance
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking: "<<endl;
    }
};
class dog: public animal{
};
int main(){
    dog d;
    d.speak();
    cout<<d.age<<endl;
}  **/


/**class animal{
    //this is multi inheritance
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking: "<<endl;
    }
};
class dog: public animal{
};
class germanshepard: public dog{

};
int main(){
    dog d;
    d.speak();
    cout<<d.age<<endl;

    germanshepard g;
    g.speak();
} **/

/**class animal{
    //this is multiple inheritance
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"speaking: "<<endl;
    }
};
class human{
    public:
    string colour;

    public:
    void speak(){
        cout<<"speaking: "<<endl;
    }
};

class Hybrid: public animal, public human{

};
int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

}  **/


/**class A{
    //this is hierarchical inheritance
    //here one class is serve as parent class for more than 1 class
    public:
    void func1(){
        cout<<"Inside Function 1: "<<endl;
    }
};
class B:public A{
    public:
        void func2(){
            cout<<"Inside function 2: "<<endl;
        }
};
class C:public A{
    public:
        void func3(){
            cout<<"inside fuction 3: "<<endl;
        }
};
int main(){
    A object1;
    object1.func1();
    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    //object3.func2(); //this will not execute coz c does not have relation with b.
    object3.func3();
}  **/


//inheritance ambiguity
//when c is inheritance with a and b and a,b contain same function 
//with same name and then is we call that function in c then which 
//will print at that time ambiguity will help us 
/**class A{
    public:
    void func(){
        cout<<"I am A : "<<endl;
    }
};
class B{
    public:
        void func(){
            cout<<"I am B : "<<endl;
        }
};
class C:public A,public B{
};
int main(){
    C obj;
    obj.A::func();
}  **/


//Polymorphism
//