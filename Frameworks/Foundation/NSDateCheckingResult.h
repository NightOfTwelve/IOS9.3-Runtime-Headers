//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    _Bool _timeIsSignificant;
    _Bool _timeIsApproximate;
    _Bool _timeIsPast;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) _Bool timeIsPast;
@property(readonly) _Bool timeIsApproximate;
@property(readonly) _Bool timeIsSignificant;
@property(readonly) void *underlyingResult;
@property(readonly) NSDate *referenceDate;
@property(readonly) double duration;
@property(readonly) NSTimeZone *timeZone;
- (id)date;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(_Bool)arg7 timeIsApproximate:(_Bool)arg8;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(_Bool)arg7 timeIsApproximate:(_Bool)arg8 timeIsPast:(_Bool)arg9;

@end

