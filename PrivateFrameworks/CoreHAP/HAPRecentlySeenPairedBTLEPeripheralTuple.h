//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : NSObject
{
    _Bool _notifyingCharacteristicUpdated;
    double _lastSeen;
    CBPeripheral *_peripheral;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_identifier;
    NSMutableDictionary *_cachedDescriptors;
    NSMapTable *_cachedSignatures;
}

@property(readonly, nonatomic) NSMapTable *cachedSignatures; // @synthesize cachedSignatures=_cachedSignatures;
@property(readonly, nonatomic) NSMutableDictionary *cachedDescriptors; // @synthesize cachedDescriptors=_cachedDescriptors;
@property(nonatomic) _Bool notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) NSNumber *statusFlags; // @synthesize statusFlags=_statusFlags;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(readonly, nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
- (void).cxx_destruct;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6;

@end

