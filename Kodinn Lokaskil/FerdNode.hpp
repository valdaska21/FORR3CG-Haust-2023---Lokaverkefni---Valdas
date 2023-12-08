#pragma once

#include "Ferd.hpp"

struct FerdNode {
    Ferd* ferdin;
    FerdNode* next;

    FerdNode(Ferd* ferdin) {
        this->ferdin = ferdin;
        this->next = nullptr;
    }

    ~FerdNode() {
        delete this->ferdin;
    }
};
