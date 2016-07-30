//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundImageView : UIImageView
{
    UIView *_topStripView;
    UIImageView *_customImageContainer;
    _Bool _translucent;
}

@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
- (id)image;
- (void)setImage:(id)arg1;
- (void)removeTopStripView;
- (void)updateTopStripViewCreateIfNecessary;
- (id)topStripView;

@end

