//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation
{
    CSSearchableIndex *_searchableIndex;
    NSArray *_dataSources;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;
- (void).cxx_destruct;
- (_Bool)shouldDeleteAllItemsBeforeIndexing;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (id)searchableItemsToIndexFromDataSource:(id)arg1;
- (void)indexItems;
- (void)deleteItems;
- (void)deleteAllItems;
- (void)main;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)init;

@end

