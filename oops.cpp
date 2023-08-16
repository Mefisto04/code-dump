#include<iostream>
using namespace std;
//object is entity which has some property and behavoiur
// class Hero{
//         int Health;
//     };
// int main(){
//     //class is user defined data type
//     Hero Ramesh; //this is object initialition
//     cout<<"size of Ramesh: "<<sizeof(Ramesh);
//     return 0;
// } 


// class Hero{
        
//     };
// int main(){
//     Hero Ramesh;
//     cout<<"Size of Empty Class: "<<sizeof(Ramesh);
//     //empty class have size of 1byte for its identification 
//     return 0;
// }  


// class Hero{
//     //access modifier:- Public,Private,Protected
//     //ny defsult access modifier is private
//     public:
//         int Health;
//         char Level='B';

//     void print(){
//         //you can access private modifier inside the class 
//         cout<<Level<<endl;
//     }   
// };
// int main(){
//     //accesing properties or data members by using dot operator
//     Hero Ramesh;
//     cout<<"size of: "<<sizeof(Ramesh)<<endl;
//     cout<<"Health is: "<<Ramesh.Health<<endl;
//     cout<<"Level is: "<<Ramesh.Level<<endl;
//     return 0;
// }  


// class Hero{
//         public:
//         int Health;
//         char Level;
//     };
// int main(){
//     Hero Ramesh;
//     Ramesh.Health=75;
//     Ramesh.Level=66;
//     cout<<"size of: "<<sizeof(Ramesh)<<endl;
//     cout<<"Health is: "<<Ramesh.Health<<endl;
//     cout<<"Level is: "<<Ramesh.Level<<endl;
//     return 0;
// }  


// class Hero{
//     //concept of getter and setter
//         private:
//         int Health;
//         public:
//         char Level;

//         int getHealth(){
//             return Health;
//         }

//         char getLevel(){
//             return Level;
//         }

//         void sethealth(int h){
//             Health = h;
//         }
//         void setlevel(char ch){
//             Level = ch;
//         }
//     };
// int main(){
//     Hero Ramesh;

//     cout<<"Ramesh Health is: "<<Ramesh.getHealth()<<endl;
//     Ramesh.sethealth(70);
//     //Ramesh.Health=75;
//     Ramesh.Level=66;
//     cout<<"size of: "<<sizeof(Ramesh)<<endl;;
//     cout<<"Health is: "<<Ramesh.getHealth()<<endl;
//     cout<<"Level is: "<<Ramesh.Level<<endl;
    
//     return 0;
// }  


//  class Hero{
//     //concept of getter and setter
//         private:
//         int Health;
//         public:
//         char Level;

//         int getHealth(){
//             return Health;
//         }

//         char getLevel(){
//             return Level;
//         }

//         void sethealth(int h){
//             Health = h;
//         }
//         void setlevel(char ch){
//             Level = ch;
//         }
//     };
// int main(){
//     Hero Ramesh;

//     cout<<"Ramesh Health is: "<<Ramesh.getHealth()<<endl;
//     cout<<"Size of Ramesh: "<<sizeof(Ramesh)<<endl;
//     Ramesh.sethealth(70);
//     //Ramesh.Health=75;
//     Ramesh.Level=66;
//     cout<<"size of: "<<sizeof(Ramesh)<<endl;;
//     cout<<"Health is: "<<Ramesh.getHealth()<<endl;
//     cout<<"Level is: "<<Ramesh.Level<<endl;
    
//     return 0;
// } 



// class Hero{
//     //concept of getter and setter
//         private:
//         int Health;
//         public:
//         char Level;

//         int getHealth(){
//             return Health;
//         }

//         char getLevel(){
//             return Level;
//         }

//         void sethealth(int h){
//             Health = h;
//         }
//         void setlevel(char ch){
//             Level = ch;
//         }
//     };
// int main(){
//     //Ramesh is created by static allocation
//     Hero Ramesh;
//     cout<<"Level is: "<<Ramesh.Level<<endl;
//     cout<<"Level is: "<<Ramesh.getHealth()<<endl;

//     //Dynamic allocation
//     //heap me memory allocate huyi hai b ki
//     Hero *b= new Hero;
//     b->sethealth(385);
//     b->setlevel('S');
//     cout<<"Level is: "<<(*b).Level<<endl;
//     cout<<"Level is: "<<(*b).getHealth()<<endl;

//     cout<<"Level is: "<<b->Level<<endl;
//     cout<<"Level is: "<<b->getHealth()<<endl;
    
//     return 0;
// } 



//jab ap kisi object ko create krte hai so constructor call hota hai
// class Hero{
//     //concept of getter and setter
//         private:
//         int Health;
//         public:
//         char Level;

//     //constructor
//     //has no return value
//     //has no input parameter
//     //ye object creation ke time pe invoke hota hai
//         Hero(){
//             cout<<"Constructor Called: "<<endl;
//         }

//         int getHealth(){
//             return Health;
//         }

//         char getLevel(){
//             return Level;
//         }

//         void sethealth(int h){
//             Health = h;
//         }
//         void setlevel(char ch){
//             Level = ch;
//         }
//     };
// int main(){
//     //object created statically 
//     cout<<"hello"<<endl;
//     Hero Ramesh;
//     cout<<"Hi"<<endl;

//     //dynamically
//     Hero *h= new Hero;
   
//     return 0;
// }  

    

// class Hero{
//     //concept of getter and setter
//         private:
//         int Health;
//         public:
//         char Level;

//         //this is default constructor
//         Hero(){
//             cout<<"Constructor Called: "<<endl;
        
//         }
//         //jo apka current object hota hai,hamare case me Ramesh object hai,uska address vo this ke andr store hota hai.
//         //jo this hai vo ek pointer hai.

//         //parametric constructor
//         Hero(int Health){
//             this -> Health=Health;
//             cout<<"this is : "<<this<<endl;
//         }

//         Hero(int Health,char Level){
//             cout<<"this is : "<<this<<endl;
            
//             this -> Health=Health;
//             this-> Level=Level;
//             //here this level is belong to object level:means vo upar jo define kiya hai top pe
//             //and jo = ke bad wala level hai vo is constructor me jo level hai uski baat kr rha hai
//             //isme hamne object ke level  ke andr input wali level ko copy kr diya
//         }

//         int getHealth(){
//             return Health;
//         }

//         char getLevel(){
//             return Level;
//         }

//         void sethealth(int h){
//             Health = h;
//         }
//         void setlevel(char ch){
//             Level = ch;
//         }
//     };
// int main(){
//     //object created statically 
//     cout<<"hello"<<endl;
//     Hero Ramesh(283);
//     cout<<"Hi"<<endl;
//     cout<<"Adress of Ramesh: "<<&Ramesh<<endl;
//     Ramesh.getHealth();

//     //dynamically
//     Hero *h= new Hero(283);

//     Hero Temp(22,'b');
    
//     //this is input for that constructor
   
//     return 0;

//     //jaisi he apne khud ka constructor banaya to jo constructor bna hua hota hai khudse,vo khud se hat jayega,exist he nhi krega.
// }  



// class Hero{
    
//         public:
//         int Health;
//         char Level;

//         Hero(){
//             cout<<"Default Constructor Called: "<<endl;
        

//         }

//         Hero(int Health){
//             cout<<"this is : "<<this<<endl;
//             this -> Health=Health;
//         }

//         Hero(int Health,char Level){
//             cout<<"this is : "<<this<<endl;
            
//             this -> Health=Health;
//             this-> Level=Level;
//         }

//         void print(){
//             cout<<"Health: "<<this->Health<<endl;
//             cout<<"Level: "<<this->Level<<endl;
//         }

//         int getHealth(){
//             return Health;
//         }

//         char getLevel(){
//             return Level;
//         }

//         void sethealth(int h){
//             Health = h;
//         }
//         void setlevel(char ch){
//             Level = ch;
//         }
//     };
// int main(){
//   //object created statically 
//     cout<<"hello"<<endl;
//     Hero Ramesh(283);
//     cout<<"Hi"<<endl;
//     cout<<"Adress of Ramesh: "<<&Ramesh<<endl;
//     //dynamically
//     Hero *h= new Hero(283);
//     Hero Temp(22,'b');  

//      Hero Suresh(70,'y');
//     Suresh.print();

//     //copy constructor
//     Hero Ritesh(Suresh);
//     Ritesh.Health=Suresh.Health;
//     Ritesh.Level=Suresh.Health;
//     Ritesh.print();

//     return 0;
// }  



//#include<iostream>
//using namespace std;
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
    //encapsulation :-
    //wrapping data member and function in single capsule 
    //and capsule is a class
    //ek fully encapsulated class have all data member are private
    //advantage of encapsulation--1.data hiding, 2.if we want we can make class 'read only', 3.unit testing
   
    student first;
    cout<<"sab badhiya"<<endl;

}  **/



// class human{
//         public:
//         int height;
//         int age;
//         int weight;
//         public:
//         int getage(){
//             return this->age;
//         }
//         void setweight(int w){
//             this->weight= w;
//         }
// };
// class male: public human{
//     public:
//     string colour;

//     void sleep(){
//         cout<<"male sleeping"<<endl;
//     }
// };
// int main(){
//     //inheritence
//     //apki height apke papa jaisi hai
//     male object1;
//     cout<<"object1 age :"<<object1.age<<endl;
//     cout<<"object1 height :"<<object1.height<<endl;
//     cout<<"object1 weight :"<<object1.weight<<endl;
//     cout<<"make colour :"<<object1.colour<<endl;
//     object1.setweight(85);
//     cout<<object1.weight<<endl;
//     object1.sleep();
//     human first;
//     cout<<"sab badhiya"<<endl;
//     return 0;
//     //superclass -> Access modifier,property,data member
//     //sub class -> mode of inheritance
//     //if in supclass me DM public hai aur hm usse subclass me mode od inheritance public he hai so ans is public
//     //if supclass-public,subclass-private then ans is private
//     //if supclass-public, subclass-protected then ans is  protected.
//     //protected,public,protected
//     //protected,protected,protected
//     //protected,private,privated
//     //private,public,not accessible
//     //...  not accesseble
//     //..., not accesseble
// } 



// class human{
//         public:
//         int height;
//         int weight;
//         private:
//         int age;
//         public:
//         int getage(){
//             return this->age;
//         }
//         void setweight(int w){
//             this->weight= w;
//         }
// };
// class male: public human{
//     public:
//     string colour;

//     void sleep(){
//         cout<<"male sleeping"<<endl;
//     }
// };
// int main(){
//     male m1;
//     m1.height;//this is ans which is going to give output

// } 


// class animal{
//     //this is single inheritance
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"speaking: "<<endl;
//     }
// };
// class dog: public animal{
// };
// int main(){
//     dog d;
//     d.speak();
//     cout<<d.age<<endl;
// }  



// class animal{
//     //this is multi inheritance
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"speaking: "<<endl;
//     }
// };
// class dog: public animal{
// };
// class germanshepard: public dog{

// };
// int main(){
//     dog d;
//     d.speak();
//     cout<<d.age<<endl;

//     germanshepard g;
//     g.speak();
// }  



// class animal{
//     //this is multiple inheritance
//     public:
//     int age;
//     int weight;

//     public:
//     void bark(){
//         cout<<"speaking: "<<endl;
//     }
// };
// class human{
//     public:
//     string colour;

//     public:
//     void speak(){
//         cout<<"speaking: "<<endl;
//     }
// };

// class Hybrid: public animal, public human{

// };
// int main(){
//     Hybrid obj1;
//     obj1.speak();
//     obj1.bark();

// }  



// class A{
//     //this is hierarchical inheritance
//     //here one class is serve as parent class for more than 1 class
//     public:
//     void func1(){
//         cout<<"Inside Function 1: "<<endl;
//     }
// };
// class B:public A{
//     public:
//         void func2(){
//             cout<<"Inside function 2: "<<endl;
//         }
// };
// class C:public A{
//     public:
//         void func3(){
//             cout<<"inside fuction 3: "<<endl;
//         }
// };
// int main(){
//     A object1;
//     object1.func1();
//     B object2;
//     object2.func1();
//     object2.func2();

//     C object3;
//     object3.func1();
//     //object3.func2(); //this will not execute coz c does not have relation with b.
//     object3.func3();
// }



//inheritance ambiguity
//when c is inheritance with a and b and a,b contain same function 
//with same name and then is we call that function in c then which 
//will print at that time ambiguity will help us 

// class A{
//     public:
//     void func(){ 
//         cout<<"I am A : "<<endl;
//     }
// };
// class B{
//     public:
//         void func(){
//             cout<<"I am B : "<<endl;
//         }
// };
// class C:public A,public B{
// };
// int main(){
//     C obj;
//     obj.A::func();
// }  

//Polymorphism__OOPS
//compile time polymorphism
 