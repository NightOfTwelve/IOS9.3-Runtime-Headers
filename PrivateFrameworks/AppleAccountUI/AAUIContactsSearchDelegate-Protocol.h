//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class AAUIContactsSearchController, NSArray;

@protocol AAUIContactsSearchDelegate <NSObject>
- (void)contactsSearchController:(AAUIContactsSearchController *)arg1 didFinishSearchWithSuccess:(_Bool)arg2;
- (void)contactsSearchController:(AAUIContactsSearchController *)arg1 didFindSortedResult:(NSArray *)arg2;
@end

