//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Symbolication/NSObject-Protocol.h>

@class NSString, VMUClassInfoMap;

@protocol VMUCommonGraphInterface <NSObject>
@property(readonly, nonatomic) unsigned int regionCount;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly, nonatomic) unsigned int nodeCount;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property(readonly, nonatomic) unsigned int vmPageSize;
@property(readonly, nonatomic) int pid;
- (unsigned int)enumerateReferencesWithBlock:(void (^)(unsigned int, unsigned int, unsigned int, struct, _Bool *))arg1;
- (unsigned int)enumerateRegionsWithBlock:(void (^)(VMUVMRegion *, _Bool *))arg1;
- (NSString *)labelForNode:(unsigned int)arg1;
- (unsigned int)enumerateObjectsWithBlock:(void (^)(unsigned int, struct, _Bool *))arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (NSString *)zoneNameForIndex:(unsigned int)arg1;
@end

