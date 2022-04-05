#include <iostream>
class Box {
public:
    double getVolume(void) { return length * height; };
    void setLength(double len) { length = len; };
    void setHeight(double hei) { height = hei; };
    /* copy operand */
    Box& operator++() {
        this->length++;
        this->height++;
        return *this;
    }
private:
    double length;      // Length of a box
    double height;      // Height of a box
};

int main() {
    Box Box1;                // Declare Box1 of type Box
    double volume = 0.0;     // Store the volume of a box here
    // box 1 specification
    Box1.setLength(2.0); Box1.setHeight(2.0);
    ++Box1;

    volume = Box1.getVolume(); std::cout << "Volume of Box1 : " << volume << std::endl;   // volume of box 1
    return 0;
}
