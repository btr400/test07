#include <cstdio>


const int MAX_TITLE_LENGTH = 50;
const int MAX_QUANTITY_VALUE = 50;
const char* const SHOPPING_DATA_FILE = "shoppinglist.csv";

const int MAX_NO_OF_RECS = 15;

struct ShoppingRec {
   char m_title[MAX_TITLE_LENGTH + 1];
   int m_quantity;
   bool m_bought;
};


bool openFileForRead();
bool openFileForOverwrite();
void closeFile();
bool freadShoppingRec(ShoppingRec* rec);
void fwriteShoppintRec(const ShoppingRec* rec);
