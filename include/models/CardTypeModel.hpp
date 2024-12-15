#pragma once


class CardTypeModel{
    private:
        bool is_credit;
        bool is_debit;
        std::string type;
        float credit_limit;
        float interest_rate;
    public:
        std::string GetType();
        float GetCreditLimit();
        float GetInterestRate();
        void SetType(bool is_credit, bool is_debit, std::string type);
        void SetCreditLimit(float credit_limit);
        void SetInterestRate(float interest_rate);
};
