//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol UMXPCServer <NSObject>
- (void)removeUserSyncTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)addUserSyncTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)fetchUserSwitchBlockingTaskListWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)removeUserSwitchBlockingTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)addUserSwitchBlockingTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)switchToLoginUserWithPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)switchToUser:(NSDictionary *)arg1 passcodeData:(NSData *)arg2 context:(NSData *)arg3 pid:(int)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)unregisterStakeholderForPID:(int)arg1 status:(unsigned long long)arg2 reason:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)registerUserSyncStakeholderForPID:(int)arg1 machServiceName:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)registerBubblePopStakeholderForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerCriticalUserSwitchStakeholderForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerUserSwitchStakeholderForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

