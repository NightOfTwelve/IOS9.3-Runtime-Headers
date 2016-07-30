//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNiOSPersonFetchRequest;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetcher : NSObject
{
    void *_addressBook;
    CNiOSPersonFetchRequest *_fetchRequest;
}

+ (id)peopleForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 error:(id *)arg4;
- (id)sortPeople:(id)arg1;
- (_Bool)shouldSortInMemory;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)fetchPeopleReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 fetchRequest:(id)arg2;

@end

