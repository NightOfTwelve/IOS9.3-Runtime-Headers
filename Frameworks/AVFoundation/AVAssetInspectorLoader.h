//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAsynchronousKeyValueLoading-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>

@class AVWeakReference, NSArray, NSString, NSURL;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVWeakReference *_weakReference;
}

+ (void)initialize;
- (id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
@property(nonatomic, getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:) double fragmentMindingInterval;
@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) NSURL *originalNetworkContentURL;
@property(readonly, nonatomic) NSURL *resolvedURL;
@property(readonly, nonatomic) NSArray *figChapters;
@property(readonly, nonatomic) NSArray *figChapterGroupInfo;
@property(readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;
@property(readonly, nonatomic, getter=isComposable) _Bool composable;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
@property(readonly, nonatomic, getter=isExportable) _Bool exportable;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic, getter=_classForTrackInspectors) Class classForTrackInspectors;
@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property(readonly, nonatomic) NSURL *URL;
- (void)cancelLoading;
- (id)assetInspector;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
- (id)init;

@end

