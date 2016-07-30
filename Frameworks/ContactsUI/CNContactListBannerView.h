//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNContact, CNContactFormatter, NSArray, NSDictionary, NSLayoutConstraint, NSString, UIGestureRecognizer, UILabel;
@protocol CNContactListBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListBannerView : UIView
{
    id <CNContactListBannerViewDelegate> _delegate;
    CNContactFormatter *_formatter;
    NSString *_footnoteTitle;
    NSString *_footnoteValue;
    CNContact *_meContact;
    UIGestureRecognizer *_longPress;
    UIView *_photoViewContainer;
    UIView *_labelViewContainer;
    UIView *_photoView;
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    NSString *_footnoteSpacer;
    NSDictionary *_viewsDict;
    NSArray *_currentConstraints;
    NSLayoutConstraint *_bannerHeightConstraint;
    NSArray *_photoViewConstraints;
}

+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) NSArray *photoViewConstraints; // @synthesize photoViewConstraints=_photoViewConstraints;
@property(readonly, nonatomic) NSLayoutConstraint *bannerHeightConstraint; // @synthesize bannerHeightConstraint=_bannerHeightConstraint;
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(readonly, nonatomic) NSDictionary *viewsDict; // @synthesize viewsDict=_viewsDict;
@property(retain, nonatomic) NSString *footnoteSpacer; // @synthesize footnoteSpacer=_footnoteSpacer;
@property(readonly, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) UIView *labelViewContainer; // @synthesize labelViewContainer=_labelViewContainer;
@property(readonly, nonatomic) UIView *photoViewContainer; // @synthesize photoViewContainer=_photoViewContainer;
@property(retain, nonatomic) UIGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(copy, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(copy, nonatomic) NSString *footnoteValue; // @synthesize footnoteValue=_footnoteValue;
@property(copy, nonatomic) NSString *footnoteTitle; // @synthesize footnoteTitle=_footnoteTitle;
@property(retain, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) __weak id <CNContactListBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellWasSingleTapped:(id)arg1;
- (void)cellWasLongPressed:(id)arg1;
- (void)showMenu;
- (void)menuDidHide:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)_updateLabel;
- (void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3;
- (id)constrainstWithoutPhotoViewWithLeftMargin:(double)arg1 minimumRightMargin:(double)arg2 minimumVerticalMargins:(double)arg3;
- (id)constrainstWithPhotoViewWithLeftMargin:(double)arg1 minimumRightMargin:(double)arg2 minimumVerticalMargins:(double)arg3;
@property(readonly, nonatomic) _Bool footnoteTitleShouldBeGrey;
- (id)constraintsForPhotoView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

