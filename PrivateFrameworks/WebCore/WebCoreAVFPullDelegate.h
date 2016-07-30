//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemOutputPullDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC *m_callback;
    NSObject<OS_dispatch_semaphore> *m_semaphore;
}

- (void)outputSequenceWasFlushed:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg1;
- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

