//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface QLAVStateController : NSObject
{
    NSMutableDictionary *_clientsForPID;
    long long _currentPID;
}

+ (id)sharedController;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)_clientsForPID:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

