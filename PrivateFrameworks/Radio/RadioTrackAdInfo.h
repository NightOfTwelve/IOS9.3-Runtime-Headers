//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSSecureCoding-Protocol.h>

@class NSString;

@interface RadioTrackAdInfo : NSObject <NSSecureCoding>
{
    _Bool _gatewayAdSlot;
    NSString *_slotIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property(readonly, nonatomic, getter=isGatewayAdSlot) _Bool gatewayAdSlot; // @synthesize gatewayAdSlot=_gatewayAdSlot;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithAdInfoDictionary:(id)arg1;

@end

