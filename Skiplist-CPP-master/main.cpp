
#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {


    SkipList<int, std::string> skipList(6);
	skipList.insert_element(1, "中国"); 
    	skipList.insert_element(112, "日本"); 
	skipList.insert_element(3, "印度"); 
	skipList.insert_element(7, "寒国"); 

	skipList.insert_element(9, "马来西亚"); 
	skipList.insert_element(19, "德国"); 
	skipList.insert_element(19, "英国"); 

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.dump_file();

    // skipList.load_file();

    skipList.search_element(9);
    skipList.search_element(18);


    skipList.display_list();

    skipList.delete_element(3);
    skipList.delete_element(7);

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.display_list();
}
