//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface GKRoute : NSObject
{
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (_Bool)matchesURL:(id)arg1 parameters:(id *)arg2;
- (_Bool)matchesURL:(id)arg1;
- (id)nonParameterCharacterSet;
- (void)dealloc;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (id)initWithString:(id)arg1;

@end
