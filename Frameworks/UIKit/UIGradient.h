//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UIGradient : NSObject
{
    CDStruct_d83abbfb *_values;
    double _height;
    struct CGShading *_shader;
}

- (void)dealloc;
- (void)fillRect:(struct CGRect)arg1;
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initVerticalWithValues:(CDStruct_d83abbfb *)arg1;

@end

