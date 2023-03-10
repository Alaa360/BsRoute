
    static double insertBalance()
    {
        double balance;
        cout << "Insert Balance: ";
        cin >> balance;
        if (balance < 1500)
        {
            system("cls");
            cout << "Error, Balance not less than 1500 \n";
            cout << "Insert Balance: ";
            cin >> balance;
        }
        return balance;
    }
    static double insertSalary()
    {
        double salary;
        cout << "Insert Salary: ";
        cin >> salary;
        if (salary < 5000)
        {
            system("cls");
            cout << "Error, Salary not less than 5000 \n";
            cout << "Insert Salary: ";
            cin >> salary;
        }
        return salary;
    }
};