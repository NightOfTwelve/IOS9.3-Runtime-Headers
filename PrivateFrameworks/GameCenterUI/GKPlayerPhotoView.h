//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <GameCenterUI/GKPlayerPhotoContainer-Protocol.h>

@class GKPlayer, NSString, UIImage;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer>
{
    _Bool _selected;
    GKPlayer *_player;
    UIImage *_actualImage;
    long long _onAdaptiveBackground;
}

+ (void)initialize;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isOnAdaptiveBackground) long long onAdaptiveBackground; // @synthesize onAdaptiveBackground=_onAdaptiveBackground;
@property(retain, nonatomic) UIImage *actualImage; // @synthesize actualImage=_actualImage;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (void)refreshPhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshPhoto;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

