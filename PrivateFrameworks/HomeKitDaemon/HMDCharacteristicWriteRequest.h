//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest
{
    id _value;
    NSData *_authorizationData;
}

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;
@property(readonly, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;

@end
