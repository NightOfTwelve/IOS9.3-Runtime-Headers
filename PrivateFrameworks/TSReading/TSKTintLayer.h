//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer
{
    CALayer *_contentsLayer;
}

@property(retain, nonatomic) CALayer *contentsLayer; // @synthesize contentsLayer=_contentsLayer;
- (void)layoutSublayers;
@property struct CGColor *tintColor;
- (void)setNeedsDisplay;
- (void)setContents:(id)arg1;
- (id)contents;

@end

