//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/TPNumberPad.h>

#import <TelephonyUI/TPDialerKeypadProtocol-Protocol.h>

@class NSString, TPDialerSoundController;
@protocol TPDialerKeypadDelegate;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>
{
    _Bool _playsSounds;
    id <TPDialerKeypadDelegate> _delegate;
    TPDialerSoundController *_soundController;
}

+ (id)dialerNumberPadNumericCharacters;
+ (id)dialerNumberPadFullCharacters;
@property(retain) TPDialerSoundController *soundController; // @synthesize soundController=_soundController;
@property id <TPDialerKeypadDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playsSounds; // @synthesize playsSounds=_playsSounds;
- (void).cxx_destruct;
- (void)setSupportsHardPause:(_Bool)arg1;
- (_Bool)supportsHardPause;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

