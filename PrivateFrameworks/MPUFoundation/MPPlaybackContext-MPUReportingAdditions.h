//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class NSData, NSString;

@interface MPPlaybackContext (MPUReportingAdditions)
@property(copy, nonatomic, setter=mpuReporting_setRecommendationData:) NSData *mpuReporting_recommendationData;
@property(copy, nonatomic, setter=mpuReporting_setFeatureName:) NSString *mpuReporting_featureName;
@property(readonly, nonatomic, getter=mpuReporting_isQuickPlay) _Bool mpuReporting_quickPlay;
@end

