#include <iostream>     /* File: balanced-paren.cpp */
#include <stack>
using namespace std;

const char L_PAREN    = '('; const char R_PAREN    = ')';
const char L_BRACE    = '{'; const char R_BRACE    = '}';
const char L_BRACKET  = '['; const char R_BRACKET  = ']';
bool balanced_paren(const char* expr);

int main()  // To check if a string has balanced parentheses
{
    char expr[1024];
    cout << "Input an expression containing parentheses: ";
    cin >> expr;
    cout << boolalpha << balanced_paren(expr) << endl;
    return 0; 
}

bool check_char_stack(stack<char>& a, char c)
{
    if (a.empty()) return false;
    if (a.top() != c) return false;
    a.pop(); return true;
}
bool balanced_paren(const char* expr) 
{
    stack<char> a;
    for (const char* s = expr; *s != '\0'; ++s) 
        switch (*s)
        {
            case L_PAREN: case L_BRACE: case L_BRACKET: 
                a.push(*s); break;
                
            case R_PAREN: 
                if (!check_char_stack(a, L_PAREN)) return false;
                break;
            case R_BRACE: 
                if (!check_char_stack(a, L_BRACE)) return false;
                break;
            case R_BRACKET:
                if (!check_char_stack(a, L_BRACKET)) return false;
                break;

            default: break;
        }

    return a.empty();
}
