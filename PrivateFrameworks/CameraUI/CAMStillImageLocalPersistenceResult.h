//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMStillImageCaptureResult, NSDate, NSError, NSString, NSURL;

@interface CAMStillImageLocalPersistenceResult : NSObject
{
    CAMStillImageCaptureResult *_captureResult;
    NSURL *_localDestinationURL;
    NSString *_localDiagnosticsPath;
    NSString *_localFilteredPreviewPath;
    NSString *_localPersistenceUUID;
    NSDate *_creationDate;
    NSString *_uniformTypeIdentifier;
    long long _imageOrientation;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(readonly, copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *localPersistenceUUID; // @synthesize localPersistenceUUID=_localPersistenceUUID;
@property(readonly, copy, nonatomic) NSString *localFilteredPreviewPath; // @synthesize localFilteredPreviewPath=_localFilteredPreviewPath;
@property(readonly, copy, nonatomic) NSString *localDiagnosticsPath; // @synthesize localDiagnosticsPath=_localDiagnosticsPath;
@property(readonly, copy, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
@property(readonly, nonatomic) CAMStillImageCaptureResult *captureResult; // @synthesize captureResult=_captureResult;
- (void).cxx_destruct;
- (id)initWithCaptureResult:(id)arg1 atURL:(id)arg2 diagnosticsPath:(id)arg3 filteredPreviewPath:(id)arg4 withUUID:(id)arg5 creationDate:(id)arg6 uniformTypeIdentifier:(id)arg7 orientation:(long long)arg8 error:(id)arg9;
- (id)init;

@end

