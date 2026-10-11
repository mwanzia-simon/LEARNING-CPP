# C++ MINI-PROJECT CHALLENGE 2

## ATM Banking Simulator

### 1. PROJECT GOAL

Create a simple console-based ATM simulator using C++. The program should allow a user to check their account balance, deposit money, withdraw money, and exit the program.

### 2. MENU

Your program should display a menu similar to this:

```text
===== ATM BANKING SYSTEM =====

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit

Enter your choice:
```

The menu should keep appearing until the user chooses Exit.

### 3. REQUIREMENTS

**A. Check Balance**

* Display the current account balance.

**B. Deposit Money**

* Ask the user to enter the amount to deposit.
* Accept only positive amounts.
* Update the balance after a successful deposit.
* Display the new balance.

**C. Withdraw Money**

* Ask the user to enter the amount to withdraw.
* Accept only positive amounts.
* Do not allow withdrawals greater than the available balance.
* Update the balance after a successful withdrawal.
* Display the new balance.

**D. Exit**

* Stop the program when the user chooses Exit.

**E. Input Validation**

* Display an error message for invalid menu choices.
* Reject zero or negative deposits and withdrawals.
* Prevent withdrawals when the account has insufficient funds.

### 4. INITIAL ACCOUNT BALANCE

Start the account with a balance of 1,000.

### 5. EXAMPLE INTERACTION

```text
===== ATM BANKING SYSTEM =====

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit

Enter your choice: 2

Enter deposit amount: 500

Deposit successful!
Current balance: 1500
```

### 6. C++ CONCEPTS TO PRACTICE

* Variables and data types
* Input and output (`cin` and `cout`)
* Conditional statements (`if`, `else if`, `else`)
* Loops (`while` or `do-while`)
* Switch statements
* Functions
* Classes and objects
* Constructors
* Input validation

### 7. RULES

1. Create a class named `BankAccount`.
2. Include an attribute to store the account balance.
3. Use a constructor to initialize the account balance to 1,000.
4. Create a function named `checkBalance()`.
5. Create a function named `deposit()`.
6. Create a function named `withdraw()`.
7. Use a loop to repeat the ATM menu.
8. Use a `switch` statement to handle menu choices.
9. Validate all deposit and withdrawal amounts.
10. Never allow a withdrawal greater than the available balance.

### 8. BONUS CHALLENGE

After completing the basic version, improve your program by adding:

* PIN verification before accessing the ATM.
* A transaction history showing previous deposits and withdrawals.
* A daily withdrawal limit.
* An option to change the PIN.

### 9. RECOMMENDED BUILD ORDER

1. Create the `BankAccount` class with its balance attribute.
2. Write the constructor.
3. Implement `checkBalance()`.
4. Implement `deposit()` with input validation.
5. Implement `withdraw()` with input validation.
6. Create the menu using a loop and a `switch` statement.
7. Test successful transactions and invalid inputs.
8. Attempt the bonus challenges.

### 10. STARTING TASK

Begin by creating the `BankAccount` class, its balance attribute, and its constructor.

Do not attempt to write the entire program at once. Build and test one feature at a time.

**CHALLENGE RULE:** Try to solve the project independently before looking for a complete solution. If you get stuck, ask for a hint rather than immediately asking for the answer.
