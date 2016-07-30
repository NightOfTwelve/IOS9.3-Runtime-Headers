//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RadioUI/NSCopying-Protocol.h>
#import <RadioUI/NSMutableCopying-Protocol.h>
#import <RadioUI/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, RadioArtworkCollection, RadioStation;

@interface RURadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    RadioArtworkCollection *_artworkCollection;
    _Bool _hasSetArtworkCollection;
    _Bool _hasSetStationHash;
    _Bool _hasSetStationID;
    _Bool _hasSetStationName;
    _Bool _hasSetStationStringID;
    _Bool _hasValidRadioStation;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)_station;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (_Bool)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stationStringID;
@property(readonly, copy, nonatomic) NSString *stationName;
@property(readonly, nonatomic) long long stationID;
@property(readonly, copy, nonatomic) NSString *stationHash;
@property(readonly, copy, nonatomic) NSDictionary *stationDictionary;
@property(readonly, nonatomic) RadioArtworkCollection *artworkCollection;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStationStringID:(id)arg1;
- (id)initWithStation:(id)arg1;

@end

