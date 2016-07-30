//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/NSCopying-Protocol.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : NSObject <NSCopying>
{
    HAPMetadataConstraints *_constraints;
    NSString *_manufacturerDescription;
    NSString *_format;
    NSString *_units;
}

@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(retain, nonatomic) HAPMetadataConstraints *constraints; // @synthesize constraints=_constraints;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCharacteristicMetadata:(id)arg1;
- (id)_generateValidConstraints:(id)arg1;
- (id)description;
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;

@end

