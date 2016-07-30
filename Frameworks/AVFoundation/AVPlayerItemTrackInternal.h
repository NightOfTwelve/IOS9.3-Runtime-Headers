//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVWeakReference, NSDictionary, NSString;

@interface AVPlayerItemTrackInternal : NSObject
{
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    _Bool figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    _Bool enabled;
    _Bool enabledWasSet;
    _Bool disableColorMatching;
    _Bool disableColorMatchingWasSet;
}

@end

