//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface PLCroppedImageView : UIView
{
    UIImageView *_imageView;
    struct CGRect _cropRect;
}

- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) struct CGRect cropRect;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

