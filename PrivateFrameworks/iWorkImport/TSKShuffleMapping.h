//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKShuffleMapping : NSObject <NSCopying>
{
    unsigned short mStartIndex;
    unsigned short mEndIndex;
    unsigned short *mMapping;
    _Bool mIsVertical;
    _Bool mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}

@property(readonly, nonatomic) unsigned short *mapping; // @synthesize mapping=mMapping;
@property(readonly, nonatomic) unsigned short endIndex; // @synthesize endIndex=mEndIndex;
@property(readonly, nonatomic) unsigned short startIndex; // @synthesize startIndex=mStartIndex;
- (void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2;
- (void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2;
- (void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(_Bool)arg3;
- (void)enumerateMappingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isIdentityMapping;
- (_Bool)isMove;
- (_Bool)isVertical;
- (unsigned short)reverseMapIndex:(unsigned short)arg1;
- (unsigned short)mapIndex:(unsigned short)arg1;
- (id)copyInverse;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned short mappingSize; // @dynamic mappingSize;
- (void)saveToArchive:(struct ShuffleMappingArchive *)arg1;
- (id)initWithArchive:(const struct ShuffleMappingArchive *)arg1;
- (void)dealloc;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(_Bool)arg4;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short *)arg3;
- (CDStruct_0441cfb5)reverseMapCoordinate:(CDStruct_0441cfb5)arg1;
- (CDStruct_0441cfb5)mapCoordinate:(CDStruct_0441cfb5)arg1;

@end

