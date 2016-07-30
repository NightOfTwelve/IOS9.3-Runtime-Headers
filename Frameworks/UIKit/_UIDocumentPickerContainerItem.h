//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIDocumentPickerDirectoryObserverItem-Protocol.h>

@class NSDate, NSMapTable, NSOperation, NSString, NSURL, _UIDocumentPickerContainerModel, _UIDocumentPickerURLContainerModel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem>
{
    _UIDocumentPickerURLContainerModel *_model;
    _UIDocumentPickerURLContainerModel *_weak_model;
    long long _modelDisplayCount;
    id _resourceIdentifier;
    NSOperation *_thumbnailLoadOperation;
    _Bool _pickable;
    long long _type;
    NSMapTable *_thumbnailsBySize;
    _UIDocumentPickerContainerModel *_parentModel;
    NSString *_pickabilityReason;
}

+ (id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(struct CGSize)arg3 scale:(double)arg4 wantsBorder:(_Bool *)arg5;
+ (void)clearLRUThumbnailCache;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;
+ (id)_lruThumbnailArray;
@property(copy, nonatomic) NSString *pickabilityReason; // @synthesize pickabilityReason=_pickabilityReason;
@property(nonatomic) __weak _UIDocumentPickerContainerModel *parentModel; // @synthesize parentModel=_parentModel;
@property(retain, nonatomic) NSMapTable *thumbnailsBySize; // @synthesize thumbnailsBySize=_thumbnailsBySize;
@property(nonatomic) _Bool pickable; // @synthesize pickable=_pickable;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSURL *urlInLocalContainer;
- (id)contentType;
@property(readonly, nonatomic) _Bool renameable;
- (void)_modelChanged;
- (id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1;
- (void)decrementModelDisplayCount;
- (void)modelChanged;
- (void)_ensureModelPresent;
- (void)incrementModelDisplayCount;
@property(readonly, copy) NSString *description;
- (id)sortTag;
- (id)modificationDate;
@property(readonly, nonatomic) NSDate *sortDate;
- (id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3;
- (id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2;
- (id)tags;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, retain, nonatomic) _UIDocumentPickerContainerModel *model;
- (id)_resourceIdentifier;
@property(readonly, retain, nonatomic) NSURL *url;
@property(readonly, retain, nonatomic) NSString *subtitle2;
@property(readonly, retain, nonatomic) NSString *subtitle;
@property(readonly, retain, nonatomic) NSString *title;
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(_Bool *)arg3;
- (id)_createThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)thumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)sortPath;
- (unsigned long long)indentationLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

