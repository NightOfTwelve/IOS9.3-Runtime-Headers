//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIPinchGestureRecognizer;

@interface MPUExtrasZoomingImageInteractiveTransitionSourceContext : NSObject
{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    unsigned long long _itemIndex;
    unsigned long long _supportedZoomingImageTransitionDirections;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long supportedZoomingImageTransitionDirections; // @synthesize supportedZoomingImageTransitionDirections=_supportedZoomingImageTransitionDirections;
@property(nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (void).cxx_destruct;

@end
