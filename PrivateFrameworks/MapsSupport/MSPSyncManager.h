//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/SYStoreDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, SYStore;
@protocol OS_dispatch_queue;

@interface MSPSyncManager : NSObject <SYStoreDelegate>
{
    SYStore *_store;
    _Bool _inUpdate;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_bookmarks;
    NSMutableDictionary *_bookmarksMap;
    NSMutableArray *_bookmarksForDisplay;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    NSMutableArray *_history;
    NSMutableDictionary *_historyMap;
}

+ (_Bool)_bookmarkIsDisplayable:(id)arg1;
- (void).cxx_destruct;
- (void)completedPreparingSync;
- (void)completedSync;
- (void)updatedPin:(id)arg1;
- (void)updatedHistoryItem:(id)arg1;
- (void)updatedBookmark:(id)arg1;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (id)readHistory;
- (id)readPins;
- (id)readBookmarks;
- (void)notifyObservers;
- (void)updateHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)removeHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)addHistoryItem:(id)arg1 transaction:(id)arg2;
- (id)history;
- (void)updatePin:(id)arg1 transaction:(id)arg2;
- (void)removePin:(id)arg1 transaction:(id)arg2;
- (void)addPin:(id)arg1 transaction:(id)arg2;
- (id)pins;
- (void)updateBookmark:(id)arg1 transaction:(id)arg2;
- (void)removeBookmark:(id)arg1 transaction:(id)arg2;
- (void)addBookmark:(id)arg1 transaction:(id)arg2;
- (id)displayableBookmarks;
- (id)bookmarks;
- (void)_removeHistoryItem:(id)arg1;
- (void)_removePin:(id)arg1;
- (void)_removeBookmark:(id)arg1;
- (void)_updateHistoryItem:(id)arg1;
- (void)_updatePin:(id)arg1;
- (void)_updateBookmark:(id)arg1;
- (void)_addHistoryItem:(id)arg1;
- (void)_addPin:(id)arg1;
- (void)_addBookmark:(id)arg1;
- (id)_wrapHistoryItem:(id)arg1;
- (id)_wrapPin:(id)arg1;
- (id)_wrapBookmark:(id)arg1;
- (void)_updateFromDisk;
- (void)_findDisplayableBookmarks;
- (void)_notifyObservers;
- (void)transaction:(CDUnknownBlockType)arg1;
- (void)syncStoreDidCompleteFullSync:(id)arg1;
- (void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2;
- (id)syncStoreAllObjects:(id)arg1;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (void)syncStoreDidUpdate:(id)arg1;
- (void)syncStoreWillUpdate:(id)arg1 objectCount:(unsigned long long)arg2;
- (void)syncStoreWillUpdate:(id)arg1;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStore:(id)arg1 objectUpdated:(id)arg2;
- (void)syncStore:(id)arg1 objectAdded:(id)arg2;
- (void)setNeedsFullSync;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

