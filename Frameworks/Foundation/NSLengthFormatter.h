//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSNumberFormatter, NSString;

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver>
{
    void *_formatter;
    _Bool _isForPersonHeight;
    void *_reserved[2];
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)stringFromMeters:(double)arg1;
- (id)unitStringFromMeters:(double)arg1 usedUnit:(long long *)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
@property(getter=isForPersonHeightUse) _Bool forPersonHeightUse;
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;
- (id)init;
- (long long)targetUnitFromMeters:(double)arg1;
- (void)receiveObservedValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
