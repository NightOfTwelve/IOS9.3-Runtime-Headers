//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLHeading, CLLocation, NSString;
@protocol MKAnnotation, MKUserLocationAnnotation;

__attribute__((visibility("hidden")))
@interface MKUserLocationInternal : NSObject
{
    CLLocation *location;
    CLLocation *fixedLocation;
    CLLocation *predictedLocation;
    CLHeading *heading;
    NSString *title;
    NSString *subtitle;
    id <MKUserLocationAnnotation> _annotation;
    double timestamp;
    _Bool updating;
    double course;
    id <MKAnnotation> annotation;
}

@property(nonatomic) double course; // @synthesize course;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading;
@property(retain, nonatomic) CLLocation *predictedLocation; // @synthesize predictedLocation;
@property(retain, nonatomic) CLLocation *location; // @synthesize location;
@property(retain, nonatomic) CLLocation *fixedLocation; // @synthesize fixedLocation;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating;
- (void).cxx_destruct;

@end

