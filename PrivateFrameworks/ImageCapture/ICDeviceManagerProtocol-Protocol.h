//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCapture/NSObject-Protocol.h>

@class ICCameraDevice, ICCameraFile, ICDevice, NSDictionary;

@protocol ICDeviceManagerProtocol <NSObject>
- (int)eject:(ICCameraDevice *)arg1;
- (int)downloadFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 options:(NSDictionary *)arg3 contextInfo:(void *)arg4;
- (int)deleteFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)syncClock:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)getMetadataOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)getThumbnailOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)closeSession:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)openSession:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)closeDevice:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)openDevice:(NSDictionary *)arg1 contextInfo:(void *)arg2;
@end

