//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspector.h>

@class NSArray, NSURL;

@interface AVFigAssetInspector : AVAssetInspector
{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigFormatReader *_formatReader;
    long long _formatReaderOnce;
    _Bool didCheckForSaveRestriction;
    _Bool hasSaveRestriction;
}

- (id)propertyListForProxy;
- (_Bool)containsFragments;
- (_Bool)canContainFragments;
- (id)SHA1Digest;
- (_Bool)isCompatibleWithAirPlayVideo;
- (_Bool)isCompatibleWithSavedPhotosAlbum;
- (_Bool)isPlayable;
@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) NSURL *originalNetworkContentURL;
@property(readonly, nonatomic) NSURL *resolvedURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSArray *figChapters;
@property(readonly, nonatomic) NSArray *figChapterGroupInfo;
- (_Bool)isComposable;
- (_Bool)isReadable;
- (_Bool)isExportable;
- (_Bool)_hasQTSaveRestriction;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)creationDate;
- (id)_mediaSelectionGroupDictionaries;
- (id)trackReferences;
- (id)alternateTrackGroups;
- (long long)trackCount;
- (_Bool)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;
- (CDStruct_1b6d18a9)duration;
- (id)_instanceIdentifier;
- (id)identifyingTagClass;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;

@end

