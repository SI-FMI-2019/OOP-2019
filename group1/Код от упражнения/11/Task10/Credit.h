//
// Created by lyubo on 14.05.20 г..
//

#ifndef TASK10_CREDIT_H
#define TASK10_CREDIT_H

#include "BasePayment.h"

class Credit: public BasePayment {
public:
    void pay(const double& to_pay) override;
};


#endif //TASK10_CREDIT_H
