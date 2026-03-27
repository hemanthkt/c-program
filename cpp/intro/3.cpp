#include <iostream>
using namespace std;

int main()
{
    int var;
    float f;
    char c;
    string str;
    cout << "Enter the values for int, float, char, and str\n";
    cin >> var >> f >> c;

    cin.ignore();
    getline(cin, str);

    cout << "value is var: " << var << endl;
    cout << "value are: " << f << endl
         << c << endl
         << str << endl;

    cout << "Hello world\n";
    return 0;
}

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(0);
        ListNode *tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode *newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode *result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};