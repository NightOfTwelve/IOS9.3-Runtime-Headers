//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHImage : NSObject
{
}

+ (int)handleInlineWebView:(id)arg1 state:(id)arg2;
+ (int)handleFloatingWebView:(id)arg1 state:(id)arg2;
+ (int)handleInlineMedia:(id)arg1 state:(id)arg2;
+ (int)handleFloatingMedia:(id)arg1 state:(id)arg2;
+ (int)handleInlineImageBinary:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(struct CGPath *)arg5 style:(id)arg6 state:(id)arg7;
+ (int)handleFloatingImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath *)arg6 state:(id)arg7;
+ (void)handleSimpleImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 state:(id)arg4;
+ (void)mapMaskedImage:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(struct CGPath *)arg5 graphicStyle:(id)arg6 isFloating:(_Bool)arg7 state:(id)arg8;
+ (void)mapCropGeometry:(id)arg1 bounds:(id)arg2 style:(id)arg3;

@end

