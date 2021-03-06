//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, NSString;

@interface MCDButton : UIButton
{
    CALayer *_focusColorLayer;
    _Bool _showBezelInTouch;
    NSString *_labelTemplateString;
}

+ (id)buttonWithType:(long long)arg1;
@property(nonatomic) _Bool showBezelInTouch; // @synthesize showBezelInTouch=_showBezelInTouch;
@property(copy, nonatomic) NSString *labelTemplateString; // @synthesize labelTemplateString=_labelTemplateString;
- (void).cxx_destruct;
- (id)colorForKnobFocused;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchContentSelected;
- (void)_updateButtonStyle;
- (void)layoutSubviews;
- (id)_buttonBackGroundColorTouch;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;
- (void)willMoveToWindow:(id)arg1;
- (void)focusedViewDidChange;
- (_Bool)canBecomeFocused;

@end

