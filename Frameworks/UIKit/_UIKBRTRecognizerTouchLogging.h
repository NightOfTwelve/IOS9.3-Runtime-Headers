//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIKBRTRecognizerTouchLoggingProtocol-Protocol.h>

@class NSString, NSURL, _UIKBRTRecognizer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTRecognizerTouchLogging : NSObject <_UIKBRTRecognizerTouchLoggingProtocol>
{
    _UIKBRTRecognizer *_owner;
    NSObject<OS_dispatch_queue> *_touchLoggingQueue;
    NSURL *_touchLoggingDBURL;
    struct sqlite3 *_touchLoggingDB;
}

+ (_Bool)_uikbrt_touchLoggingEnabled;
@property(nonatomic) struct sqlite3 *touchLoggingDB; // @synthesize touchLoggingDB=_touchLoggingDB;
@property(retain, nonatomic) NSURL *touchLoggingDBURL; // @synthesize touchLoggingDBURL=_touchLoggingDBURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *touchLoggingQueue; // @synthesize touchLoggingQueue=_touchLoggingQueue;
@property(nonatomic) _UIKBRTRecognizer *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)closeTouchInfo:(id)arg1;
- (void)logTouchInfo:(id)arg1 withPhase:(long long)arg2;
- (void)stopLoggingTouchesWithCallback:(CDUnknownBlockType)arg1;
- (void)startLoggingTouchesForVC:(id)arg1;
- (void)startLoggingTouchesToURL:(id)arg1;
- (void)startLoggingTouchesToDefaultLocationIfEnabled;
- (id)logFileExtension;
@property(readonly, nonatomic) _Bool loggingTouches;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

