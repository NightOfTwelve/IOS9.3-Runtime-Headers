//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CKDBackingAccount : NSObject
{
}

+ (_Bool)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;
+ (id)primaryAccountInStore:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
@property(readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property(readonly, nonatomic) NSURL *privateShareServiceURL;
@property(readonly, nonatomic) NSURL *privateCloudDBURL;
- (id)accountPropertiesForDataclass:(id)arg1;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool cloudPhotosIsEnabled;
@property(readonly, nonatomic) _Bool cloudKitIsEnabled;
@property(readonly, nonatomic) _Bool iCloudDriveAllowsCellularAccess;
@property(readonly, nonatomic) _Bool isFakeAccount;
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property(readonly, nonatomic) NSString *iCloudAuthToken;
@property(readonly, nonatomic) NSString *cloudKitAuthToken;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *dsid;
@property(readonly, nonatomic) NSString *primaryEmail;
- (id)ckAccount;
- (id)init;
- (id)_init;

@end

