//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, NSString, UIColor, UIImageView;

@interface UIActivityIndicatorView : UIView <NSCoding>
{
    double _duration;
    _Bool _animating;
    long long _activityIndicatorViewStyle;
    long long _actualActivityIndicatorViewStyle;
    _Bool _hidesWhenStopped;
    _Bool _hasShadow;
    _Bool _clockWise;
    _Bool _spinning;
    _Bool _useArtwork;
    _Bool _useOutlineShadow;
    double _width;
    UIColor *_color;
    long long _spokeCount;
    UIColor *_shadowColor;
    double _innerRadius;
    long long _spokeFrameRatio;
    NSArray *_spokeImages;
    double _spinningDuration;
    NSString *_artBackupKeyString;
    NSString *_highlightArtBackupKeyString;
    UIImageView *_internalView;
    NSArray *_spokeHighlightImages;
    struct CGSize _shadowOffset;
}

+ (struct CGSize)size;
+ (struct CGSize)defaultSizeForStyle:(long long)arg1;
+ (_Bool)_isModernStyle:(long long)arg1;
+ (id)_loadResourcesForStyle:(long long)arg1;
@property(readonly) NSArray *spokeHighlightImages; // @synthesize spokeHighlightImages=_spokeHighlightImages;
@property(nonatomic) _Bool useOutlineShadow; // @synthesize useOutlineShadow=_useOutlineShadow;
@property(readonly, nonatomic) UIImageView *internalView; // @synthesize internalView=_internalView;
@property(readonly, nonatomic) NSString *artBackupKeyString; // @synthesize artBackupKeyString=_artBackupKeyString;
@property(nonatomic) _Bool useArtwork; // @synthesize useArtwork=_useArtwork;
@property(nonatomic) double spinningDuration; // @synthesize spinningDuration=_spinningDuration;
@property _Bool spinning; // @synthesize spinning=_spinning;
@property(nonatomic) _Bool clockWise; // @synthesize clockWise=_clockWise;
@property(readonly) NSArray *spokeImages; // @synthesize spokeImages=_spokeImages;
@property(nonatomic) long long spokeFrameRatio; // @synthesize spokeFrameRatio=_spokeFrameRatio;
@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) long long spokeCount; // @synthesize spokeCount=_spokeCount;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setAnimating:(_Bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)_externalStyleForStyle:(long long)arg1;
- (long long)_internalStyleForStyle:(long long)arg1;
- (_Bool)_shouldGoBackToBaseStyle;
- (_Bool)_shouldGoToCustomStyle;
- (_Bool)_hasCustomColor;
- (_Bool)_isArtWorkBased;
- (_Bool)_canCustomize;
- (void)generateImages;
- (_Bool)_canCustomizeStyle:(long long)arg1;
- (id)_layoutInfosForStyle:(long long)arg1;
- (long long)_customStyleForStyle:(long long)arg1;
- (id)_highlightColorForStyle:(long long)arg1;
- (id)_defaultColorForStyle:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_feedTheGear;
- (void)_updateInternalViewFrameWithBounds:(struct CGRect)arg1;
- (id)_generateModernImagesForImages:(id)arg1 color:(id)arg2;
- (id)_generateImagesForColor:(id)arg1 highlight:(_Bool)arg2;
- (id)_styleNameForStyle:(long long)arg1;
@property(readonly, nonatomic) NSString *highlightArtBackupKeyString; // @synthesize highlightArtBackupKeyString=_highlightArtBackupKeyString;
- (id)artBackupKey;
- (id)_artBackupKeyWithHighlight:(_Bool)arg1;
- (id)_imageForStep:(long long)arg1 withColor:(id)arg2;
- (_Bool)_isModern;
- (double)_alphaValueForStep:(long long)arg1;
- (double)_widthForGearWidth:(double)arg1;
- (double)_spokeLengthForGearWidth:(double)arg1;
- (double)_spokeWidthForGearWidth:(double)arg1;
- (void)tintColorDidChange;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setAnimationDuration:(double)arg1;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)_tearDownAnimation;
- (void)startAnimating;
- (void)_setUpAnimation;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;

@end

