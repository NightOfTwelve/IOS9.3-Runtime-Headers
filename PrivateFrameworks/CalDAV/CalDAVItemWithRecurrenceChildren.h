//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem
{
    NSMutableSet *_recurrences;
}

@property(retain, nonatomic) NSMutableSet *recurrences; // @synthesize recurrences=_recurrences;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addRecurrence:(id)arg1;

@end

