//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface GKContiguousContainerView : UIView
{
    _Bool _vertical;
    _Bool _applyOrthogonalConstraints;
    UIView *_baselineView;
    double _overlap;
    NSArray *_replaceableConstraints;
    struct UIEdgeInsets _insets;
}

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3 applyOrthogonalConstraints:(_Bool)arg4;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(nonatomic) _Bool applyOrthogonalConstraints; // @synthesize applyOrthogonalConstraints=_applyOrthogonalConstraints;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double overlap; // @synthesize overlap=_overlap;
@property(nonatomic) UIView *baselineView; // @synthesize baselineView=_baselineView;
- (id)viewForBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)replaceSubviews:(id)arg1;
- (void)_addContiguousSubviews:(id)arg1;
- (void)dealloc;

@end

