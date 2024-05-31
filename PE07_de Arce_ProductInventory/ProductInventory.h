#include <iostream>
#include <string>

using namespace std;

// PRODUCT CLASS
class Product {
private:
    string Name;
    string Brand;
    float Price;
    int Quantity;
    string Description;
    float Size;
    string Color;
    string Category;

public:
    // Constructor
    Product(string name, string brand, float price, int quantity, string description, float size, string color, string category)
        : Name(name), Brand(brand), Price(price), Quantity(quantity), Description(description), Size(size), Color(color), Category(category) {}

    // Getter functions
    string getName() { return Name; }
    string getBrand() { return Brand; }
    float getPrice() { return Price; }
    int getQuantity() { return Quantity; }
    string getDescription() { return Description; }
    float getSize() { return Size; }
    string getColor() { return Color; }
    string getCategory() { return Category; }

    // Setter functions
    void setName(string name) { Name = name; }
    void setBrand(string brand) { Brand = brand; }
    void setPrice(float price) { Price = price; }
    void setQuantity(int quantity) { Quantity = quantity; }
    void setDescription(string description) { Description = description; }
    void setSize(float size) { Size = size; }
    void setColor(string color) { Color = color; }
    void setCategory(string category) { Category = category; }
};

// ELECTRONIC CLASS
class Electronics : public Product {
private:
    string Model;
    string TechnicalSpecifications;
    string Warranty;

public:
    // Constructor
    Electronics(string model, string techSpecific, string warranty, string name, string brand, float price, int quantity, string description, float size, string color, string category)
        : Product(name, brand, price, quantity, description, size, color, category), Model(model), TechnicalSpecifications(techSpecific), Warranty(warranty) {}

    // Getter functions
    string getModel() { return Model; }
    string getTechnicalSpecifications() { return TechnicalSpecifications; }
    string getWarranty() { return Warranty; }

    // Setter functions
    void setModel(string model) { Model = model; }
    void setTechnicalSpecifications(string specifications) { TechnicalSpecifications = specifications; }
    void setWarranty(string warranty) { Warranty = warranty; }
};

// CLOTHING CLASS
class Clothings : public Product {
private:
    string Material;

public:
    // Constructor
    Clothings(string material, string name, string brand, float price, int quantity, string description, float size, string color, string category)
        : Product(name, brand, price, quantity, description, size, color, category), Material(material) {}

    // Getter function
    string getMaterial() { return Material; }

    // Setter function
    void setMaterial(string material) { Material = material; }
};
