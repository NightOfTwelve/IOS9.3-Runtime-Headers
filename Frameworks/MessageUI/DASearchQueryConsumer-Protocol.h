//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DASearchQuery, NSArray, NSError, NSNumber;

@protocol DASearchQueryConsumer
- (void)searchQuery:(DASearchQuery *)arg1 finishedWithError:(NSError *)arg2;
- (void)searchQuery:(DASearchQuery *)arg1 returnedResults:(NSArray *)arg2;

@optional
- (void)searchQuery:(DASearchQuery *)arg1 returnedTotalCount:(NSNumber *)arg2;
@end

