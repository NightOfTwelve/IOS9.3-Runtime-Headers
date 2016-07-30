//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLConnection;

struct CLConnectionClient {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    id _field2;
    id _field3;
    id _field4;
    struct CLConnection *_field5;
    struct CLNameValuePair _field6;
    struct CLNameValuePair _field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field8;
    CDUnknownBlockType _field9;
    CDUnknownBlockType _field10;
    id _field11;
    CDUnknownBlockType _field12;
    CDUnknownBlockType _field13;
};

struct CLNameValuePair {
    CDUnknownFunctionPointerType *_field1;
    struct __CFDictionary *_field2;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct ostream;

struct value_ostream {
    _Bool _field1;
    struct ostream *_field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    int padding1;
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double padding2;
    double padding3;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
    int referenceFrame;
} CDStruct_0aa5cb5c;

typedef struct {
    char identifier[512];
    char onBehalfOfIdentifier[512];
    int type;
    _Bool notifyOnEntry;
    _Bool notifyOnExit;
    _Bool conservativeEntry;
    union {
        struct {
            char proximityUUID[512];
            unsigned short major;
            unsigned short minor;
            int definitionMask;
            _Bool notifyEntryStateOnDisplay;
        } beaconAttributes;
        struct {
            CDStruct_2c43369c center;
            double radius;
            double desiredAccuracy;
            int referenceFrame;
        } circularAttributes;
    } ;
} CDStruct_3afce72c;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

