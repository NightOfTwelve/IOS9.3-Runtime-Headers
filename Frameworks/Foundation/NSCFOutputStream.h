//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFOutputStream : NSOutputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (void)finalize;
- (unsigned long long)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

