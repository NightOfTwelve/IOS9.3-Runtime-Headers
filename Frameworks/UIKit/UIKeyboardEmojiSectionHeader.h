//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView
{
    UILabel *_emojiSectionHeader;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useVibrantBlend;
@property(nonatomic) double headerOpacity;
@property(nonatomic) double headerFontSize;
@property(copy, nonatomic) UIColor *headerTextColor;
@property(copy, nonatomic) NSString *headerName;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

