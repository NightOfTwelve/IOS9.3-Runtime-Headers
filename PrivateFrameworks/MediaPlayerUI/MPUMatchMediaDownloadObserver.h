//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

#import <MediaPlayerUI/MPStoreDownloadManagerObserver-Protocol.h>

@class MPStoreDownload, NSString;

@interface MPUMatchMediaDownloadObserver : MPUMediaDownloadObserver <MPStoreDownloadManagerObserver>
{
    MPStoreDownload *_storeDownload;
}

- (void).cxx_destruct;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (_Bool)isRestoreDownload;
- (_Bool)isPaused;
- (_Bool)isPurchasing;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)cancelDownload;
- (_Bool)canCancel;
- (_Bool)isCurrentlyPlayable;
- (double)rawDownloadTotal;
- (double)rawDownloadProgress;
- (double)downloadProgress;
- (void)_onQueue_invalidate;
- (void)dealloc;
- (id)initWithStoreDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

