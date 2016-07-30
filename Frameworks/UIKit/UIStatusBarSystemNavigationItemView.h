//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView
{
    int _currentLabelCompressionLevel;
    UIButton *_button;
    double _maxWidth;
}

@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) int currentLabelCompressionLevel; // @synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (void)userDidActivateButton:(id)arg1;
- (long long)labelLineBreakMode;
- (_Bool)layoutImageOnTrailingEdge;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
@property(retain, nonatomic) NSString *title;
- (double)updateContentsAndWidth;
- (struct CGSize)_buttonSize;
- (_Bool)_shouldLayoutImageOnRight;

@end

