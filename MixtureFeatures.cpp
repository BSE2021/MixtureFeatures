// MixtureFeatures.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using array of structures with pointer
// Passing pointer into a function and returning a pointer

#include <iostream>
#include <string>
using namespace std;

//definiton of structure
struct Cats {
    string breed;
    string color;
    string behaviour;
    string description;

    //constructor to initialize; keep the same name as structure
    Cats(string br="Siamese", string c="Black", string be="Cool", string d="Siamese are furry") {
        breed = br;
        color = c;
        behaviour = be;
        description = d;
    }


};

Cats* input_cats(struct Cats* p) {
    int i;
    for (i = 0; i < 2; i++) {
        cout << "\nEnter the breed of the cat: ";
        cin >> p->breed;
        cout << "\nEnter the color of the cat: ";
        cin >> p->color;
        cout << "\nEnter the behaviour of the cat: ";
        cin >> p->behaviour;
        cout << "\nEnter the description of the cat: ";
        cin >> p->description;
        p++;
    }
    return (p);
}

int main()
{
    struct Cats cat[2];
    struct Cats* ptr , **pptr, *catptr;

    ptr = cat;
    pptr = &ptr;

    cout << "The memory address of cat array begin at " << ptr << endl;
    cout << "The memory address of the pointer to pointer " << pptr << endl;

    //accessing members of the structure array variable with pointers
    cout << "\n Breed: " << ptr->breed << endl;
    cout << "\n Color: " << ptr->color << endl;
    cout << "\n Behaviour: " << ptr->behaviour << endl;
    cout << "\n Description: " << ptr->description << endl;
    //Passing the pointer to the array of structures into the function
    catptr = input_cats(ptr);

   

}

