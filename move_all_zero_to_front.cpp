// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void moveZeroes(struct Node **head)
{

    Node *curr = *head, *prev = *head;
    curr = curr->next;
    while (curr)
    {
        if (curr->data == 0)
        {
            prev->next = curr->next;
            curr->next = *head;
            *head = curr;

            curr = prev->next;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}