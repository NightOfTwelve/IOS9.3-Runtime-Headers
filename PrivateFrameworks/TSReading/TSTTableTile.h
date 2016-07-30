//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSArray, NSMutableArray;

@interface TSTTableTile : TSPObject
{
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

- (id)description;
- (void)validate;
- (void)debugListRows;
- (void)debugDump;
@property(readonly, nonatomic) NSArray *rowInfos;
@property(readonly, nonatomic) unsigned short numRows;
@property(readonly, nonatomic) unsigned short numCells;
@property(readonly, nonatomic) unsigned short maxRow;
@property(readonly, nonatomic) unsigned char maxColumn;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (void)i_upgradeTileRowInfosWithDataStore:(id)arg1;

@end

