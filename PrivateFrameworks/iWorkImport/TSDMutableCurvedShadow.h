//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDCurvedShadow.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableCurvedShadow : TSDCurvedShadow
{
}

@property(copy, nonatomic) TSUColor *TSUColor; // @dynamic TSUColor;
@property(nonatomic) struct CGColor *color; // @dynamic color;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(nonatomic) double radius; // @dynamic radius;
@property(nonatomic) double angle; // @dynamic angle;
@property(nonatomic) double offset; // @dynamic offset;
@property(nonatomic) double curve; // @dynamic curve;

// Remaining properties
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;

@end
