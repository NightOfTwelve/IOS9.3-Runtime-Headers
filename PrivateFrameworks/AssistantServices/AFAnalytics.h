//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFAnalyticsService> _service;
    long long _defaultCategoryType;
}

+ (id)sharedAnalytics;
@property(readonly, nonatomic) long long defaultCategoryType; // @synthesize defaultCategoryType=_defaultCategoryType;
- (void).cxx_destruct;
- (id)_service:(_Bool)arg1;
- (void)_stageEvents:(id)arg1;
- (void)_stageEvent:(id)arg1;
- (void)logEvents:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 categoryType:(long long)arg3 contextProvider:(CDUnknownBlockType)arg4 contextProvidingQueue:(id)arg5;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 categoryType:(long long)arg3 context:(id)arg4 contextNoCopy:(_Bool)arg5;
- (void)setService:(id)arg1;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;
- (void)logEventWithType:(long long)arg1 context:(id)arg2;
- (id)initWithDefaultCategoryType:(long long)arg1;
- (id)init;

@end

