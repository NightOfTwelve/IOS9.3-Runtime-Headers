//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/QLPreviewItem-Protocol.h>

@class NSString, NSURL;

@interface CKAttachmentItem : NSObject <QLPreviewItem>
{
    struct CGSize _size;
    NSURL *_appendedBundleURL;
    _Bool _isIrisAsset;
    NSURL *_fileURL;
    NSString *_guid;
    NSURL *_previewURL;
}

+ (unsigned long long)pxWidth;
+ (id)UTITypes;
+ (struct CGSize)defaultSize;
+ (id)previewSizingQueue;
+ (id)previewCache;
@property(retain, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(nonatomic) _Bool isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)_getIrisBundleURL;
- (id)_getTempIrisBundleLocation;
- (id)_getTempIrisFolder;
- (id)getIrisVideoPath;
- (id)pasteboardItem;
- (id)UTIType;
- (void)startDeferredSetup;
- (id)cachedPreview;
- (void)_savePreview:(id)arg1;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)_savedPreviewFromURL:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_removeAppendedBundle;
- (id)imageData;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 guid:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

