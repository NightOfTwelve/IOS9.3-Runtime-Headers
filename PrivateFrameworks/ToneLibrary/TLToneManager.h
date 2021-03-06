//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NPSDomainAccessor, NSDictionary, NSMutableDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    _Bool _shouldUseServiceToAccessTonePreferences;
    _Bool _shouldIgnoreNextToneDidChangeNotification;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_iTunesToneIdentifiersByPID;
    NSMutableDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    NSDictionary *_previewBehaviorsByDefaultIdentifier;
    NSDictionary *_cachedTonePreferences;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    TLAccessQueue *_accessQueue;
}

+ (struct __CFString *)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString *)arg1;
+ (_Bool)_migrateLegacyToneSettings;
+ (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
+ (id)_systemWideTonePreferenceKeyForAlertType:(int)arg1;
+ (id)sharedToneManager;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
@property(retain, nonatomic, setter=_setTransientNanoPreferencesDomainAccessor:) NPSDomainAccessor *_transientNanoPreferencesDomainAccessor; // @synthesize _transientNanoPreferencesDomainAccessor;
@property(nonatomic, setter=_setShouldIgnoreNextToneDidChangeNotification:) _Bool _shouldIgnoreNextToneDidChangeNotification; // @synthesize _shouldIgnoreNextToneDidChangeNotification;
@property(retain, nonatomic, setter=_setCachedTonePreferences:) NSDictionary *_cachedTonePreferences; // @synthesize _cachedTonePreferences;
@property(nonatomic, setter=_setShouldUseServiceToAccessTonePreferences:) _Bool _shouldUseServiceToAccessTonePreferences; // @synthesize _shouldUseServiceToAccessTonePreferences;
@property(retain, nonatomic, setter=_setPreviewBehaviorsByDefaultIdentifier:) NSDictionary *_previewBehaviorsByDefaultIdentifier; // @synthesize _previewBehaviorsByDefaultIdentifier;
@property(retain, nonatomic, setter=_setToneIdentifierAliasMap:) NSDictionary *_toneIdentifierAliasMap; // @synthesize _toneIdentifierAliasMap;
@property(retain, nonatomic, setter=_setAlertTonesByIdentifier:) NSMutableDictionary *_alertTonesByIdentifier; // @synthesize _alertTonesByIdentifier;
@property(retain, nonatomic, setter=_setITunesToneIdentifiersByPID:) NSMutableDictionary *_iTunesToneIdentifiersByPID; // @synthesize _iTunesToneIdentifiersByPID;
@property(retain, nonatomic, setter=_setITunesTonesByIdentifier:) NSMutableDictionary *_iTunesTonesByIdentifier; // @synthesize _iTunesTonesByIdentifier;
- (void)_handleDeviceRingtonesChangedNotification;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (_Bool)_toneIsSettableForAlertType:(int)arg1;
- (_Bool)_ensureDirectoryExistsAtPath:(id)arg1;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (_Bool)_filePathHasSupportedExtensionForRingtone:(id)arg1;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (void)_setWatchPrefersSalientNotifications:(_Bool)arg1;
- (_Bool)_watchPrefersSalientNotifications;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(_Bool *)arg3;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id *)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(_Bool)arg1 returningFilePathsForFoundOrphans:(id *)arg2 wasAffectedByAccidentalToneDeletion:(_Bool *)arg3;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (void)_removeAllSyncedData;
- (_Bool)_removeSyncedToneByPID:(id)arg1;
- (_Bool)_insertSyncedToneMetadata:(id)arg1 fileName:(id)arg2;
- (id)_iTunesToneForPID:(id)arg1;
- (id)_allSyncedTones;
- (_Bool)_wasAffectedByAccidentalToneDeletion;
- (_Bool)_transferPurchasedToITunes:(id)arg1;
- (_Bool)_insertPurchasedToneMetadata:(id)arg1 fileName:(id)arg2;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)newAVItemForToneIdentifier:(id)arg1;
- (_Bool)toneWithIdentifierIsValid:(id)arg1;
- (_Bool)_toneWithIdentifierIsValid:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(_Bool *)arg2;
- (id)_toneIdentifierForFileAtPath:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)nameForToneIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(_Bool *)arg2;
- (id)filePathForToneIdentifier:(id)arg1;
- (unsigned int)soundIDForToneIdentifier:(id)arg1;
- (id)_defaultRingtonePath;
- (id)_defaultRingtoneName;
- (id)defaultRingtoneIdentifier;
- (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)defaultToneIdentifierForAlertType:(int)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1;
- (id)currentToneNameForAlertType:(int)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (_Bool)_setToneIdentifierUsingService:(id)arg1 keyedByAccountIdentifier:(id)arg2 forPreferenceKey:(id)arg3;
- (id)_tonePreferencesFromService;
- (id)_newServiceConnection;
- (_Bool)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (_Bool)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (_Bool)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (unsigned int)_previewBehaviorForDefaultIdentifier:(id)arg1;
- (void)_loadPreviewBehaviorsByDefaultIdentifier;
- (id)_aliasForToneIdentifier:(id)arg1;
- (void)_loadToneIdentifierAliasMap;
- (void)_loadAlertToneInfo;
- (id)_systemModernSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (int)_lockManifestAtPath:(id)arg1;
- (_Bool)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(_Bool)arg3 alreadyLockedManifest:(_Bool)arg4 removedEntries:(id *)arg5;
- (_Bool)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (_Bool)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(_Bool)arg4;
- (_Bool)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (unsigned long long)_installedTonesSize;
- (id)_installedTones;
- (id)_iTunesToneWithIdentifier:(id)arg1;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *_systemRingtoneDirectory;
@property(readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_rootDirectory;
- (void)dealloc;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)init;

@end

