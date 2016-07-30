//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@class CBCharacteristic, HDHealthServicePropertyManager;

@interface HDBatteryService : HDHealthService
{
    HDHealthServicePropertyManager *_propertyManager;
    CBCharacteristic *_batteryCharacteristic;
}

+ (id)implementedProperties;
+ (id)serviceUUID;
+ (long long)serviceType;
@property(retain, nonatomic) CBCharacteristic *batteryCharacteristic; // @synthesize batteryCharacteristic=_batteryCharacteristic;
@property(nonatomic) __weak HDHealthServicePropertyManager *propertyManager; // @synthesize propertyManager=_propertyManager;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (id)handleBatteryLevel:(id)arg1;
- (void)readProperty:(id)arg1;
- (id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3;

@end

