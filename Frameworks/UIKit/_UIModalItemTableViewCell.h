//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIModalItemTableViewCell : UITableViewCell
{
    _Bool _showFullWidthSeparator;
    UIColor *_fullWitdhSeparatorColor;
    UIView *_fullWidthSeparatorView;
    UIView *_topSeparatorView;
    _Bool _isEnabled;
}

@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) UIColor *fullWidthSeparatorColor; // @synthesize fullWidthSeparatorColor=_fullWitdhSeparatorColor;
@property(nonatomic) _Bool showFullWidthSeparator; // @synthesize showFullWidthSeparator=_showFullWidthSeparator;
- (void)dealloc;
@property(readonly, retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

