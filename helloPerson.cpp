#include <iostream> // Input/Output stream functionality
#include <string> // C++ built-in character array container

class person{
    // First we define our data members, which by default can only be modified by our
    // member functions that we define below.
    std::string title, firstName, lastName;
    int age;
    //Anything below 'public' will be accessible to us in other parts of the code.
    public:
        // Just as in python, we define a constructor that initializes the object.
        // In C++ this function is just the name of the class
        person(std::string title, std::string firstName, std::string lastName, int age) {
            this->title = title;
            this->firstName = firstName;
            this->lastName = lastName;
            this->age = age;
        }
        // Below we will define the same four member functions we had in our python code.
        // in C++ we have to specify the return type of each function. If we don't want the
        // function to return anything, we declare it a void type.
        void greetInformal () {
            std::cout << "Hello, " << this->firstName << "!\n";
        }

        void greetFormal () {
            std::cout << "Hello, " << this->title << " " << this->lastName << "!\n";
        }

        void howOld() {
            std::cout << this->firstName << " is " << this->age << " years old.\n";
        }
        void birthday() {
            this->age +=1;
            std::cout << "Happy Birthday, " << this->firstName << "! You are now "
                      << this->age << " years old.\n";
        }
};

// This is where our computer will start executing code
int main() {
    // Storage for our user input
    std::string title, firstName, lastName;
    int age;

    // Get user input
    std::cout << "What is your title?: ";
    std::cin >> title;
    std::cout << "What is your first name?: ";
    std::cin >> firstName;
    std::cout << "What is your last name?: ";
    std::cin >> lastName;
    std::cout << "How old are you?: ";
    std::cin >> age;

    // Create the class object
    person you (title, firstName, lastName, age);

    // Execute the member functions
    you.greetInformal();
    you.greetFormal();
    you.howOld();
    you.birthday();
    you.howOld();

    // End the program

    return 0;
}
