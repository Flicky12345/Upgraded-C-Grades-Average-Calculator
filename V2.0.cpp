#include <iostream>
using namespace std;

void sayHakdog(){
   cout << "Hello, This is Derrick's practice code." <<endl;
   cout << "I'm a BSITAGD student trying to learn C++" <<endl;
}

void typeYes(){
    string question= "Y";
    string typein;

    cout << "Type Y if you want to proceed with my project, and N if no" <<endl;
    cin >> typein;

    if (question == typein){
        cout << "Thanks for trying out my project." <<endl;
    } else{

        cout << "Thanks, you can now close the project.";
    }

}


void tryOut(){
    cout << "First project to try will be my Grade Card Average Calculator.";

    string PhraseOne = "Please Enter your grade in" <<endl;
    string subjects[] = { "Mathematics", "Science", "ESP", "PEH", "Filipino", "English", "AP"};

    float grades[6];

    cout << PhraseOne << " " << subjects[0] <<endl;
    cin >> grades[0];

    cout << PhraseOne << " " << subjects[1] <<endl;
    cin >> grades[1];

    cout << PhraseOne << " " << subjects[2] <<endl;
    cin >> grades[2];

    cout << PhraseOne << " " << subjects[3] <<endl;
    cin >> grades[3];

    cout << PhraseOne << " " << subjects[4] <<endl;
    cin >> grades[4];

    cout << PhraseOne << " " << subjects[5] <<endl;
    cin >> grades[5];

    cout << PhraseOne << " " << subjects[6] <<endl;
    cin >> grades[6];

    cout << (grades [0] + grades [1] + grades [2] + grades [3] + grades [4] + grades [5] + grades [6]) / 7;
}

int main(){
    sayHakdog();
    typeYes();
    tryOut();
    return 0;
}