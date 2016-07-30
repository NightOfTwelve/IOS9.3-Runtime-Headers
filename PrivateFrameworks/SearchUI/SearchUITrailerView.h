//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, SKUIPlayButton, SearchUICardViewController, UILabel;

@interface SearchUITrailerView : UIView
{
    UILabel *_titleLabel;
    SKUIPlayButton *_playButton;
    NSURL *_url;
    SearchUICardViewController *_controller;
}

@property __weak SearchUICardViewController *controller; // @synthesize controller=_controller;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)playTrailer;
- (id)initWithTitle:(id)arg1 image:(id)arg2 url:(id)arg3 controller:(id)arg4;

@end
