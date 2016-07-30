//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PUAudioSessionController;

@interface PUAudioSessionCategoryToken : NSObject
{
    PUAudioSessionController *_audioSessionController;
    _Bool _valid;
    NSString *_debugDescription;
    CDUnknownBlockType _configurationBlock;
    CDUnknownBlockType _completionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(readonly, copy, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)_initWithConfigurationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 audioSessionController:(id)arg3 debugDescription:(id)arg4;

@end

