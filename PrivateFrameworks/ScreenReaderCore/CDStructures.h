//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct SCRCFingerState {
    unsigned long long identifier;
    int xDirection;
    int yDirection;
    struct SCRCMathAverageValue velocity;
    struct SCRCMathAverageValue slopeRise;
    struct SCRCMathAverageValue slopeRun;
    struct SCRCMathAverageValue distance;
    double velocityDistance;
    _Bool dragStalled;
    unsigned long long type;
    struct CGPoint startPoint;
    struct CGPoint lastPoint;
    struct CGPoint lastDownPoint;
    double orbValue;
    double altitude;
    double azimuth;
};

struct SCRCMathAverageValue {
    unsigned int samples;
    double fifo[50];
    int fifoIndex;
    double sum;
    double average;
    double current;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _SCRCStackNode {
    id _field1;
    void *_field2;
    void *_field3;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

