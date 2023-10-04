#include <iostream>

class Cube {
    public:
        float height {};
        float width {};
        float length {};
        Cube(float height, float width, float length) {
            height = height;  
            width = width;
            length = length;
        }
        void getVolume() {
        cout << "Volume of the cube is: " << height * width * length << '\n';
        }
        
};

int main() {
    float height {};
    float width {};
    float length {};    
    cout<< "Enter the height, width, length: \n";
    cin>> height >> width >> length;
    Cube cubeOne(height, width, length);
    cubeOne.getVolume();
    return 0;
}
