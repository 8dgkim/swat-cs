

using namespace std;



int main() {

    // clean up 
    for (int i = 0; i < 4; i++) {
        delete dogs[i]; 
    }

    delete [] dogs // clean up the memory for the array
}