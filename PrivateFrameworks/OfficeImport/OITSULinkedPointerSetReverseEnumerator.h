//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator
{
    OITSULinkedPointerSetEntry *mTail;
    OITSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithLastEntry:(id)arg1;

@end

