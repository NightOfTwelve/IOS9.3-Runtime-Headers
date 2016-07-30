//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKButton, GKLabel, GKOpenGraphNode, GKStoreItemInternal, NSArray, UIActivityIndicatorView, UIImageView;

@interface GKFacebookLikeButton : UIView
{
    GKStoreItemInternal *_storeItem;
    GKButton *_button;
    GKLabel *_labelView;
    UIImageView *_logoView;
    UIActivityIndicatorView *_spinner;
    UIView *_containerView;
    GKOpenGraphNode *_openGraphNode;
    NSArray *_replaceableConstraints;
    UIView *_containerSpacerLeft;
    UIView *_containerSpacerRight;
}

@property(retain, nonatomic) UIView *containerSpacerRight; // @synthesize containerSpacerRight=_containerSpacerRight;
@property(retain, nonatomic) UIView *containerSpacerLeft; // @synthesize containerSpacerLeft=_containerSpacerLeft;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(retain, nonatomic) GKOpenGraphNode *openGraphNode; // @synthesize openGraphNode=_openGraphNode;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) GKLabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) GKButton *button; // @synthesize button=_button;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
- (void)buttonPressed:(id)arg1;
- (_Bool)isEnabled;
- (id)viewForBaselineLayout;
- (void)applyConstraints;
- (void)updateContent;
- (void)observeEnterForegroundNotification:(id)arg1;
- (void)configureButtonWithTitle:(id)arg1 state:(unsigned long long)arg2 imageName:(id)arg3;
- (void)createButton;
- (void)createLogoView;
- (void)createLabelView;
- (void)createSpinner;
- (void)_commonInit;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

