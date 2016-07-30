//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBCharacteristic, HAPCharacteristicMetadata, HAPService, NSNumber, NSString;

@interface HAPCharacteristic : NSObject
{
    _Bool _eventNotificationsEnabled;
    _Bool _shouldValidateValueAfterReading;
    NSString *_type;
    NSNumber *_instanceID;
    HAPService *_service;
    unsigned long long _properties;
    HAPCharacteristicMetadata *_metadata;
    id _value;
    unsigned long long _valueUpdateTime;
    HAPCharacteristicMetadata *_accessoryMetadata;
}

@property(readonly, nonatomic) HAPCharacteristicMetadata *accessoryMetadata; // @synthesize accessoryMetadata=_accessoryMetadata;
@property(nonatomic) _Bool shouldValidateValueAfterReading; // @synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading;
@property(nonatomic) unsigned long long valueUpdateTime; // @synthesize valueUpdateTime=_valueUpdateTime;
@property(copy, nonatomic, setter=setValue:) id value; // @synthesize value=_value;
@property(copy, nonatomic) HAPCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool eventNotificationsEnabled; // @synthesize eventNotificationsEnabled=_eventNotificationsEnabled;
@property(nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(nonatomic) __weak HAPService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqualToCharacteristic:(id)arg1;
@property(readonly, nonatomic) _Bool supportsAdditionalAuthorizationData;
- (id)propertiesDescription;
- (id)description;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 properties:(unsigned long long)arg4 eventNotificationsEnabled:(_Bool)arg5 metadata:(id)arg6;
@property(retain, nonatomic, setter=setCBCharacteristic:) CBCharacteristic *cbCharacteristic;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
- (id)_generateValidMetadata:(id)arg1;
- (void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2;

@end

