//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSURL;
@protocol WBSFormAutoFillFrame, WBSFormAutoFillNode;

@protocol WBSFormAutoFillFrame <NSObject>
- (_Bool)containsAnyFormElements;
- (id <WBSFormAutoFillFrame>)pageMainFrame;
- (void)enumerateChildFramesUsingBlock:(void (^)(id <WBSFormAutoFillFrame>))arg1;
- (NSURL *)committedURL;
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id <WBSFormAutoFillNode>)arg1;
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueFormAutoFillFrame *)frameRef;
@end

