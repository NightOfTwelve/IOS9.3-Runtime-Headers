//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DUniformArrayShaderVariables;

__attribute__((visibility("hidden")))
@interface TSCH3DLightUniformArrayShaderVariables : NSObject
{
    TSCH3DUniformArrayShaderVariables *mVariables;
}

- (id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2;
- (void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2;
- (unsigned long long)arraySize;
- (void)initializeArrayVariables;
- (void)dealloc;
- (void)initializePrefix:(id)arg1;

@end

