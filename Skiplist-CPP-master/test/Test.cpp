#include <iostream>
#include "skiplist.h"
int main()
{
    SkipList<int, int> skipList(1);
    std::cout << skipList._header->key << " : " << skipList._header->value << "  " << skipList._skip_list_level <<std::endl;
    skipList.insert_element(23,34);
      std::cout << skipList._header->forward[0]->key << " : " << skipList._header->forward[0]->value << "   " << skipList._skip_list_level << std::endl; 
      skipList.display_list();
     skipList.insert_element(123,234);
    std::cout << skipList._header->forward[0]->key << " : " << skipList._header->forward[0]->value << "   " << skipList._skip_list_level << std::endl; 
    
    std::cout << skipList._header->forward[1]->key << " : " << skipList._header->forward[1]->value << "   " << skipList._skip_list_level << std::endl;
  
  skipList.display_list();
}