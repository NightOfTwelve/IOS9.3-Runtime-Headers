//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMBufferObservance.h>

@class NSNotificationCenter, NSObject, NSString;

@interface CAMBufferNotificationObservance : CAMBufferObservance
{
    NSString *_notification;
    NSObject *_object;
    NSNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (void)fulfillWithChange:(id)arg1;
- (id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(_Bool)arg4;

@end

