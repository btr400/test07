
#include <cstdio>

extern const char* const SHOPPING_DATA_FILE ;
extern FILE* sfptr ;

extern const int MAX_TITLE_LENGTH = 50;

struct ShoppingRec {
   char m_title[MAX_TITLE_LENGTH + 1];
   int m_quantity;
   bool m_bought;
};
