//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _MFAutocompleteResultsTableViewModel : NSObject
{
    NSMutableDictionary *_sections;
    unsigned long long _numberOfSections;
}

@property(nonatomic) unsigned long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
- (CDStruct_0f015c83)computeDiffForModel:(id)arg1;
- (void)setSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithNumberOfSections:(unsigned long long)arg1;
- (void)enumerateSections:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long numberOfNonEmptySections;
- (void)dealloc;

@end

