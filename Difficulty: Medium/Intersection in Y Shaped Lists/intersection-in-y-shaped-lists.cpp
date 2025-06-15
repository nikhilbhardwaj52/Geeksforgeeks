// Linked list Node
/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        int count1 = 0, count2 = 0;
        Node *curr1 = head1;
        Node *curr2 = head2;

        // Step 1: Count lengths of both lists
        while (curr1 != NULL) {
            count1++;
            curr1 = curr1->next;
        }

        while (curr2 != NULL) {
            count2++;
            curr2 = curr2->next;
        }

        // Step 2: Advance the longer list by the difference in lengths
        int diff = abs(count1 - count2);
        curr1 = head1;
        curr2 = head2;

        if (count1 > count2) {
            while (diff--) curr1 = curr1->next;
        } else {
            while (diff--) curr2 = curr2->next;
        }

        // Step 3: Traverse both lists together and find intersection
        while (curr1 != NULL && curr2 != NULL) {
            if (curr1 == curr2)
                return curr1;  // Found intersection
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return NULL;  // No intersection
    }
};
