using System;

class Solution
{
    public void removeLoop(Node head)
    {
        if (head == null || head.next == null)
            return;

        Node slow = head;
        Node fast = head;

        bool loop = false;

        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast)
            {
                loop = true;
                break;
            }
        }

        if (!loop)
            return;

        slow = head;

        if (slow == fast)
        {
            while (fast.next != slow)
                fast = fast.next;

            fast.next = null;
            return;
        }

        while (slow.next != fast.next)
        {
            slow = slow.next;
            fast = fast.next;
        }

        fast.next = null;
    }
}
