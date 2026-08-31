/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if (head == NULL || head->next == NULL || head->next->next == NULL)
                return {-1, -1};

            vector<int> ans;

            ListNode* prev = head;
            ListNode* temp = head->next;
            ListNode* next = temp->next;

            int i = 1;

                 while (next != NULL) {

                    if (temp->val > prev->val &&
                        temp->val > next->val ) {

                        ans.push_back(i);
                    }

                    else if (temp->val < prev->val &&
                            temp->val < next->val ) {

                        ans.push_back(i);
                    }

                    i++;

                    prev = temp;
                    temp = next;
                    next = next->next;

                 }
                 if (ans.size() < 2)
                    return {-1, -1};

                  int mini = INT_MAX;

                for (int i = 0; i < ans.size() - 1; i++) {
                    mini = min(mini, ans[i + 1] - ans[i]);
                }

                int maxi = ans.back() - ans.front();

                return {mini, maxi};
         }
};