#include <iostream> 
#include <string>
using namespace std;   

int main() {
    
    string answer1;
    string answer2;
    int answer3; 

    // Question 1
    cout << "What is your favorite color? ";
    getline(cin, answer1); 

    // Question 2
    cout << "What is your favorite animal? ";
    getline(cin, answer2);

    // Question 3
    cout << "What is your age? ";
    cin >> answer3; 

    
    
    cout << "\n--- Your Answers ---" << std::endl;
    cout << "Favorite color: " << answer1 << std::endl;
    cout << "Favorite animal: " << answer2 << std::endl;
    cout << "Age: " << answer3 << std::endl;

    return 0;
}
