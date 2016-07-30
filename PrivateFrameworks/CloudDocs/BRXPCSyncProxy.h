//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSError, NSObject;
@protocol OS_dispatch_group;

@interface BRXPCSyncProxy : NSProxy
{
    NSObject *_target;
    NSObject<OS_dispatch_group> *_group;
    NSError *_error;
    id _result;
    int _nested;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
- (id)resultWithTimeout:(int)arg1;
- (void)setObjResult:(id)arg1 error:(id)arg2;
- (void)setBoolResult:(_Bool)arg1 error:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithXPCObject:(id)arg1;

@end
