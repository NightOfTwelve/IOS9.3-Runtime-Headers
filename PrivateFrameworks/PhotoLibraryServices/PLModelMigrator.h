//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSFileManager, PLPhotoLibrary, PLXPCTransaction;

@interface PLModelMigrator : NSObject
{
    double _startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    long long _photoLibraryOnce;
    NSDictionary *_syncedPropertiesByUUID;
}

+ (_Bool)_trimInvalidAlbumAssetsMappingRecords;
+ (_Bool)_recoverSingleBurstPhotos:(id)arg1;
+ (void)_repairRootFolderFixedOrderKeysInContext:(id)arg1;
+ (_Bool)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id *)arg2;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (_Bool)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (_Bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (_Bool)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (_Bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (_Bool)_populateAdjustmentTimestampsOnAssets:(id)arg1;
+ (_Bool)_migrateCloudResourcesRelationshipsInStagedStore:(id)arg1;
+ (_Bool)_performMigrationCacheDateCreatedOnResources:(_Bool)arg1 cacheItemIdentifierOnResources:(_Bool)arg2 store:(id)arg3;
+ (_Bool)_fixupEditorBundleIDsInStore:(id)arg1;
+ (_Bool)_forceDupeAnalysis;
+ (_Bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (_Bool)_fixupAssetPersistence:(id)arg1;
+ (_Bool)_persistVideoComplPropertiesInStore:(id)arg1;
+ (_Bool)_persistPlaceAnnotationData:(id)arg1;
+ (_Bool)_fixVideoDimensionsInStore:(id)arg1;
+ (_Bool)_fixVideoDimensionsForAsset:(id)arg1;
+ (_Bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (_Bool)_fixEmptyVideoResourcePathsInStore:(id)arg1;
+ (_Bool)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1;
+ (_Bool)_fixItemIdentifierForVideoCmplInStore:(id)arg1;
+ (_Bool)_markPhotoIrisVideoOrphansInStore:(id)arg1;
+ (_Bool)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1;
+ (_Bool)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1;
+ (_Bool)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1;
+ (_Bool)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1;
+ (_Bool)_fixupAssetSubtypeForPhotosInStore:(id)arg1;
+ (_Bool)_tagScreenshotsForAssetsInStore:(id)arg1;
+ (_Bool)_addCameraCaptureDeviceForAssetsInStore:(id)arg1;
+ (_Bool)_fixIncorrectAddedDateForAssetsInStore:(id)arg1;
+ (_Bool)fixPossiblyIncorrectAddedDateForAsset:(id)arg1;
+ (_Bool)_isReasonableCreationDate:(id)arg1;
+ (_Bool)_generateAddedDateForAssetsInStore:(id)arg1;
+ (_Bool)_repersistDuplicatedAssets:(id)arg1;
+ (_Bool)_fixAlbumAndFolderSortAscending:(id)arg1;
+ (_Bool)_applyDataProtectionToDCIMFromClassBToClassC;
+ (_Bool)_fixCloudMasterCloudLocalState:(id)arg1;
+ (_Bool)_resetUploadAttempts:(id)arg1;
+ (_Bool)_resetFailedCloudMasters:(id)arg1;
+ (_Bool)_resetFailedAssets:(id)arg1;
+ (_Bool)_fixVideoJPGPath:(id)arg1;
+ (void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1;
+ (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;
+ (_Bool)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;
+ (void)_removeFileAt:(id)arg1 forResource:(id)arg2;
+ (_Bool)_fixNonDuplicatedAssets:(id)arg1 adjusted:(_Bool)arg2;
+ (_Bool)_fixDuplicatedAssets:(id)arg1;
+ (_Bool)_fixVisibleBurstAsset:(id)arg1;
+ (_Bool)_fixAdjustedAssets:(id)arg1;
+ (_Bool)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(_Bool)arg2;
+ (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
+ (_Bool)_batchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
+ (_Bool)_fixCorruptedOrientationsInStore:(id)arg1;
+ (_Bool)_convertManagedAdjustmentsInStore:(id)arg1;
+ (_Bool)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
+ (void)_persistMetadataToFileSystemForAlbum:(id)arg1;
+ (_Bool)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (_Bool)_resetAndReimportUnmanagedAdjustmentInStore:(id)arg1;
+ (_Bool)_populateUnmanagedAdjustmentsFromFileSystemInManagedObjectContext:(id)arg1;
+ (void)fixupUnmanagedAdjustmentsFromFileSystemForAsset:(id)arg1;
+ (_Bool)_setupRootFolderInStore:(id)arg1;
+ (_Bool)_migrateRevGeoLocationDataFromKeyedArchiverFormat:(id)arg1;
+ (_Bool)_migrateAssetLocationData:(id)arg1;
+ (_Bool)_addLocationHashesToAssets:(id)arg1;
+ (_Bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(_Bool)arg2;
+ (_Bool)_rebuildAllMomentsInStore:(id)arg1;
+ (_Bool)_deleteAllMomentsViaSQLFromStore:(id)arg1;
+ (_Bool)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (_Bool)_resetDupesAnalysisInStore:(id)arg1;
+ (_Bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (_Bool)_fixupCloudResourcesInStore:(id)arg1;
+ (_Bool)_removeAllWallpaperAssetsInStore:(id)arg1;
+ (_Bool)_fixupSharedStreamOrientationsInStore:(id)arg1;
+ (_Bool)_populateFaceRegionsInStore:(id)arg1;
+ (void)_populateFaceRegionsForAsset:(id)arg1;
+ (_Bool)_populateVideoCpFieldsInStagedStore:(id)arg1;
+ (_Bool)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1;
+ (_Bool)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;
+ (_Bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (_Bool)_fixupImportedAssetsInStore:(id)arg1;
+ (_Bool)_fixupImportedEventsInStore:(id)arg1;
+ (_Bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(_Bool)arg1 inStore:(id)arg2;
+ (_Bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (_Bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)_postProcessFromVersion6006Store:(id)arg1;
+ (void)applyDataProtectionToAllPhotosFiles;
+ (_Bool)skipDataProtectionForFilePath:(id)arg1;
+ (_Bool)_fixupBrokenBurstPicksInStore:(id)arg1;
+ (_Bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStore:(id)arg1;
+ (_Bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (_Bool)isPostProcessingLightweightMigration;
+ (_Bool)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1;
+ (_Bool)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (_Bool)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (id)managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (id)nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (_Bool)didCreateSqliteErrorFileForLightweightMigration;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (id)_newSyncedPropertiesByAssetUUIDs:(_Bool)arg1;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(_Bool)arg1;
+ (_Bool)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int *)arg3;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (void)setDidImportFileSystemAssets:(_Bool)arg1;
+ (id)_modelMigrator;
+ (id)_sharedModelMigratorForImport;
+ (id)eventNameFromDate:(id)arg1;
+ (id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)arg1;
+ (id)generatePathToAssetUUIDRecoveryMapping;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)didImportFileSystemAssets;
+ (_Bool)didImportFileSystemAssetsWithMOC:(id)arg1;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (_Bool)restartingAfterNonCloudRestoreFromBackup;
+ (_Bool)restartingAfterOTAMigration;
+ (_Bool)restartingAfterRestoreFromBackup;
+ (void)_parseDMContextForRestartingAfterRestoreFromBackup:(_Bool *)arg1 restartingAfterRestoreFromCloud:(_Bool *)arg2;
+ (void)repairPotentialModelCorruption;
+ (void)cleanupModelForDataMigration;
+ (void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1;
+ (_Bool)waitForDataMigratorToExit;
+ (void)_createDatabase;
+ (_Bool)_createPhotoDataDirectoryIfNecessary;
+ (void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
+ (void)createDatabase;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id *)arg1;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (_Bool)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (_Bool)_removeEvents:(id)arg1;
+ (_Bool)_forceSoftResetSync;
+ (_Bool)_disableICloudPhoto;
+ (_Bool)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (_Bool)_resetThumbnailsAndInitiateRebuildRequestIfNeeded;
+ (_Bool)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(_Bool *)arg1;
+ (void)validateCurrentModelVersion;
+ (void)_validateCurrentModelVersionAttempt:(long long)arg1;
+ (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(int)arg1;
+ (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
+ (int)currentModelVersion;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (void)_collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(_Bool)arg5;
- (void)_importAllDCIMAssets;
- (id)_orderedAssetsToImportCameraRollOnly:(_Bool)arg1;
- (_Bool)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(_Bool *)arg3 isCPLAssets:(_Bool *)arg4 cameraRollOnly:(_Bool)arg5;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)repairPotentialModelCorruption;
- (void)cleanupModelForDataMigration;
- (void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)init;
- (id)initWithImplicitTransaction:(_Bool)arg1;

@end

