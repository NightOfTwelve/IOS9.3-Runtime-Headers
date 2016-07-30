//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPassContent.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>
{
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSDictionary *_localizedSuspendedReasonsByAID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID; // @synthesize localizedSuspendedReasonsByAID=_localizedSuspendedReasonsByAID;
@property(copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property(copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property(copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property(copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property(copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;
@property(copy, nonatomic) NSString *cobrandName; // @synthesize cobrandName=_cobrandName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

