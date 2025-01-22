#ifndef ACCOUNT_H
#define ACCOUNT_H

class account {
    public:
    // Class constructors
    account();
    account(float initial_balance);
    account(const account &a);
    // Member functions
    float deposit(float amount);
    float withdraw(float amount);
    float get_balance();
    account& operator = (const account &a);
    private:
    float balance;
};

#endif