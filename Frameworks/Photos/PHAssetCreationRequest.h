//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSString, PHAssetCreationPhotoStreamPublishingRequest, PHAssetResourceBag;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest>
{
    NSMutableArray *_assetResources;
    PHAssetResourceBag *_assetResourceBag;
    NSMutableDictionary *_movedFiles;
    _Bool _duplicateAllowsPrivateMetadata;
    _Bool _duplicateLivePhotoAsStill;
    NSString *_duplicateAssetIdentifier;
    PHAssetCreationPhotoStreamPublishingRequest *__photoStreamPublishingRequest;
}

+ (_Bool)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 error:(id *)arg4;
+ (_Bool)supportsAssetResourceTypes:(id)arg1;
+ (id)creationRequestForAssetCopyStillPhotoFromLivePhotoAsset:(id)arg1;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromImageData:(id)arg1;
+ (id)creationRequestForAsset;
+ (id)_creationRequestForAssetUsingUUID:(id)arg1;
@property(retain, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest; // @synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest;
@property(nonatomic, setter=_setDuplicateLivePhotoAsStill:) _Bool duplicateLivePhotoAsStill; // @synthesize duplicateLivePhotoAsStill=_duplicateLivePhotoAsStill;
@property(retain, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier; // @synthesize duplicateAssetIdentifier=_duplicateAssetIdentifier;
- (void).cxx_destruct;
@property(nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) _Bool duplicateAllowsPrivateMetadata;
@property(readonly, getter=isNew) _Bool new;
- (_Bool)canGenerateUUIDLocally;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_populateDuplicatingAssetCreationRequest:(id)arg1 error:(id *)arg2;
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1;
- (id)_duplicatedAssetResourcesFromAsset:(id)arg1 flattenLivePhotoIntoStillPhoto:(_Bool)arg2 error:(id *)arg3;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitled:(_Bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (long long)_mediaTypeForCreatedAsset;
- (id)placeholderForCreatedAsset;
- (void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4;
- (void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3;
- (void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3;
- (id)initWithHelper:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initForNewObject;
- (_Bool)_createAssetFromValidatedResources:(id)arg1 uuid:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (id)_managedAssetFromData:(id)arg1 photoLibrary:(id)arg2 getImageSource:(struct CGImageSource **)arg3 imageData:(id *)arg4;
- (id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1;
- (_Bool)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (_Bool)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (id)_secureMove:(_Bool)arg1 assetResource:(id)arg2 error:(id *)arg3;
- (id)_secureMove:(_Bool)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSDictionary *_movedFiles;
- (void)_resetMovedFiles;
- (_Bool)_restoreMovedFilesOnFailure;
- (void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2;
- (void)_copyMetadataFromAsset:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) int clientProcessID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uuid;

@end

