//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject
{
    _Bool _didBeginBlockAnimation;
    _Bool _allowUserInteraction;
    _Bool _isZeroDuration;
    _Bool _allowsUserInteractionToCutOffEndOfAnimation;
    _Bool _animationDidStopSent;
    CDUnknownBlockType _start;
    CDUnknownBlockType _completion;
    NSMutableArray *_systemPostAnimationActions;
}

+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool _allowsUserInteraction; // @synthesize _allowsUserInteraction=_allowUserInteraction;
- (void).cxx_destruct;
- (_Bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;

@end

