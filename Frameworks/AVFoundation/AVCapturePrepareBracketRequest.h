//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    FigCaptureStillImageSettings *_settings;
}

+ (id)prepareBracketRequestWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;
@property(readonly) FigCaptureStillImageSettings *settings; // @synthesize settings=_settings;
@property(readonly) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (id)_initWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;

@end

