//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSDGLLayerContext-Protocol.h>

@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>
{
    EAGLContext *mContext;
    unsigned int mRenderbuffer;
    unsigned int mFramebuffer;
}

- (void)unlock;
- (void)lock;
- (void)presentRenderbuffer;
- (void)teardown;
- (_Bool)createFramebufferFromLayer:(id)arg1;
- (id)init;
- (_Bool)makeCurrentContext;
- (_Bool)isValid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

