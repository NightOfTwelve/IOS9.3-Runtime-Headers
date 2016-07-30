//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PKGlyphViewDelegate-Protocol.h>

@class NSString, PKGlyphView, UILabel;
@protocol PKPassPaymentPayStateViewDelegate;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>
{
    long long _style;
    double _glyphViewPadding;
    double _labelTopPadding;
    _Bool _enhancedContrast;
    _Bool _touchRecognizingHint;
    long long _state;
    PKGlyphView *_glyph;
    UILabel *_label;
    double _labelAlpha;
    id <PKPassPaymentPayStateViewDelegate> _delegate;
}

@property(nonatomic) id <PKPassPaymentPayStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool touchRecognizingHint; // @synthesize touchRecognizingHint=_touchRecognizingHint;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PKGlyphView *glyph; // @synthesize glyph=_glyph;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)glyphView:(id)arg1 revealingCheckmark:(_Bool)arg2;
- (void)_configureLayoutMetrics;
- (id)_labelForState:(long long)arg1 textOverride:(id)arg2;
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;
- (_Bool)_canEmphasizeState:(long long)arg1;
- (void)emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyStateWithTextOverride:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1 textOverride:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 enhancedContrast:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

