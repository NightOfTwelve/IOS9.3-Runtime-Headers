//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject
{
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1;
- (id)nextTimedMetadataGroup;
@property(readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)init;

@end

