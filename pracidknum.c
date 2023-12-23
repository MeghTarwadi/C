#include <stdio.h>

char stack[100];
int top = -1;

void push(char item) {
    stack[++top] = item;
}

char pop() {
    return stack[top--];
}

int isDigitOrLetter(char symbol) {
    return ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9'));
}

int precedence(char symbol) {
    if (symbol == '^') return 3;
    else if (symbol == '*' || symbol == '/') return 2;
    else if (symbol == '+' || symbol == '-') return 1;
    else return 0;
}

string infixToPostfix(char infix[]) 
{
    int i = 0, k = 0;
    char symbol;

    while ((symbol = infix[i++]) != '\0') {
        if (isDigitOrLetter(symbol))
            postfix[k++] = symbol;
        else if (symbol == '(')
            push(symbol);
        else if (symbol == ')') {
            while (stack[top] != '(')
                postfix[k++] = pop();
            top--; // Discard '('
        } else { // Operator
            while (precedence(stack[top]) >= precedence(symbol))
                postfix[k++] = pop();
            push(symbol);
        }
    }
    postfix[k] = '\0';
    return 
}

int main() 
{
    char infix[100];

    printf("Enter infix expression: ");
    gets(infix);
    
    
    printf("Postfix expression: \n");
    puts(infixToPostfix(infix););

    return 0;
}
