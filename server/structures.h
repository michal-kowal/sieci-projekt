#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <iostream>

enum packetType{
    P_LOGIN_USER,
    P_ASK_LOGIN_USER,
    P_USER_NOT_EXIST,
    P_USER_EXIST,
    P_SEND_LOGIN,
    P_SEND_PASSWORD,
    P_SEND_LOGIN_LOG,
    P_SEND_PASSWORD_LOG
};

struct Packet{
    packetType type;
    int size;
    char* data;
};

struct Client{
    int fd;
    std::string username;
    std::string password;
};

#endif