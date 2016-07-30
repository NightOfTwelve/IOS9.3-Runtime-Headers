//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface ISClient : NSObject
{
    NSString *_appleClientApplication;
    NSString *_appleClientVersions;
    NSString *_identifier;
    NSLock *_lock;
    NSString *_partnerHeader;
    NSString *_userAgent;
}

+ (id)currentClient;
- (id)_appleClientVersions;
- (void)_softwareMapInvalidatedNotification:(id)arg1;
- (id)localStoreFrontID;
@property(copy) NSString *userAgent;
@property(copy) NSString *partnerHeader;
@property(copy) NSString *identifier;
@property(copy) NSString *appleClientApplication;
@property(readonly) NSString *appleClientVersions;
- (void)dealloc;
- (id)init;

@end

