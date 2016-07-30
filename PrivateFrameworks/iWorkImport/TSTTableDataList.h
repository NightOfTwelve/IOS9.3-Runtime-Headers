//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

__attribute__((visibility("hidden")))
@interface TSTTableDataList : TSPObject
{
    int mListType;
    unsigned int mNextID;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}

+ (id)newObjectForUnarchiver:(id)arg1;
@property(readonly, nonatomic) unsigned int nextID; // @synthesize nextID=mNextID;
@property(readonly, nonatomic) TSTIntegerKeyDict *data;
- (id)description;
- (void)enumerateCustomFormatsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allRichTextPayloadStorages;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (void)dealloc;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (_Bool)supportsIDMapForType:(int)arg1;

@end

