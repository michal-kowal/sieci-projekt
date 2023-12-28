#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <QString>

enum packetType{
    P_LOGIN_USER,
    P_ASK_LOGIN_USER,
    P_USER_NOT_EXIST,
    P_USER_EXIST,
    P_SEND_LOGIN,
    P_SEND_PASSWORD,
    P_SEND_LOGIN_LOG,
    P_SEND_PASSWORD_LOG,
    P_SIGNUP_SUCCES,
    P_USER_ALREADY_LOGGED_IN,
    P_LOGIN_SUCCES,
    P_WRONG_PASSWORD,
    P_LOGOUT_REQUEST,
    P_LOGOUT_CONFIRM,
    P_REQUEST_USERS_LIST,
    P_USERS_LIST,
    P_USERS_LIST_END,
    P_USERS_NEW_CHAT,
    P_NEW_CHAT_REQUEST,
    P_YES,
    P_NO,
    P_MESSAGE_DEST,
    P_MESSAGE_TEXT,
    P_MESSAGE_SEND
};

struct Message{
    QString sender;
    QString receiver;
    QString text;
};

struct Chat{
    QString receiver;
    std::vector<Message> messages;
};

struct Packet{
    packetType type;
    int size;
    char* data;
};

#endif // STRUCTURES_H
