//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface BBObserverGatewayAddBulletinRequest : NSObject
{
    NSString *_bulletinID;
    NSString *_sectionID;
    NSDate *_timeout;
    CDUnknownBlockType _timeoutHandler;
}

@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(retain, nonatomic) NSDate *timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (void)dealloc;

@end

