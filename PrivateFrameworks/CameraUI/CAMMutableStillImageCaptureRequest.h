//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMStillImageCaptureRequest.h>

#import <CameraUI/CAMMutableCaptureRequestLocation-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPersistence-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPower-Protocol.h>

@class CLLocation, NSString, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower>
{
}

- (void)setParameter:(id)arg1 forKey:(id)arg2;
@property(nonatomic) long long effectFilterType; // @dynamic effectFilterType;
@property(nonatomic) unsigned long long maximumBurstLength; // @dynamic maximumBurstLength;
@property(copy, nonatomic) NSString *burstIdentifier; // @dynamic burstIdentifier;
@property(nonatomic) unsigned int assertionIdentifier;
- (void)setCapturedFromPhotoBooth:(_Bool)arg1;
@property(retain, nonatomic) CLLocation *location;
@property(copy, nonatomic) NSString *HDREV0PersistenceUUID; // @dynamic HDREV0PersistenceUUID;
@property(nonatomic) _Bool shouldDelayRemotePersistence;
@property(nonatomic) _Bool shouldPersistDiagnosticsToSidecar;
@property(nonatomic) _Bool shouldExtractDiagnosticsFromMetadata;
@property(copy, nonatomic) NSURL *localDestinationURL;
@property(nonatomic) unsigned long long deferredPersistenceOptions;
@property(nonatomic) long long persistenceOptions;
@property(copy, nonatomic) NSString *persistenceUUID;
@property(nonatomic) __weak id <CAMStillImageCaptureRequestDelegate> delegate; // @dynamic delegate;
@property(nonatomic) unsigned short sessionIdentifier; // @dynamic sessionIdentifier;
@property(copy, nonatomic) NSString *HDREV0VideoPersistenceUUID; // @dynamic HDREV0VideoPersistenceUUID;
@property(copy, nonatomic) NSURL *HDREV0LocalVideoDestinationURL; // @dynamic HDREV0LocalVideoDestinationURL;
@property(copy, nonatomic) NSString *HDREV0IrisIdentifier; // @dynamic HDREV0IrisIdentifier;
@property(copy, nonatomic) NSString *videoPersistenceUUID; // @dynamic videoPersistenceUUID;
@property(copy, nonatomic) NSURL *localVideoDestinationURL; // @dynamic localVideoDestinationURL;
@property(copy, nonatomic) NSString *irisIdentifier; // @dynamic irisIdentifier;
@property(nonatomic) _Bool wantsHighResolutionStills; // @dynamic wantsHighResolutionStills;
@property(nonatomic) _Bool wantsSquareCrop; // @dynamic wantsSquareCrop;
@property(nonatomic) _Bool wantsAudioForCapture; // @dynamic wantsAudioForCapture;
@property(nonatomic) _Bool usesStillImageStabilization; // @dynamic usesStillImageStabilization;
@property(nonatomic) long long irisMode; // @dynamic irisMode;
@property(nonatomic) long long hdrMode; // @dynamic hdrMode;
@property(nonatomic) long long flashMode; // @dynamic flashMode;
@property(nonatomic) long long physicalButtonType; // @dynamic physicalButtonType;
@property(nonatomic) long long captureMode; // @dynamic captureMode;
@property(nonatomic) long long captureDevice; // @dynamic captureDevice;
@property(nonatomic) long long captureOrientation; // @dynamic captureOrientation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

