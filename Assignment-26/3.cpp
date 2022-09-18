// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;

class Cube
{
    private:
        int edge_len, vol;
    public:
        Cube() {edge_len=0; vol=0;}
        Cube(int side) {edge_len=side;}
        void setData(int l) {edge_len=l;}
        void cal_volCube() {vol=edge_len*edge_len*edge_len;}
        void showData() {cal_volCube(); cout<<"The volume of cube with edge length "<<edge_len<<" is = "<<vol<<endl; }
};

int main()
{
    Cube c1,c2(4);
    c1.showData();
    c1.setData(2);
    c1.showData();
    c2.showData();
    return 0;
}
