//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray, UIImage;

@interface CAMIrisButton : UIButton
{
    long long _irisMode;
    UIImage *__baseImage;
    NSArray *__enablingAnimationImages;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (double)enablingAnimationDuration;
+ (id)irisButton;
@property(copy, nonatomic, setter=_setEnablingAnimationImages:) NSArray *_enablingAnimationImages; // @synthesize _enablingAnimationImages=__enablingAnimationImages;
@property(readonly, nonatomic) UIImage *_baseImage; // @synthesize _baseImage=__baseImage;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
- (void).cxx_destruct;
- (void)interruptEnablingAnimation;
- (void)performEnablingAnimation;
- (void)_ensureEnablingAnimationImages;
- (id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1;
- (_Bool)_shouldLoadEnablingAnimationImages;
- (void)preloadEnablingAnimation;
- (void)_updateTintColorForMode:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMIrisButtonConfiguration;

@end

