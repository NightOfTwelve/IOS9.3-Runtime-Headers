//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface CKRecordGraph : NSObject
{
    NSMutableSet *_nodes;
    NSArray *_sortedRecords;
}

+ (id)topologicallySortRecords:(id)arg1 withError:(id *)arg2;
@property(retain, nonatomic) NSArray *sortedRecords; // @synthesize sortedRecords=_sortedRecords;
@property(copy, nonatomic) NSMutableSet *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (id)description;
- (id)recordsByTopologicalSortWithError:(id *)arg1;
- (id)init;
- (_Bool)addRecords:(id)arg1 error:(id *)arg2;

@end

