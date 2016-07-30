//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@class MFActivityMonitor, NSString;

@interface MFMonitoredInvocation : NSInvocation
{
    MFActivityMonitor *_monitor;
    _Bool _shouldLogInvocation;
    _Bool _isLowPriority;
    NSString *_powerAssertionId;
}

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(_Bool)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(_Bool)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(_Bool)arg5;
+ (id)invocationWithMethodSignature:(id)arg1;
@property(copy, nonatomic) NSString *powerAssertionId; // @synthesize powerAssertionId=_powerAssertionId;
@property(nonatomic) _Bool isLowPriority; // @synthesize isLowPriority=_isLowPriority;
@property(readonly, nonatomic) MFActivityMonitor *monitor; // @synthesize monitor=_monitor;
- (id)description;
- (void)invoke;
- (void)setShouldLogInvocation:(_Bool)arg1;
- (_Bool)mf_shouldLogInvocation;
- (void)dealloc;

@end

