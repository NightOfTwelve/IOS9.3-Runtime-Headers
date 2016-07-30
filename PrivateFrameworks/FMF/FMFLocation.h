//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/FMAnnotation-Protocol.h>
#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class CLLocation, FMAccuracyOverlay, FMFHandle, NSDate, NSString, UIColor, UIImage;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, FMAnnotation>
{
    _Bool _locatingInProgress;
    _Bool _isBorderEnabled;
    CLLocation *_location;
    FMAccuracyOverlay *_overlay;
    double _horizontalAccuracy;
    UIImage *_smallAnnotationIcon;
    UIImage *_smallOverlayIcon;
    UIImage *_largeOverlayIcon;
    UIImage *_largeAnnotationIcon;
    double _distanceFromUser;
    UIColor *_tintColor;
    FMFHandle *_handle;
    NSString *_longAddress;
    NSDate *_timestamp;
    NSString *_label;
    NSString *_shortAddressString;
    double _maxLocatingInterval;
    double _TTL;
    double _distance;
    NSString *_distanceDescription;
    NSString *_age;
    CDStruct_2c43369c _coordinate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *distanceDescription; // @synthesize distanceDescription=_distanceDescription;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) double TTL; // @synthesize TTL=_TTL;
@property(nonatomic) double maxLocatingInterval; // @synthesize maxLocatingInterval=_maxLocatingInterval;
@property(copy, nonatomic) NSString *shortAddressString; // @synthesize shortAddressString=_shortAddressString;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *longAddress; // @synthesize longAddress=_longAddress;
@property(retain, nonatomic) FMFHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool isBorderEnabled; // @synthesize isBorderEnabled=_isBorderEnabled;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double distanceFromUser; // @synthesize distanceFromUser=_distanceFromUser;
@property(retain, nonatomic) UIImage *largeAnnotationIcon; // @synthesize largeAnnotationIcon=_largeAnnotationIcon;
@property(retain, nonatomic) UIImage *largeOverlayIcon; // @synthesize largeOverlayIcon=_largeOverlayIcon;
@property(retain, nonatomic) UIImage *smallOverlayIcon; // @synthesize smallOverlayIcon=_smallOverlayIcon;
@property(retain, nonatomic) UIImage *smallAnnotationIcon; // @synthesize smallAnnotationIcon=_smallAnnotationIcon;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(retain, nonatomic) FMAccuracyOverlay *overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)updateHandle:(id)arg1;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)updateLocation:(id)arg1;
- (void)updateLocationForCache:(id)arg1;
- (void)_updateLocation:(id)arg1;
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
- (long long)distanceThenNameCompare:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)resetLocateInProgress:(id)arg1;
@property(nonatomic, getter=isLocatingInProgress) _Bool locatingInProgress; // @synthesize locatingInProgress=_locatingInProgress;
- (id)locationShortAddressWithAgeIncludeLocating;
- (id)locationShortAddressWithAge;
- (id)locationAge;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)agingItemTimestamp;
@property(readonly, copy, nonatomic) NSString *shortAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isThisDevice;
- (_Bool)hasKnownLocation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

