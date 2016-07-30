//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMLegacyStillImageCaptureRequest.h>

#import <CameraUI/CAMMutableCaptureRequestLocation-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPersistence-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPower-Protocol.h>

@class CLLocation, NSString, NSURL;
@protocol CAMLegacyStillImageCaptureRequestDelegate;

@interface CAMMutableLegacyStillImageCaptureRequest : CAMLegacyStillImageCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower>
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
@property(nonatomic) __weak id <CAMLegacyStillImageCaptureRequestDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool wantsAudioForCapture; // @dynamic wantsAudioForCapture;
@property(nonatomic) _Bool usesStillImageStabilization; // @dynamic usesStillImageStabilization;
@property(nonatomic) long long hdrMode; // @dynamic hdrMode;
@property(nonatomic) long long flashMode; // @dynamic flashMode;
@property(nonatomic) long long physicalButtonType; // @dynamic physicalButtonType;
@property(nonatomic) long long captureMode; // @dynamic captureMode;
@property(nonatomic) long long captureDevice; // @dynamic captureDevice;
@property(nonatomic) long long captureOrientation; // @dynamic captureOrientation;
@property(nonatomic, getter=isTransient) _Bool transient; // @dynamic transient;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

