//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMPanoramaPaintingStatus : NSObject
{
    double _speed;
    struct CGRect _cropRectangle;
}

@property(readonly, nonatomic) struct CGRect cropRectangle; // @synthesize cropRectangle=_cropRectangle;
@property(readonly, nonatomic) double speed; // @synthesize speed=_speed;
- (id)initWithSpeed:(double)arg1 cropRectangle:(struct CGRect)arg2;

@end

