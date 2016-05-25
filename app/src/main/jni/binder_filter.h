//
// Created by David Wu on 5/8/16.
//

#ifndef PICKY_BINDER_FILTER_H
#define PICKY_BINDER_FILTER_H

struct bf_user_filter {
    int action;
    int uid;
    char* message;
    char* data;

    int context;
    int context_type;
    int context_int_value;
    char* context_string_value;
};

#endif //PICKY_BINDER_FILTER_H
