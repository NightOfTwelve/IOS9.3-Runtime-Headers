//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/QLPreviewItem-Protocol.h>

@class ICAttachment, NSArray, NSString, NSURL;

@interface ICAttachmentModel : NSObject <QLPreviewItem>
{
    NSArray *_searchStrings;
    _Bool _previewGenerationOperationCancelled;
    _Bool _mergeableDataDirty;
    _Bool _hasAdditionalSearchIndexStrings;
    ICAttachment *_attachment;
    struct CGSize _intrinsicContentSize;
}

+ (_Bool)populateLocationSearchStringsIfPossible:(id)arg1 forAttachment:(id)arg2 getLatitude:(id *)arg3 longitude:(id *)arg4;
+ (void)populateLocationSearchStrings:(id)arg1 forLatitude:(double)arg2 longitude:(double)arg3;
+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
@property _Bool hasAdditionalSearchIndexStrings; // @synthesize hasAdditionalSearchIndexStrings=_hasAdditionalSearchIndexStrings;
@property(nonatomic, getter=isMergeableDataDirty) _Bool mergeableDataDirty; // @synthesize mergeableDataDirty=_mergeableDataDirty;
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(readonly, nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property _Bool previewGenerationOperationCancelled; // @synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)updateFileBasedAttributes;
- (_Bool)isReadyToPresent;
- (void)updateAttachmentSize;
- (id)attachmentModelType;
- (struct UIImage *)fileIconWithPreferredSize:(struct CGSize)arg1;
- (id)activityItems;
- (id)generateSearchIndexStringsOperation;
- (int)populateSearchStrings:(id)arg1;
- (void)invalidateSearchStrings;
@property(readonly, copy) NSArray *searchStrings;
- (void)didCancelPreviewGeneratorOperation;
- (void)generatePreviews;
@property(readonly, nonatomic) _Bool generatePreviewsDuringCloudActivity;
@property(readonly, nonatomic) _Bool generateAsynchronousPreviews;
@property(readonly, nonatomic) _Bool needToGeneratePreviews;
@property(readonly, nonatomic) CDUnknownBlockType genericBrickThumbnailCreator;
@property(readonly, nonatomic) CDUnknownBlockType genericListThumbnailCreator;
@property(readonly, nonatomic) _Bool showThumbnailInNoteList;
@property(readonly, nonatomic) _Bool hasThumbnailImage;
@property(readonly, nonatomic) _Bool hasPreviews;
- (void)writeMergeableData;
- (void)mergeWithMergeableData:(id)arg1;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

