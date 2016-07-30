//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CKActionMenuController, NSArray, UIImageView, UIVisualEffectView;

@interface CKActionMenuView : UIView
{
    _Bool _collapsed;
    _Bool _touchInside;
    NSArray *_actionMenuItems;
    unsigned long long _defaultActionIndex;
    CKActionMenuController *_actionMenuController;
    NSArray *_presentationActionMenuItems;
    unsigned long long _presentationDefaultActionIndex;
    UIVisualEffectView *_blurView;
    UIImageView *_maskView;
    struct CGPoint _presentationTargetPosition;
    struct CGRect _presentationTargetBounds;
}

+ (void)collapseAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isTouchInside) _Bool touchInside; // @synthesize touchInside=_touchInside;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) struct CGPoint presentationTargetPosition; // @synthesize presentationTargetPosition=_presentationTargetPosition;
@property(nonatomic) struct CGRect presentationTargetBounds; // @synthesize presentationTargetBounds=_presentationTargetBounds;
@property(nonatomic) unsigned long long presentationDefaultActionIndex; // @synthesize presentationDefaultActionIndex=_presentationDefaultActionIndex;
@property(copy, nonatomic) NSArray *presentationActionMenuItems; // @synthesize presentationActionMenuItems=_presentationActionMenuItems;
@property(nonatomic) CKActionMenuController *actionMenuController; // @synthesize actionMenuController=_actionMenuController;
@property(nonatomic) unsigned long long defaultActionIndex; // @synthesize defaultActionIndex=_defaultActionIndex;
@property(copy, nonatomic) NSArray *actionMenuItems; // @synthesize actionMenuItems=_actionMenuItems;
- (void)configureForPresentationAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)actionMenuItemAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)setCollapsed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionMenuGestureRecognized:(id)arg1;
- (void)dismissActionMenuViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentActionMenuViewFromPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3 backgroundFilters:(id)arg4;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)dealloc;

@end
