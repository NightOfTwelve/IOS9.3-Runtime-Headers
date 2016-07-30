//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

#import <CloudDocsDaemon/PQLBindable-Protocol.h>

@class NSString;

@interface CKRecord (BRCItemAdditions) <PQLBindable>
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)documentContentsRecordForItemID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)brc_updateDroppedReason;
- (id)brc_oplockMergeEtag;
- (_Bool)brc_isInterestingRecordForSyncDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

