//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDTCCUtilities : NSObject
{
}

+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;
+ (_Bool)clearAllTCCStatesForAccountTypeID:(id)arg1;
+ (id)allTCCStatesForAccountTypeID:(id)arg1;
+ (_Bool)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (_Bool)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(_Bool)arg3;
+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (_Bool)TCCSupportedForAccountTypeID:(id)arg1;

@end

