#include <iostream>
#include "Session.h"
#include "Graph.h"
using namespace std;


int main(int argc, char** argv){

//    std::vector<std::vector<int>> v1 = {
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    };
//    std::vector<std::vector<int>> v2 = {
//            {1,2,3},
//            {7,8,9}
//    };
//
//
//    Graph a(v1);
//    Graph b(v2);
//
//
//    b = Graph(v1);//move ass
//
//    Graph c((Graph&&)Graph(a));
//
//    cout << "A";

    Session s("/home/spl211/Assignments/Assignment1/json_files/config1.json");

    //Session s1 = s;

    Session s2((Session&&)Session(s));

    return 0;
}