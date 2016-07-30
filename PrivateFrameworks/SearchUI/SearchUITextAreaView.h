//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface SearchUITextAreaView : UIView
{
    UIView *_secondToLastView;
    UIView *_lastView;
    NSString *_reuseID;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    UIImageView *_secondaryImageView;
    NSArray *_richTextFields;
    UILabel *_footnoteLabel;
    UIImageView *_embeddedThumbnailView;
    NSLayoutConstraint *_embeddedThumbnailAspectConstraint;
    NSLayoutConstraint *_titleHeightConstraint;
}

+ (double)uiLabelTwoRowHeightForFont:(id)arg1;
+ (id)reuseIDForData:(id)arg1 formatter:(id)arg2;
+ (id)reuseIDForResult:(id)arg1 formatter:(id)arg2;
+ (id)_reuseIDForResult:(id)arg1 textAreaData:(id)arg2 formatter:(id)arg3;
@property(retain) NSLayoutConstraint *titleHeightConstraint; // @synthesize titleHeightConstraint=_titleHeightConstraint;
@property(retain) NSLayoutConstraint *embeddedThumbnailAspectConstraint; // @synthesize embeddedThumbnailAspectConstraint=_embeddedThumbnailAspectConstraint;
@property(retain) UIImageView *embeddedThumbnailView; // @synthesize embeddedThumbnailView=_embeddedThumbnailView;
@property(retain) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain) NSArray *richTextFields; // @synthesize richTextFields=_richTextFields;
@property(retain) UIImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property(retain) UILabel *secondaryTitleLabel; // @synthesize secondaryTitleLabel=_secondaryTitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) NSString *reuseID; // @synthesize reuseID=_reuseID;
@property(retain) UIView *lastView; // @synthesize lastView=_lastView;
@property(retain) UIView *secondToLastView; // @synthesize secondToLastView=_secondToLastView;
- (void).cxx_destruct;
- (void)updateTextWidths;
- (id)viewForLastBaselineLayout;
- (id)viewForSecondToLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithTextAreaData:(id)arg1 style:(unsigned long long)arg2 formatter:(id)arg3;
- (_Bool)updateWithTextAreaData:(id)arg1 formatter:(id)arg2;
- (_Bool)updateWithResult:(id)arg1 formatter:(id)arg2;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 formatter:(id)arg3;

@end

