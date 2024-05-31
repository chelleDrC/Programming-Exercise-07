#include <iostream>
#include <string>
#include "ProductInventory.h"

using namespace std;

// Function prototypes
void ProgramDesc();
void InputDetails(string* name, string* brand, float* price, int* quantity, string* description, float* size, string* color, string* category);
void electronicsAttribute(string *newmodel, string *newtechnicalSpec, string *newwarranty);
void clothingAttribute(string *newmaterials);
void printProductDetails(Electronics electronic, Clothings clothing);

int main() {
    // Variable Declarations
    string name, brand, description, color, category, materials,
    model, technicalSpecifications, warranty;
    float price, size;
    int quantity, inheritance = 0; //0 for Electronics 1 for Clothing

    // Function calls
    ProgramDesc();

    // ELECTRONICS
    cout << endl << "Enter details for electronics" << endl;
    // Input details for Product attributes
    InputDetails(&name, &brand, &price, &quantity, &description, &size, &color, &category);
    // Input details for Electronics
    electronicsAttribute(&model, &technicalSpecifications, &warranty);
    // Create instance of Electronics
    Electronics electronic(model, technicalSpecifications, warranty, name, brand, price, quantity, description, size, color, category);

    // CLOTHING
    cout << endl << "Enter details for clothing" << endl;
    // Input details for Product attributes
    InputDetails(&name, &brand, &price, &quantity, &description, &size, &color, &category);
    // Input details for Clothing
    clothingAttribute(&materials);
    // Create instance of Clothing
    Clothings clothing(materials, name, brand, price, quantity, description, size, color, category);

    // Print product details
    printProductDetails(electronic, clothing);

    return 0;
}

// Function to display program description
void ProgramDesc(){
    cout << "This program creates an inventory of products."   << endl;
    cout << "It creates two products: electronics and clothing." << endl;
    cout << "It then prints the details of each product." << endl;
    cout << "Programmer: Richelle S. de Arce"  << endl;
}

// Function to input product details
void InputDetails(string* name, string* brand, float* price, int* quantity, string* description, float* size, string* color, string* category) {
    cout << "Enter product name: ";
    getline(cin, *name);
    cout << "Enter brand: ";
    getline(cin, *brand);
    cout << "Enter price: $";
    cin >> *price;
    cout << "Enter quantity: ";
    cin >> *quantity;
    cin.ignore(); // Ignore newline character
    cout << "Enter description: ";
    getline(cin, *description);
    cout << "Enter size (if applicable, otherwise enter 0): ";
    cin >> *size;
    cin.ignore(); // Ignore newline character
    cout << "Enter color: ";
    getline(cin, *color);
    cout << "Enter category: ";
    getline(cin, *category);
}

// Function to input electronics attributes
void electronicsAttribute(string *newmodel, string *newtechnicalSpec, string *newwarranty) {
    cout << "Enter model: ";
    getline(cin, *newmodel);
    cout << "Enter technical specifications: ";
    getline(cin, *newtechnicalSpec);
    cout << "Enter warranty: ";
    getline(cin, *newwarranty);
}

// Function to input clothing attributes
void clothingAttribute(string *newmaterials) {
    cout << "Enter materials: ";
    getline(cin, *newmaterials);
}

// Function to print product details
void printProductDetails(Electronics electronic, Clothings clothing) {
    cout << "\nElectronic Product Details: " << endl;
    cout << "---------------------------------" << endl;
    cout << "Name: " << electronic.getName() << endl;
    cout << "Brand: " << electronic.getBrand() << endl;
    cout << "Price: $" << electronic.getPrice() << endl;
    cout << "Quantity: " << electronic.getQuantity() << endl;
    cout << "Description: " << electronic.getDescription() << endl;
    cout << "Size: " << electronic.getSize() << endl;
    cout << "Color: " << electronic.getColor() << endl;
    cout << "Category: " << electronic.getCategory() << endl;
    cout << "Model: " << electronic.getModel() << endl;
    cout << "Technical Specifications: " << electronic.getTechnicalSpecifications() << endl;
    cout << "Warranty: " << electronic.getWarranty() << endl;

    cout << "\nClothing Product Details: " << endl;
    cout << "---------------------------------" << endl;
    cout << "Name: " << clothing.getName() << endl;
    cout << "Brand: " << clothing.getBrand() << endl;
    cout << "Price: $" << clothing.getPrice() << endl;
    cout << "Quantity: " << clothing.getQuantity() << endl;
    cout << "Description: " << clothing.getDescription() << endl;
    cout << "Size: " << clothing.getSize() << endl;
    cout << "Color: " << clothing.getColor() << endl;
    cout << "Category: " << clothing.getCategory() << endl;
    cout << "Material: " << clothing.getMaterial() << endl;
}
