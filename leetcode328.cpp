#328. Odd Even Linked List
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int cnt = 0;
        ListNode *ans = head;
        if (head == NULL || head -> next == NULL)
            return ans;
        ListNode *originalnext = head -> next;
        ListNode *tmp;
        while (head != NULL) {
            ListNode *nextrun = head -> next;
            if (cnt % 2 == 0) {
                if (head -> next != NULL && head -> next -> next != NULL) //save value for next
                    tmp = head -> next -> next -> next;
                else //save value for next last
                    tmp = NULL;
                if (head -> next != NULL && head -> next -> next != NULL) //assign next for mod 2 == 0
                    head -> next = head -> next -> next;
                else //assign next for mod 2 == 0 last one
                    head -> next = originalnext;
            }
            else //assign next for mod 2 == 1
                head -> next = tmp;
            head = nextrun;
            cnt++;
        }
        return ans;
    }
};
