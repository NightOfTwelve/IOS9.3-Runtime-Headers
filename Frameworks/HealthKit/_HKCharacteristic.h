//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKCharacteristic : NSObject
{
}

+ (id)_quantityTypeForCharacteristicType:(id)arg1;
+ (id)_canoncialUnitForCharacteristicType:(id)arg1;
+ (_Bool)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id *)arg3;
+ (_Bool)_validateFitzpatrickSkinType:(id)arg1 error:(id *)arg2;
+ (_Bool)_validateBloodType:(id)arg1 error:(id *)arg2;
+ (_Bool)_validateBiologicalSex:(id)arg1 error:(id *)arg2;
+ (_Bool)_validateDateOfBirth:(id)arg1 error:(id *)arg2;
+ (_Bool)_validateCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id *)arg3;

@end

