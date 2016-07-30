//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIGestureRecognizer, UILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionHeaderView : UIView
{
    _Bool _showSeeMoreButton;
    _Bool _showSeparator;
    NSString *_providerName;
    UILabel *_sectionHeaderLabel;
    UILabel *_seeMoreButton;
    UIGestureRecognizer *_seeMoreGestureRecognizer;
    UIView *_separator;
    NSArray *_seeMoreButtonConstraints;
    NSArray *_marginConstraints;
    NSMutableArray *_scaledConstraints;
    SEL _action;
    id _target;
}

+ (double)intrinsicContentHeightForFont:(id)arg1;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSMutableArray *scaledConstraints; // @synthesize scaledConstraints=_scaledConstraints;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(retain, nonatomic) NSArray *seeMoreButtonConstraints; // @synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIGestureRecognizer *seeMoreGestureRecognizer; // @synthesize seeMoreGestureRecognizer=_seeMoreGestureRecognizer;
@property(retain, nonatomic) UILabel *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property(retain, nonatomic) UILabel *sectionHeaderLabel; // @synthesize sectionHeaderLabel=_sectionHeaderLabel;
@property(nonatomic) _Bool showSeeMoreButton; // @synthesize showSeeMoreButton=_showSeeMoreButton;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)updateConstraints;
- (void)contentSizeDidChange;
- (void)refreshMarginConstraints;
- (void)layoutMarginsDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

