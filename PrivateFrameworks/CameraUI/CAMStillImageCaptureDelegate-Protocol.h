//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMStillImageCaptureRequest, CAMStillImageCaptureResult, CAMVideoCaptureResult, NSError;

@protocol CAMStillImageCaptureDelegate <NSObject>

@optional
- (void)stillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg1 error:(NSError *)arg2;
- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didCompleteVideoCaptureWithResult:(CAMVideoCaptureResult *)arg2;
- (void)stillImageRequestDidStopCapturingVideo:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didCompleteStillImageCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)stillImageRequestDidStopCapturing:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidStartCapturing:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(CAMStillImageCaptureRequest *)arg1;
@end

