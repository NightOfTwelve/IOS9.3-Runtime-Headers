//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCH3DShaderEffectStateInfo-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
{
}

+ (id)stateSharingID;
+ (Class)stateClass;
+ (id)effect;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)alwaysUploadData;
- (id)stateSharingID;
- (Class)stateClass;

@end

