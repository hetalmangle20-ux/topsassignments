int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+ or -): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else {
        cout << "Invalid operator! Please use + or -." << endl;
    }

    return 0;
}

