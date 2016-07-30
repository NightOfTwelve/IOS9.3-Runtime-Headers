//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class CoreDAVResponseItem, NSDate, NSString, NSURL;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask
{
    _Bool _isFloating;
    _Bool _isAllDay;
    NSURL *_resourceURL;
    NSDate *_recurrenceDate;
    NSString *_uidForCreatedSeries;
    NSString *_previousScheduleTag;
    NSString *_previousETag;
    NSURL *_postURLWithQuery;
    CoreDAVResponseItem *_updatedResponseItem;
    CoreDAVResponseItem *_createdResponseItem;
}

@property(retain, nonatomic) CoreDAVResponseItem *createdResponseItem; // @synthesize createdResponseItem=_createdResponseItem;
@property(retain, nonatomic) CoreDAVResponseItem *updatedResponseItem; // @synthesize updatedResponseItem=_updatedResponseItem;
@property(retain, nonatomic) NSURL *postURLWithQuery; // @synthesize postURLWithQuery=_postURLWithQuery;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(retain, nonatomic) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
@property(retain, nonatomic) NSString *uidForCreatedSeries; // @synthesize uidForCreatedSeries=_uidForCreatedSeries;
@property(retain, nonatomic) NSDate *recurrenceDate; // @synthesize recurrenceDate=_recurrenceDate;
@property(retain, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
- (void).cxx_destruct;
- (id)createdICSData;
- (id)createdICSDocument;
- (id)createdScheduleTag;
- (id)createdETag;
- (id)createdURL;
- (id)updatedICSDocument;
- (id)updatedScheduleTag;
- (id)updatedETag;
- (id)_documentForItem:(id)arg1;
- (id)_dataForItem:(id)arg1;
- (id)_scheduleTagForItem:(id)arg1;
- (id)_etagForItem:(id)arg1;
- (void)_updateBothResponseItems;
- (id)additionalHeaderValues;
- (id)description;
- (id)httpMethod;
- (id)url;
- (id)urlWithQuery;
- (id)_recurrenceDateString;
- (id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 floating:(_Bool)arg3 allday:(_Bool)arg4;

@end

