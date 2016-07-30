//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Symbolication/VMUCommonGraphInterface-Protocol.h>

@class NSString, VMUClassInfoMap, VMUObjectIdentifier, VMUVMRegionIdentifier;

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface>
{
    unsigned int _task;
    int _pid;
    unsigned long long _suspendTime;
    unsigned int _suspensionToken;
    VMUObjectIdentifier *_objectIdentifier;
    VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    struct _VMURegionMap *_regionMap;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    id *_classInfos;
    unsigned int _classInfosCount;
    VMUClassInfoMap *_classInfoIndexer;
    _Bool _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    int _scanningMask;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
}

+ (void)initialize;
@property(nonatomic) int scanningMask; // @synthesize scanningMask=_scanningMask;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionsCount;
@property(readonly, nonatomic) unsigned int zoneCount; // @synthesize zoneCount=_zonesCount;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_blocksCount;
@property(nonatomic) _Bool exactScanningEnabled; // @synthesize exactScanningEnabled=_exactScanningEnabled;
@property(nonatomic) unsigned long long maxInteriorOffset; // @synthesize maxInteriorOffset=_maxInteriorOffset;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)referenceDescription:(CDStruct_df82e459)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly, nonatomic) unsigned int vmPageSize;
- (unsigned int)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int mallocNodeCount;
- (void *)contentForNode:(unsigned int)arg1;
- (id)labelForNode:(unsigned int)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses;
- (id)processSnapshotGraph;
- (id)scanNodesIntoGraph;
- (void)_scanIntoGraph:(id)arg1;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (void)removeRootReachableNodes;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(_Bool)arg3 actions:(CDUnknownBlockType)arg4;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (void)_fixupBlockIsas;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (void)_sortBlocks;
- (void)addRootNodesFromTask;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)detachFromTask;
- (_Bool)_suspend;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

