//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class WBSFluidProgressController, WBSFluidProgressState;

@protocol WBSFluidProgressControllerDelegate
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 setProgressToCurrentPosition:(WBSFluidProgressState *)arg2;
- (void)fluidProgressControllerFinishProgressBar:(WBSFluidProgressController *)arg1 animateFillFade:(_Bool)arg2;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 startFluidProgressBar:(WBSFluidProgressState *)arg2 animateFillFade:(_Bool)arg3;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 updateFluidProgressBar:(WBSFluidProgressState *)arg2;
@end

