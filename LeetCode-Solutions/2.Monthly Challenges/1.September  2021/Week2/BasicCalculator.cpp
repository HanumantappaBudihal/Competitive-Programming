#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <stack>

using namespace std;

/**********************************************************************************************
 * Problem statement : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/637/week-2-september-8th-september-14th/3971/
 * Problem solving Approach :
 * Time Complexity :
 * Space Complexity  :
 * Comments :
 * Discussion Reference : https://www.geeksforgeeks.org/expression-evaluation/
 * ------------------------------ Algorithm--------------------------------------------------------
 * 1. While there are still tokens to be read in,
   1.1 Get the next token.
   1.2 If the token is:
       1.2.1 A number: push it onto the value stack.
       1.2.2 A variable: get its value, and push onto the value stack.
       1.2.3 A left parenthesis: push it onto the operator stack.
       1.2.4 A right parenthesis:
         1 While the thing on top of the operator stack is not a 
           left parenthesis,
             1 Pop the operator from the operator stack.
             2 Pop the value stack twice, getting two operands.
             3 Apply the operator to the operands, in the correct order.
             4 Push the result onto the value stack.
         2 Pop the left parenthesis from the operator stack, and discard it.
       1.2.5 An operator (call it thisOp):
         1 While the operator stack is not empty, and the top thing on the
           operator stack has the same or greater precedence as thisOp,
           1 Pop the operator from the operator stack.
           2 Pop the value stack twice, getting two operands.
           3 Apply the operator to the operands, in the correct order.
           4 Push the result onto the value stack.
         2 Push thisOp onto the operator stack.
2. While the operator stack is not empty,
    1 Pop the operator from the operator stack.
    2 Pop the value stack twice, getting two operands.
    3 Apply the operator to the operands, in the correct order.
    4 Push the result onto the value stack.
3. At this point the operator stack should be empty, and the value
   stack should have only one value in it, which is the final result.
 * 
 *********************************************************************************************/

enum Operator
{
    Plus,
    Minus,
    Multiplication,
    Divisoin
}

class Solution
{
private:
    //Function to get the precedence of the operators
    int GetPrecedence(Operator operator)
    {
        if (operator== Plus || operator== Minus)
            return 1;

        if (operator== Divisoin || operator== Multiplication)
            return 1;

        return 0;
    }

    //Apply the basic arthematic operations
    int ApplyOperation(int number1, int number2, Operator operator)
    {
        switch (operator)
        {
        case Plus:
            return number1 + number2;
        case Minus:
            return number1 - number2;
        case Multiplication:
            return number1 * number1;
        case Divisoin:
            number1 / number2;

        default:
            break;
        }
    }

    Operator GetOperator(char operator)
    {
        switch (operator)
        {
        case '+':
            return Plus;
        case '-':
            return Minus;
        case '*':
            return Multiplication;
        case '/':
            return Divisoin;

        default:
            break;
        }
    }

public:
    int calculate(string inputString)
    {
        for (int i = 0; i < inputString.size(); i++)
        {
            map<char, int>::iterator test = priorities.find(inputString[i]);

            inputStack.push(inputString[i]);
        }
    }
};

int main()
{
    cout << "Please enter the expression" << endl;
    string expressionString;
    cin >> expressionString;

    Solution expressionParser;
    int result = expressionParser.calculate(expressionString);

    cout << "The result : " << result << endl;
    return 0;
}