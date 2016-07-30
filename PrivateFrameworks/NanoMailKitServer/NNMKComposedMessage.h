//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NNMKComposedMessage : NSObject <NSSecureCoding>
{
    _Bool _includeAttachments;
    NSString *_composedMessageId;
    unsigned long long _sendingType;
    NSArray *_to;
    NSArray *_cc;
    NSString *_subject;
    NSString *_body;
    NSString *_referenceMessageId;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property(retain, nonatomic) NSString *referenceMessageId; // @synthesize referenceMessageId=_referenceMessageId;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(retain, nonatomic) NSArray *to; // @synthesize to=_to;
@property(nonatomic) unsigned long long sendingType; // @synthesize sendingType=_sendingType;
@property(retain, nonatomic) NSString *composedMessageId; // @synthesize composedMessageId=_composedMessageId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithNewId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

