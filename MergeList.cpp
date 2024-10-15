class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode(0);
        ListNode* current = merged;

        while (list1 && list2){
            if (list1 -> val < list2 -> val){
                current -> next = new ListNode(list1 -> val);
                list1 = list1 -> next;
            }
            else {
                current -> next = new ListNode(list2 -> val);
                list2 = list2 -> next;
            }
            current = current -> next;
        }
        if (list1) {
            current -> next = list1;
        } else {
            current -> next = list2;
        }
        return merged -> next;
    }
};

// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]