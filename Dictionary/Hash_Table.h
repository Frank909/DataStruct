#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "dictionary.h"
#include <string>
#include <iostream>


using std::string;

template<class T>
class hash{
public:
    size_t operator()(const T the_key) const;
};

/* a specialization with type string */
template<>
class hash<string>{
public:
    size_t operator()(const string the_key) const {
      unsigned long hash_value = 0;
      int length = (int) the_key.length();
      for (int i=0; i<length; i++)
        hash_value = 5 * hash_value + the_key.at(i);
      return size_t(hash_value);
    }
};

/* = LINEAR PROBING = 
 *
 * The easiest way to find a place to put a value in the table is to search the table for 
 * the next available bucket.
 *
 * On the other side, the search begins at the home bucket f(k) of the key k we are searching
 * for and continues by examining successive buckets in the table until one of the following
 * conditions happens:
 *   i) a bucket containing a pair with key k is reached
 *  ii) an empty bucket is reached
 * iii) we return to the home bucket
 */


/* hash_table class with linear probing */

template<class K, class E>
struct mypair;

template<class K, class E>
class hash_table: public dictionary<K,E> {
public:
    bool empty() const{
      return (dsize == 0);
    };

    int size() const{
      return dsize;
    };

    void erase(const K& k);
    void modify(const K& k, const E& e);

    hash_table(int);	    // the constructor

    void create(){};

    int search(const K& ) const;

    mypair<K, E>* find(const K& ) const;

    void insert( mypair< K, E>& );

private:
    mypair<K, E>** table;    // the hash table
    hash<K> hashm;		            // maps type K to nonnegative integer
    int dsize;		                // number of pairs in dictionary
    int divisor;		            // hash function divisor
};

template<class K, class E>
hash_table<K,E>::hash_table(int the_divisor) {
  divisor = the_divisor;
  dsize = 0;

  table = new mypair<K, E>* [divisor];
  for (int i=0; i<divisor; i++)
    table[i] = NULL;
}

/* This method returns a bucket b in the table that satisfies exactly one of the following:
 * 1) table[b] points to a pair whose key is the_key
 * 2) no pair in the table has the key the_key, table[b] is NULL
 * 3) no pair in the table has the the_key, table[b] has a key other than the_key, and the
 *   table is full
 */

template<class K, class E>
int hash_table<K,E>::search(const K& the_key) const {
  int i = (int) hashm(the_key) % divisor;   // the home bucket
  int j = i;
  do {
    if (table[j] == NULL || table[j]->first == the_key)
      return j;
    j = (j+1) % divisor;                    // the next bucket
  } while (j != i);

  return j;                                 // the table is full
}

/* The method hash_table<K,E>::find */

template<class K, class E>
mypair< K, E>* hash_table<K,E>::find(const K& the_key) const {
  // search the table
  int b = search(the_key);
  // see if a match was found at table[b]
  if (table[b] == NULL || table[b]->first != the_key)
    return NULL;    // no match
  return table[b];  // matching pair
}

/* = INSERTING =
 *
 * It begins by invoking the method search. If the returned bucket b is empty, then there is no
 * pair in the table with key the_pair.first and the pair the_pair may be inserted into this
 * bucket. If the returned bucket is not empty, then it either contains a pair with key the_pair.first
 * or the table is full. In the former case we change the second component of the pair stored 
 * in the bucket to the_pair.second; in the latter, we throw an exception
 */

template<class K, class E>
void hash_table<K,E>::insert( mypair<K, E>& the_pair) {
  // search the table for a matching element
  int b = search(the_pair.first);
  // chack if matching element found
  if (table[b] == NULL){
    // no matching element and table not full
    table[b] = new mypair<K,E> (the_pair);
    dsize++;
  } else {
    // check id duplicate or table full
    if (table[b]->first == the_pair.first)
      // duplicate, change table[b]->second
      table[b]->second = the_pair.second;
    else{
        throw "table is full";
        // table is full
      // throw the exception hash_table_full();
    }
  }
}

template<class K, class E>
void hash_table<K,E>::erase(const K& k){
    if(table[search(k)] != NULL)
        table[search(k)]->first = NULL;
    else
        std::cout << "\n Chiave non presente" << std::endl;
}

template<class K, class E>
void hash_table<K,E>::modify(const K& k, const E& e){
    if(table[search(k)] != NULL)
        table[search(k)]->second = e;
}

#endif