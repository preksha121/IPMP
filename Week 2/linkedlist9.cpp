Node *intersectionOfTwoLinkedLists(Node *l1, Node *l2)
{
    if (l1 == NULL || l2 == NULL)
        return NULL;

    Node *a = l1;
    Node *b = l2;

    while (a != b)
    {
        a = a == NULL ? l1 : a->next;
        b = b == NULL ? l2 : b->next;
    }

    return a;
}
