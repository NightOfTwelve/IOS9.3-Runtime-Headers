//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSDate, NSString;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource
{
    NSString *_title;
    NSString *_externalID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_relatedUniqueIdentifier;
    unsigned long long _view;
}

@property(readonly, nonatomic) unsigned long long view; // @synthesize view=_view;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)updateActivity:(id)arg1;
- (id)eventFromStore:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(_Bool)arg3;

@end

