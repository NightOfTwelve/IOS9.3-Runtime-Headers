//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/IMSystemMonitorListener-Protocol.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>
{
    CKDispatchCache *_dispatchCache;
    CKMultiDict *_pendingBlocks;
}

+ (id)detailsPreviewCache;
+ (id)transcriptPreviewCache;
+ (id)mapThumbnailQueue;
@property(retain, nonatomic) CKMultiDict *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(retain, nonatomic) CKDispatchCache *dispatchCache; // @synthesize dispatchCache=_dispatchCache;
- (_Bool)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
- (void)transferRemoved:(id)arg1;
- (void)transferFinished:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)flush;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidSuspend;
- (id)notificationCenter;
- (id)mediaObjectManager;
- (void)resume;
- (void)endGeneratingForKey:(id)arg1;
- (void)beginGeneratingForKey:(id)arg1;
- (_Bool)isGeneratingPreviewForKey:(id)arg1;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (id)cachedPreviewForKey:(id)arg1;
- (void)enqueueGenerationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (id)init;
- (void)dealloc;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;

@end

