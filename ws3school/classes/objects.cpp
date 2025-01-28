// A car class with some attributes
class Car {
    public:
        string brand;
        sting model;
        int year;
}
int main() {
    Car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "X5";
    carobj1.year = 1999;

    cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
}