#include <vector>
using namespace std;

int main() {
    vector<int> vec = use_vector();
    for (auto v: vec) {
        cout << v << endl;
    }
}

vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    vector <int> vec {10, 20, 30, 40, 50};
    vec[0] = 100;
    vec[4] = 1000;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vec;
}