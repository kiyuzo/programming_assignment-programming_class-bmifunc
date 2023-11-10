#include <iostream>
using namespace std;

// TO COUNT BMI
float countBMI(int weight, int height) {
    float heightInMeters = static_cast<float>(height) / 100.0;
    return static_cast<float>(weight) / (heightInMeters * heightInMeters);
}

// BMI FOR OLD PEOPLE (>18)
string determineBMIold(int weight, int height) {
    float bmi = countBMI(weight, height);

    if(bmi <= 18.5){
        return "Underweight";
    }
    else if(bmi < 25){
        return "Normal";
    }
    else if(bmi < 30){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}

// BMI FOR MALE CHILDREN
string male9(int bmi){
    if(bmi <= 14){
        return "Underweight";
    }
    else if(bmi < 18){
        return "Normal";
    }
    else if(bmi < 20){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string male12(int bmi){
    if(bmi <= 15){
        return "Underweight";
    }
    else if(bmi < 20){
        return "Normal";
    }
    else if(bmi < 22){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string male14(int bmi){
    if(bmi <= 16){
        return "Underweight";
    }
    else if(bmi < 22){
        return "Normal";
    }
    else if(bmi < 24){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string male16(int bmi){
    if(bmi <= 17){
        return "Underweight";
    }
    else if(bmi < 24){
        return "Normal";
    }
    else if(bmi < 26){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string male18(int bmi){
    if(bmi <= 18){
        return "Underweight";
    }
    else if(bmi < 26){
        return "Normal";
    }
    else if(bmi < 28){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}

void maleChild(int age, int bmi){
    if(age <= 9){
        cout << male9(bmi) << endl;
    }
    else if(age <= 12){
        cout << male12(bmi) << endl;
    }
    else if(age <= 14){
        cout << male14(bmi) << endl;
    }
    else if(age <= 16){
        cout << male16(bmi) << endl;
    }
    else if(age <= 18){
        cout << male18(bmi) << endl;
    }

}

// BMI FOR FEMALE CHILDREN
string female10(int bmi){
    if(bmi <= 14){
        return "Underweight";
    }
    else if(bmi < 19){
        return "Normal";
    }
    else if(bmi < 21){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string female12(int bmi){
    if(bmi <= 15){
        return "Underweight";
    }
    else if(bmi < 21){
        return "Normal";
    }
    else if(bmi < 24){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string female14(int bmi){
    if(bmi <= 16){
        return "Underweight";
    }
    else if(bmi < 23){
        return "Normal";
    }
    else if(bmi < 26){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}
string female18(int bmi){
    if(bmi <= 17){
        return "Underweight";
    }
    else if(bmi < 25){
        return "Normal";
    }
    else if(bmi < 28){
        return "Overweight";
    }
    else{
        return "Obese";
    }
}

void femaleChild(int age, int bmi){
    if(age <= 9){
        cout << female10(bmi) << endl;
    }
    else if(age <= 12){
        cout << female12(bmi) << endl;
    }
    else if(age <= 14){
        cout << female14(bmi) << endl;
    }
    else if(age <= 18){
        cout << female18(bmi) << endl;
    }

}

// DETERMINING IF CHILD
void determineBMIchild(int weight, int height, string gender, int age){
    float bmi = countBMI(weight, height);

    if(gender == "male"){
        maleChild(age, bmi);
    }
    else if(gender == "female"){
        femaleChild(age, bmi);
    }
}

// SEPARATOR
void printSeparatingLine(){
    cout << "----------------------------------------------------------------------------" << endl;
}

void intro() {
    cout << "Welcome to the BMI Calculator! Thank you for using this program." << endl;
    cout << "This program calculates your BMI and determines your weight category." << endl;
    cout << "You just need to enter your weight and height." << endl;
    cout << "Let's get started!" << endl;
}

void closing() {
    cout << "Thank you for using the BMI Calculator!" << endl;
    cout << "Remember to prioritize a healthy lifestyle!! <3" << endl;
    cout << "Have a great day!" << endl;
}

void menu(){

    int weight, height, age;
    string gender;

    cout << "Please input your age : ";
    cin >> age;

    if(age < 19){
        cout << "Please input your gender ('male' or 'female') : ";
        cin >> gender;
    }

    cout << "Please input your weight (in kg): ";
    cin >> weight;
    cout << "Please input your height (in cm): ";
    cin >> height;

    if(age < 19){
        cout << "According to The BMI, you are ";
        determineBMIchild(weight, height, gender, age);
    }
    else{
        cout << "According to The BMI, you are : " << determineBMIold(weight, height) << endl;
    }


}

int main() {
    printSeparatingLine();
    intro();
    printSeparatingLine();
    menu();
    printSeparatingLine();
    closing();
    printSeparatingLine();
    return 0;
}
