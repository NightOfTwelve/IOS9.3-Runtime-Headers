//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol TPStarkHardPauseButtonDelegate;

@interface TPStarkInCallHardPauseButton : UIButton
{
    id <TPStarkHardPauseButtonDelegate> _delegate;
}

@property id <TPStarkHardPauseButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hardPausePressed;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)init;

@end

