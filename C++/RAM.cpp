#include "header.hh"

/* Constructor. */

// Empty constructor.
RAM::RAM()
{

}

// Constructor with RAM's data.
RAM::RAM(int capacity, int price)
{
    this->capacity = capacity;
    this->price = price;
}

/* Setter and Getter. */

// Set capacity attribute.
void RAM::setCapacity(int capacity)
{
    this->capacity = capacity;
}

// Set price attribute.
void RAM::setPrice(int price)
{
    this->price = price;
}

// Get capacity attribute.
int RAM::getCapacity()
{
    return capacity;
}

// Get price attribute.
int RAM::getPrice()
{
    return price;
}

/* Destructor. */

RAM::~RAM()
{

}