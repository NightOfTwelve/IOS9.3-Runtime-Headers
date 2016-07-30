//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface SLSheetImagePreviewView : UIView
{
    UIImage *_image;
    UIImageView *_imageView;
    NSArray *_principalAttachments;
}

+ (id)fallbackPreviewImage;
@property(retain, nonatomic) NSArray *principalAttachments; // @synthesize principalAttachments=_principalAttachments;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

