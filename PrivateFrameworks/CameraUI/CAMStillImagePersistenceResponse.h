//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMPersistenceResponse.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMStillImagePersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>
{
    _Bool _expectingPairedVideo;
    NSDictionary *_metadata;
    NSString *_burstIdentifier;
    unsigned long long _burstRepresentedCount;
}

@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) unsigned long long burstRepresentedCount; // @synthesize burstRepresentedCount=_burstRepresentedCount;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5 metadata:(id)arg6 burstIdentifier:(id)arg7 burstRepresentedCount:(unsigned long long)arg8 expectingPairedVideo:(_Bool)arg9;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) unsigned short sessionIdentifier;
@property(readonly) Class superclass;

@end

