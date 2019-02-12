//

//  table.h

//  W19 - Lab04

//

#ifndef table_h

#define table_h

#include "entry.h"

#include <vector>

#include <iterator>

class Table{

public:

	Table(unsigned int max_entries = 100);

	Table(unsigned int entries, std::istream& input);

	void put(unsigned int key, std::string data);

	void put(Entry e);

	std::string get(unsigned int key) const;

	bool remove(unsigned int key);

	friend std::ostream& operator<< (std::ostream& out, const Table& t);

	~Table();

	Table(const Table& t);

	Table& operator = (const Table &t);	

private:

	int max_entries;

	std::vector<Entry>* table;

	int hashFunction(int key) const;

	int inserted; // size	

};

void mergesort(Entry arr[], int size);

void merge(Entry arr[], int n1, int n2);		

#endif /* table_h */


