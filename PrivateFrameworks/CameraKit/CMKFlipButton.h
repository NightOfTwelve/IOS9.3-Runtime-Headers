//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface CMKFlipButton : UIButton
{
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (id)flipButton;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (id)_flipImage;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKFlipButtonInitialization;

@end

