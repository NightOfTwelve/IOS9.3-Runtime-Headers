//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/QLPreviewItem-Protocol.h>

@class MFAttachmentManager, MFAttachmentPlaceholder, MFMailDropMetadata, MFMimePart, NSMutableDictionary, NSProgress, NSString, NSURL;
@protocol MFDataConsumer;

@interface MFAttachment : NSObject <QLPreviewItem>
{
    NSMutableDictionary *_metadata;
    MFAttachmentManager *_attachmentManager;
    _Bool _isDataAvailableLocally;
    MFAttachmentPlaceholder *_placeholder;
    NSProgress *_downloadProgress;
    _Bool _isUserFacing;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    unsigned long long _progressInterval;
    double _progressTimeInterval;
    CDUnknownBlockType _fetchCompletionBlock;
    CDUnknownBlockType _fetchProgressBlock;
    id <MFDataConsumer> _customConsumer;
    unsigned long long _lastProgressBytes;
    double _lastProgressTime;
}

@property(nonatomic) double lastProgressTime; // @synthesize lastProgressTime=_lastProgressTime;
@property(nonatomic) unsigned long long lastProgressBytes; // @synthesize lastProgressBytes=_lastProgressBytes;
@property(nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(nonatomic) _Bool isUserFacing; // @synthesize isUserFacing=_isUserFacing;
@property(retain, nonatomic) id <MFDataConsumer> customConsumer; // @synthesize customConsumer=_customConsumer;
@property(copy) CDUnknownBlockType fetchProgressBlock; // @synthesize fetchProgressBlock=_fetchProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property(nonatomic) double progressTimeInterval; // @synthesize progressTimeInterval=_progressTimeInterval;
@property(nonatomic) unsigned long long progressInterval; // @synthesize progressInterval=_progressInterval;
@property(retain, nonatomic) MFAttachmentPlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *disposition; // @synthesize disposition=_disposition;
@property(retain, nonatomic) MFMimePart *part; // @synthesize part=_part;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)contentTypeConformsToPassbook;
- (_Bool)contentTypeConformsToMarkup;
- (_Bool)contentTypeConformsToProvisionment;
- (_Bool)contentTypeConformsToEventICS;
- (_Bool)contentTypeConformsToEventVCS;
- (_Bool)contentTypeConformsToEvent;
- (_Bool)contentTypeConformsToVCard;
- (_Bool)conformsToType:(id)arg1;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)readFromDisk;
- (void)writeToDiskWithData:(id)arg1;
- (unsigned long long)sizeOnDisk;
- (id)fileAttributes;
- (_Bool)isCached;
@property(nonatomic) unsigned long long encodedFileSize;
@property(nonatomic) unsigned long long decodedFileSize;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(copy, nonatomic) NSString *originalCID;
- (void)setContentID:(id)arg1;
@property(readonly) NSString *contentID;
@property(readonly) _Bool isAutoArchive;
@property(readonly) NSString *fileUTType;
@property(readonly) NSString *path; // @dynamic path;
@property(copy, nonatomic) NSString *remoteImageFileName;
@property(copy, nonatomic) NSString *fileName; // @dynamic fileName;
- (_Bool)isImageFile;
@property(readonly) _Bool isContainedInCompose;
@property(readonly) _Bool isContainedInRFC822;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;
@property(readonly) NSString *inferredMimeType;
@property(readonly) _Bool shouldAutoDownload;
@property(readonly) _Bool isDataAvailableLocally;
- (id)_dataProvider;
- (_Bool)isAvailable;
- (id)filterICSData:(id)arg1;
- (id)filterVCSData:(id)arg1;
- (id)filterData:(id)arg1;
- (id)fileURL;
@property(readonly, nonatomic) NSProgress *downloadProgress;
@property(retain, nonatomic) MFMailDropMetadata *mailDropMetadata; // @dynamic mailDropMetadata;
@property _Bool isPlaceholder; // @dynamic isPlaceholder;
- (id)fetchPlaceholderData;
- (_Bool)isMailDropPhotoArchive;
- (_Bool)isMailDrop;
- (id)fetchDataToURL:(id *)arg1;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1 stripPrivateMetadata:(_Bool)arg2;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)fetchDataSynchronously:(id *)arg1 stripPrivateMetadata:(_Bool)arg2;
- (id)fetchDataSynchronously:(id *)arg1;
- (id)fetchLocalData:(id *)arg1 stripPrivateMetadata:(_Bool)arg2;
- (id)fetchLocalData;
- (void)fetchData;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

