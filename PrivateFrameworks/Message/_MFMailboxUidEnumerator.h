//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator
{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithMailbox:(id)arg1;
- (void)dealloc;

@end

