//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying>
{
    vector_62d75e4b mStrokeRuns;
    unsigned short _columnOrRowIndex;
}

+ (id)strokeLayer;
@property(nonatomic) unsigned short columnOrRowIndex; // @synthesize columnOrRowIndex=_columnOrRowIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_flattenStrokeOrder;
- (void)p_removeRange:(struct TSTSimpleRange)arg1;
- (void)p_insertSpaceAtRange:(struct TSTSimpleRange)arg1;
- (void)p_setStrokeRuns:(vector_62d75e4b)arg1;
- (void)p_mergeStrokeRunsAtPosition:(unsigned long long)arg1;
- (void)p_invalidateRange:(struct TSTSimpleRange)arg1;
- (void)p_invalidate;
- (void)p_setStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)p_appendStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange)arg1;
- (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange)arg1;
- (id)strokeLayerModifiedUsingMoveDelegate:(id)arg1;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStrokesUsingBlock:(CDUnknownBlockType)arg1;
- (id)nextStrokeAndRange:(id)arg1;
- (id)findStrokeAndRangeAtIndex:(long long)arg1;
- (long long)startingIndex;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)dealloc;
- (id)initWithContext:(id)arg1 columnOrRowIndex:(unsigned short)arg2;

@end

