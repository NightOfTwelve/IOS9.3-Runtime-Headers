//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CUTPowerAssertion : NSObject
{
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}

- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

