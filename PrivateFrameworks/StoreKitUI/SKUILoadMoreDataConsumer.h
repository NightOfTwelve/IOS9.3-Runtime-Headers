//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@class NSSet;

@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer
{
    NSSet *_unavailableItemIdentifiers;
}

@property(copy, nonatomic) NSSet *unavailableItemIdentifiers; // @synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers;
- (void).cxx_destruct;
- (id)_itemsWithDictionary:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;

@end

