//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface CKRecipientGenerator : NSObject
{
    NSArray *_searchABPropertyTypes;
}

+ (id)sharedRecipientGenerator;
@property(retain, nonatomic) NSArray *searchABPropertyTypes; // @synthesize searchABPropertyTypes=_searchABPropertyTypes;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (id)resultsForText:(id)arg1;
- (void)dealloc;

@end

