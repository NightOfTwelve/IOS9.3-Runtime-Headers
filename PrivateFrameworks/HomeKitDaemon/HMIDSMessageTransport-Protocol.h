//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSUUID;

@protocol HMIDSMessageTransport <NSObject>
+ (void)messageElementsFromDictionary:(NSDictionary *)arg1 messageName:(id *)arg2 messageIdentifier:(id *)arg3 messagePayload:(id *)arg4 target:(id *)arg5 transactionID:(id *)arg6 isRequest:(_Bool *)arg7 isResponse:(_Bool *)arg8 isNotification:(_Bool *)arg9;
+ (NSMutableDictionary *)dictionaryForMessageName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 transactionID:(NSString *)arg5 msgType:(unsigned long long)arg6;
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 destination:(NSString *)arg5 responseTimeout:(double)arg6 responseHandler:(void (^)(NSError *, NSDictionary *))arg7;
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 destination:(NSString *)arg5;
@end

