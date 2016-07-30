//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVItem, NSDictionary, NSString;

@interface SBUISound : NSObject
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned int _resolvedSystemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    AVItem *_avItem;
    NSDictionary *_vibrationPattern;
    _Bool _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    int _alertType;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSString *_resolvedToneIdentifier;
    CDUnknownBlockType _completionBlock;
    NSString *_songPath;
}

@property(copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSDictionary *controllerAttributes; // @synthesize controllerAttributes=_controllerAttributes;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic, getter=isRepeating) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(retain, nonatomic) AVItem *avItem; // @synthesize avItem=_avItem;
@property(retain, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property(nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID; // @synthesize _resolvedSystemSoundID;
@property(nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (void).cxx_destruct;
- (id)description;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_completionBlock;
- (void)stop;
- (_Bool)playInEvironments:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPlaying;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;

@end

