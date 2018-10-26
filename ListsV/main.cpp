#include "list_vector.h"
#include "ordered_list.h"
#include <iostream>
#include "System_out.h"

template <class T>
using ArrayList = List_vector<T>;

static unsigned int seed = std::chrono::steady_clock::now().time_since_epoch().count();

int main(){
    ArrayList<int> list1, list2;
    //List_vector<int>::position iter;
    int x;

    /* inserting three elements into the list list1 */
    x = 1;
    list1.insert(x, list1.begin());
    x = 2;
    list1.insert(x, list1.begin());
    x = 3;
    list1.insert(x, list1.begin());
    x = 4;
    list1.insert(x, list1.begin());

    /* visualizing the list list1 */
    print("list1=" << list1);
    //std::cout << "list1=" << list1;

    /* assigning the list list1 to the list list2.
     * Here we are using the operator =
     */
    list2 = list1;
    /* visualizing the list list2 */
    print("After list2=list1, list2=" << list2);

    /* comparing for equality the lists list1 and list2 */
    if (list1 == list2)
        println("list1 == list2");
    else
        println("list1 != list2");


    /* erasing the first element from the list list2 */
    list2.erase(list2.begin());
    /* visualizing the list list2 */
    print("After erasing the first element, list2=" << list2);
    /* comparing for equality the lists list1 and list2 */
    if (list1 == list2)
        println("list1 == list2");
    else
        println("list1 != list2");

    println("Size of List1: " << list1.size());
    println("Size of List2: " << list2.size() << "\n");

    list1.push_back(0);
    list1.push_front(5);

    println("5 front pushed, 0 back pushed");
    println(list1);

    list1.pop_front();
    println("List1 after front popped\n" << list1);
    list1.pop_back();
    println("List1 after back popped\n" << list1);

    Linear_list<int, int>::reverse(list1);
    println("Reversed list\n" << list1);

    ArrayList <int> palindromeList;
    palindromeList.push_back(1);
    palindromeList.push_back(2);
    palindromeList.push_back(2);
    palindromeList.push_back(1);

    bool pal = Linear_list<int, int>::palindrome(palindromeList);
    pal ? println("This list is palindrome: " << palindromeList) : println("Not palindrome: " << palindromeList);

    pal = Linear_list<int,int>::palindrome(list1);
    pal ? println("List1 is palindrome: " << list1) : println("List1 isn't palindrome: " << list1);

    list1.clear();
    println("List1 cleared: " << list1);

    Ordered_list<int> listA , listB;


    srand(seed);

    for(int i = 0; i < 10; i++){
        listA.insert(rand() % 10);
        listB.insert(rand() % 10);
    }

    println("Lista ordinata listA: " << listA);
    println("Lista ordinata listB: " << listB);

    int el = 2;/*
    println("Please enter a number to search in lists");
    std::cin >> el;*/

    if(listA.search(0))
        println("The element " << el << " was found in the listA.");
    else
        println("The element " << el << " wasn't found in the listA.");

    if(listB.search(el))
        println("The element " << el << " was found in the listB.");
    else
        println("The element " << el << " wasn't found in the listB.");

    listA.merge(listB);

    println("ListA and ListB merged." << endl << listA);

    print("Inserisci il valore da cercare e da rimuovere :");
    int a = 0;
    std::cin >> a;

    listA.search(a) ? println("Contiene il valore " << a) : println("Non contiene il valore " << a);

    listA.remove(a);
    println(listA);

    listA.search(a) ? println("Contiene il valore " << a) : println("Non contiene il valore " << a);


}
