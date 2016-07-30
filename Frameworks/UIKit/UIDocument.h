//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSFilePresenter-Protocol.h>
#import <UIKit/NSProgressReporting-Protocol.h>

@class NSDate, NSDocumentDifferenceSize, NSLock, NSMutableArray, NSOperationQueue, NSProgress, NSString, NSTimer, NSURL, NSUndoManager, NSUserActivity;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting>
{
    NSUserActivity *_currentUserActivity;
    NSLock *_activityContinuationLock;
    NSURL *_fileURL;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    NSTimer *_autosavingTimer;
    double _lastSaveTime;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
    NSLock *_documentPropertyLock;
    id _alertPresenter;
    id _progressSubscriber;
    struct __docFlags {
        unsigned int inClose:1;
        unsigned int isOpen:1;
        unsigned int inOpen:1;
        unsigned int isAutosavingBecauseOfTimer:1;
        unsigned int versionWithoutRecentChangesIsNotLastOpened:1;
        unsigned int ignoreUndoAndRedoNotifications:1;
        unsigned int editingDisabled:1;
        unsigned int isRegisteredAsFilePresenter:1;
        unsigned int movingFile:1;
        unsigned int savingError:1;
        unsigned int inConflict:1;
        unsigned int needToStopAccessingSecurityScopedResource:1;
    } _docFlags;
    NSProgress *_progress;
}

+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (_Bool)_url:(id)arg1 matchesURL:(id)arg2;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(_Bool)arg4;
+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (id)_fileModificationDateForURL:(id)arg1;
- (void)_setProgress:(id)arg1;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving; // @synthesize differenceSinceSaving=_differenceSinceSaving;
@property(readonly, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion; // @synthesize differenceSincePreservingPreviousVersion=_differenceSincePreservingPreviousVersion;
@property(readonly, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges; // @synthesize differenceDueToRecentChanges=_differenceDueToRecentChanges;
- (void).cxx_destruct;
- (void)disableEditing;
- (void)enableEditing;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)_updateConflictState;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAllowWritingInResponseToPresenterMessage;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(long long)arg2;
@property(readonly, copy) NSString *localizedName;
- (void)_updateLocalizedName;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (void)finishedHandlingError:(id)arg1 recovered:(_Bool)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(_Bool)arg2;
@property(retain) NSUndoManager *undoManager;
- (void)_releaseUndoManager;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2;
- (id)changeCountTokenForSaveOperation:(long long)arg1;
- (void)updateChangeCount:(long long)arg1;
- (_Bool)hasUnsavedChanges;
- (_Bool)_hasUnsavedChanges;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)savingFileType;
- (void)autosaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_autosaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(_Bool)arg2;
- (void)_rescheduleAutosaving;
- (void)_autosavingCompletedSuccessfully:(_Bool)arg1;
- (double)_autosavingDelay;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(long long)arg2 changeCount:(id)arg3;
- (void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (_Bool)_coordinateWritingItemAtURL:(id)arg1 error:(id *)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(long long)arg2 error:(id *)arg3;
- (_Bool)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (_Bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id *)arg5;
- (id)_presentableFileNameForSaveOperation:(long long)arg1 url:(id)arg2;
- (_Bool)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_progressUnpublished;
- (void)_progressPublished:(id)arg1;
- (void)_unlockFileAccessQueue;
- (void)_lockFileAccessQueueAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long documentState;
- (void)_sendStateChangedNotification;
- (_Bool)_isInConflict;
- (void)_setInConflict:(_Bool)arg1;
- (_Bool)_hasSavingError;
- (void)_setHasSavingError:(_Bool)arg1;
- (_Bool)_isInOpen;
- (void)_setInOpen:(_Bool)arg1;
- (_Bool)_isOpen;
- (void)_setOpen:(_Bool)arg1;
@property(getter=_isEditingDisabled, setter=_setEditingDisabled:) _Bool editingDisabled;
@property(copy) NSDate *fileModificationDate;
@property(readonly, copy) NSString *fileType;
- (void)setFileType:(id)arg1;
@property(readonly) NSURL *fileURL;
- (void)_setFileURL:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)setUserActivity:(id)arg1;
- (void)_setUserActivity:(id)arg1;
- (void)_clearUserActivity;
- (void)_manageUserActivity;
- (void)_reallyManageUserActivity;
- (id)_activityTypeIdentifierForCloudDocument:(_Bool *)arg1;
- (void)_invalidateCurrentUserActivity;
- (_Bool)_documentIsUbiquitous;
- (id)_userActivityWithActivityType:(id)arg1;
- (id)_titleForActivityContinuation;
- (id)_userInfoForActivityContinuation;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_registerAsFilePresenterIfNecessary;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;
- (id)init;
- (void)_performBlockSynchronouslyOnMainThread:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 synchronouslyOnQueue:(id)arg2;
- (id)_fileOpeningQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

