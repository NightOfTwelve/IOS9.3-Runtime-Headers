//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject
{
    _Bool _warmUpModeEnabled;
    _Bool _displayLinkHasRefreshedAtLeastOnce;
    double _vibrationPatternMaximumDuration;
    double _vibrationPatternDidStartTimestamp;
    unsigned long long _maximumFramesPerSecondRate;
    void *_recordedData;
    unsigned long long _recordedDataElementsCount;
    unsigned long long _recordedDataCursor;
    double _warmUpModeDidStartTimestamp;
}

@property(nonatomic, setter=_setDisplayLinkHasRefreshedAtLeastOnce:) _Bool _displayLinkHasRefreshedAtLeastOnce; // @synthesize _displayLinkHasRefreshedAtLeastOnce;
@property(nonatomic, setter=_setWarmUpModeDidStartTimestamp:) double _warmUpModeDidStartTimestamp; // @synthesize _warmUpModeDidStartTimestamp;
@property(nonatomic, getter=_isWarmUpModeEnabled, setter=_setWarmUpModeEnabled:) _Bool _warmUpModeEnabled; // @synthesize _warmUpModeEnabled;
@property(nonatomic, setter=_setRecordedDataCursor:) unsigned long long _recordedDataCursor; // @synthesize _recordedDataCursor;
@property(nonatomic, setter=_setRecordedDataElementsCount:) unsigned long long _recordedDataElementsCount; // @synthesize _recordedDataElementsCount;
@property(nonatomic, setter=_setRecordedData:) void *_recordedData; // @synthesize _recordedData;
@property(nonatomic, setter=_setMaximumFramesPerSecondRate:) unsigned long long _maximumFramesPerSecondRate; // @synthesize _maximumFramesPerSecondRate;
@property(nonatomic, setter=_setVibrationPatternDidStartTimestamp:) double _vibrationPatternDidStartTimestamp; // @synthesize _vibrationPatternDidStartTimestamp;
@property(nonatomic, setter=_setVibrationPatternMaximumDuration:) double _vibrationPatternMaximumDuration; // @synthesize _vibrationPatternMaximumDuration;
- (void)_updateMaximumFramesPerSecondRate:(id)arg1;
- (_Bool)getNormalizedTouchLocation:(struct CGPoint *)arg1 touchPhase:(int *)arg2 forTimeInterval:(double)arg3;
- (void)didStopRecording;
- (void)recordNormalizedTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2;
- (void)_recordFinalDataWithNormalizedTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3;
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1;
- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;

@end

