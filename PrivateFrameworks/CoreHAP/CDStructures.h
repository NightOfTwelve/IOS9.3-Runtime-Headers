//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct HTTPMessagePrivate {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    struct HTTPMessagePrivate *_field2;
    struct {
        char _field1[8192];
        unsigned long long _field2;
        char *_field3;
        unsigned long long _field4;
        char *_field5;
        unsigned long long _field6;
        int _field7;
        char *_field8;
        unsigned long long _field9;
        struct {
            char *_field1;
            unsigned long long _field2;
            char *_field3;
            unsigned long long _field4;
            char *_field5;
            unsigned long long _field6;
            char *_field7;
            unsigned long long _field8;
            char *_field9;
            unsigned long long _field10;
            char *_field11;
            unsigned long long _field12;
            char *_field13;
            unsigned long long _field14;
            char *_field15;
            char *_field16;
        } _field10;
        char *_field11;
        unsigned long long _field12;
        int _field13;
        char *_field14;
        unsigned long long _field15;
        unsigned char _field16;
        unsigned long long _field17;
        unsigned char _field18;
        int _field19;
    } _field3;
    unsigned char _field4;
    int _field5;
    unsigned char _field6;
    char *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned char _field11[32000];
    char *_field12;
    struct iovec _field13[2];
    struct iovec *_field14;
    int _field15;
    unsigned long long _field16;
    int _field17;
    int _field18;
    int _field19;
    void *_field20;
    void *_field21;
    void *_field22;
    void *_field23;
    void *_field24;
    void *_field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownBlockType _field27;
};

struct iovec {
    void *_field1;
    unsigned long long _field2;
};

