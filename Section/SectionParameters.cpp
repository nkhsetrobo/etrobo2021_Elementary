#include "SectionParameters.h"

SectionParameters::SectionParameters(){

}

/**
 * パラメータ
 * @param Section セクションパラメータ
*/

int SectionParameters::transition(int Section){
    SecParam = Section + 1;
    return SecParam;
}