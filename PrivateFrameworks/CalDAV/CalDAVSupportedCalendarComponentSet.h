//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem
{
    NSMutableSet *_comps;
}

@property(retain, nonatomic) NSMutableSet *comps; // @synthesize comps=_comps;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *compNames;
- (id)childrenToWrite;
- (void)addComp:(id)arg1;
- (id)description;
- (id)componentsAsString;
- (id)init;
- (id)copyParseRules;

@end

