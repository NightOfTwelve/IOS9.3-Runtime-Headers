//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface NFMDataLogger : NSObject
{
    _Bool _recordingTelemetry;
    NSOperationQueue *_activityQueue;
    NSOperationQueue *_accelerationQueue;
}

+ (id)sharedLogger;
@property(retain, nonatomic) NSOperationQueue *accelerationQueue; // @synthesize accelerationQueue=_accelerationQueue;
@property(retain, nonatomic) NSOperationQueue *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(nonatomic) _Bool recordingTelemetry; // @synthesize recordingTelemetry=_recordingTelemetry;
- (void).cxx_destruct;
- (void)recordLeashBroke;
- (void)recordLeashed;
- (void)recordUserResponse:(long long)arg1;
- (void)recordRequestedUserResponse;
- (void)recordRSSIStrength:(float)arg1;
- (void)endRecordingTelemetry;
- (void)beginRecordingTelemetry;

@end

