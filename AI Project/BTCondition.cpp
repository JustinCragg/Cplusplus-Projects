#include "BTCondition.h"

/****************************************************************************************************
****************************************************************************************************/
BTCondition::BTCondition(bool* value) {
    m_value = value;
}

/****************************************************************************************************
****************************************************************************************************/
result::result BTCondition::execute(Creature* creature) {
    if (*m_value == true) {
        return result::Success;
    }
    else {
        return result::Failure;
    }
}