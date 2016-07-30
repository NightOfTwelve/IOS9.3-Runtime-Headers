//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CBPeripheralManagerDelegate-Protocol.h>

@class CBPeripheralManager, DMFControlSessionIdentifier, NSDictionary, NSString;

@interface CRKClassSessionBeacon : NSObject <CBPeripheralManagerDelegate>
{
    CBPeripheralManager *mPeripheralManager;
    NSDictionary *mBeaconAdvertisement;
    _Bool _isAdvertising;
    unsigned short _flags;
    DMFControlSessionIdentifier *_advertisedIdentifier;
}

@property(nonatomic) unsigned short flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(copy, nonatomic) DMFControlSessionIdentifier *advertisedIdentifier; // @synthesize advertisedIdentifier=_advertisedIdentifier;
- (void).cxx_destruct;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertisingClassSessionWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

