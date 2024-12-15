#include "../../include/models/CardTypeModel.hpp"
#include <string>

std::string CardTypeModel::GetType(){
    return this->type;
}

float CardTypeModel::GetCreditLimit(){
    return this->credit_limit;
}

float CardTypeModel::GetInterestRate(){
    return this->interest_rate;
}

void CardTypeModel::SetType(bool is_credit, bool is_debit, std::string type){
    this->is_credit = is_credit;
    this->is_debit = is_debit;
    this->type = type;
}