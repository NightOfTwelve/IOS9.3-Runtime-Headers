//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CoreDAVItem *_content;
}

@property(retain, nonatomic) CoreDAVItem *content; // @synthesize content=_content;
@property(retain, nonatomic) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end

