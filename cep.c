#include "cep.h"
#include <stdlib.h>
#include <string.h>

#define CEP_DESC_SIZE 255

typedef long int cep_num_t;

typedef struct {
    cep_num_t num;
    char[CEP_DESC_SIZE] description;
}cep_t;

/*
* Compare two cep numbers
* @param cep_num_t *num Number to be compare to a cep
* @param cep_t *cep A cep to be compare
* @return Return any number case it's true and 0 in case it's false
*/
bool compare_cep_by_num(cep_num_t *num, cep_t *cep)
{
    return *num == cep->num;
}

/*
* Compare tow descriptions
* @param char[] description The description that you want to compare
* @param cep_t *cep The cep you want to be compare
* @return Return any number case it's true and 0 in case it's false
*/
bool compare_cep_by_desc(char[] description, cep_t *cep)
{
    return str_cmp(description, cep->description) == 0;
}
