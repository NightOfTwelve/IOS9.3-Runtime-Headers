//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLImageBuffer.h>

@interface BLPixelImageBuffer : BLImageBuffer
{
}

+ (id)bufferWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;
+ (id)bufferWithImage:(id)arg1 colorManagement:(int)arg2;
- (id)image;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)accessPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByContextInBlock:(CDUnknownBlockType)arg1;

@end

