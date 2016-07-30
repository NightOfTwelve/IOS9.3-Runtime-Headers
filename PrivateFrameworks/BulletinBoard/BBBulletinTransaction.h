//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BBBulletinTransaction : NSObject
{
    NSString *_bulletinID;
    unsigned long long _transactionID;
}

+ (id)transactionWithBulletinID:(id)arg1;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (unsigned long long)incrementTransactionID;
- (id)description;
- (void)dealloc;
- (id)initWithBulletinID:(id)arg1;

@end

