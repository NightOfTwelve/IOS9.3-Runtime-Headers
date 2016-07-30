//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileAnimator.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUTileViewAnimator : PUTileAnimator
{
    NSMapTable *__synchronizedAnimationGroupsByTransition;
}

@property(readonly, nonatomic) NSMapTable *_synchronizedAnimationGroupsByTransition; // @synthesize _synchronizedAnimationGroupsByTransition=__synchronizedAnimationGroupsByTransition;
- (void).cxx_destruct;
- (void)transition:(id)arg1 didComplete:(_Bool)arg2;
- (void)_performAnimations:(CDUnknownBlockType)arg1 withOptions:(id)arg2;
- (void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2;
- (void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2;
- (id)init;

@end

