//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface BRAccount : NSObject
{
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

+ (_Bool)refreshCurrentLoggedInAccount;
+ (id)currentLoggedInAccountWithError:(id *)arg1;
+ (id)currentCachedLoggedInAccountWithError:(id *)arg1;
+ (_Bool)_refreshCurrentLoggedInAccountForcingRefresh:(_Bool)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSData *perAppAccountIdentifier; // @synthesize perAppAccountIdentifier=_perAppAccountIdentifier;
- (id)containerWithPendingChanges;
- (_Bool)logoutWithError:(id *)arg1;
- (_Bool)loginWithError:(id *)arg1;
- (id)initWithAccountID:(id)arg1;
- (void)dealloc;

@end

