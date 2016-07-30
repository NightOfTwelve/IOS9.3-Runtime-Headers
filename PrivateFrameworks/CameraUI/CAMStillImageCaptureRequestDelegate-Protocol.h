//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMStillImageCaptureRequest, CAMStillImageCaptureResponse, CAMStillImagePersistenceResponse, CAMVideoCaptureResponse, CAMVideoPersistenceResponse, NSError;

@protocol CAMStillImageCaptureRequestDelegate <NSObject>

@optional
- (void)stillImageRequestDidCompleteVideoRemotePersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageRemotePersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteVideoLocalPersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg1 error:(NSError *)arg2;
- (void)stillImageRequestDidCompleteVideoCapture:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageCapture:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImageCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidStopCapturing:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidStartCapturing:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(CAMStillImageCaptureRequest *)arg1;
@end

