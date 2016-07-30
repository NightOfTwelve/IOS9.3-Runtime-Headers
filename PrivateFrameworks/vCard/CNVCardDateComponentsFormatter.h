//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter
{
    NSCalendar *_gregorianCalendar;
    NSDateFormatter *_compactYearMonthDayDateFormatter;
    NSDateFormatter *_compactYearMonthDayDateHourMinuteSecondZFormatter;
    NSDateFormatter *_monthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateHourMinuteSecondZFormatter;
}

+ (id)dateComponentsFromALTBDAYString:(id)arg1;
- (id)stringForComponentValue:(long long)arg1 format:(id)arg2;
- (id)altBDAYStringFromDateComponents:(id)arg1;
- (id)dateComponentsFromALTBDAYString:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)yearMonthDayStringFromDateComponents:(id)arg1;
- (id)monthDayStringFromDateComponents:(id)arg1;
- (id)dateComponentsFromString:(id)arg1;
- (id)compactYearMonthDayDateHourMinuteSecondZFormatter;
- (id)compactYearMonthDayDateFormatter;
- (id)yearMonthDayDateFormatter;
- (id)yearMonthDayDateHourMinuteSecondZFormatter;
- (id)monthDayDateFormatter;
- (id)gregorianCalendar;
- (id)stringFromDateComponents:(id)arg1;
- (void)dealloc;

@end

