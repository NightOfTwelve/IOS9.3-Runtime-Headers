//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSOrderedSet, UIButton, UILabel, UIView;

@interface PLPhotoSmilesCommentCell : UITableViewCell
{
    _Bool _showUserLikes;
    _Bool _isVideo;
    _Bool _showsSmileButton;
    _Bool _usesCompactSeparators;
    UILabel *_smileContentLabel;
    UIButton *_smileImageButton;
    NSOrderedSet *_userLikes;
    UIView *_styledSeparatorView;
}

+ (double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;
+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(_Bool)arg3;
+ (id)_smileStringForComments:(id)arg1;
@property(readonly, retain, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property(nonatomic) _Bool usesCompactSeparators; // @synthesize usesCompactSeparators=_usesCompactSeparators;
@property(nonatomic) _Bool showsSmileButton; // @synthesize showsSmileButton=_showsSmileButton;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSOrderedSet *userLikes; // @synthesize userLikes=_userLikes;
@property(nonatomic) _Bool showUserLikes; // @synthesize showUserLikes=_showUserLikes;
@property(readonly, retain, nonatomic) UIButton *smileImageButton; // @synthesize smileImageButton=_smileImageButton;
@property(readonly, retain, nonatomic) UILabel *smileContentLabel; // @synthesize smileContentLabel=_smileContentLabel;
- (void)layoutSubviews;
- (void)_updateContent;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

