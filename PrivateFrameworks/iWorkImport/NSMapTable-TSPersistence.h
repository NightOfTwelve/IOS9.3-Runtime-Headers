//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (TSPersistence)
+ (id)newTspWeakObjectsMapTable;
+ (id)newTspStrongObjectsMapTableWithCapacity:(unsigned long long)arg1;
+ (id)newTspStrongObjectsMapTable;
- (void)tsp_enumerateIdentifiersAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsp_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;
@end

