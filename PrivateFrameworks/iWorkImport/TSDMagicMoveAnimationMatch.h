//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, TSDTextureSet;

__attribute__((visibility("hidden")))
@interface TSDMagicMoveAnimationMatch : NSObject
{
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    _Bool _isUsingMorphTexture;
    _Bool _didUseMorphTexture;
    _Bool _hasBeenTornDown;
    _Bool _isMorphMatch;
    _Bool _isTextStyleIdenticalExceptSize;
    _Bool _shouldDisableTextMorphing;
    TSDTextureSet *_outgoingTexture;
    TSDTextureSet *_incomingTexture;
    long long _matchType;
    double _outgoingTextureActionBuildFinalAngle;
}

+ (unsigned long long)magicMoveMorphTexturesPerSecond;
@property(nonatomic) double outgoingTextureActionBuildFinalAngle; // @synthesize outgoingTextureActionBuildFinalAngle=_outgoingTextureActionBuildFinalAngle;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) _Bool shouldDisableTextMorphing; // @synthesize shouldDisableTextMorphing=_shouldDisableTextMorphing;
@property(nonatomic) _Bool isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize;
@property(nonatomic) _Bool isMorphMatch; // @synthesize isMorphMatch=_isMorphMatch;
@property(retain, nonatomic) TSDTextureSet *incomingTexture; // @synthesize incomingTexture=_incomingTexture;
@property(retain, nonatomic) TSDTextureSet *outgoingTexture; // @synthesize outgoingTexture=_outgoingTexture;
- (void)unlockCurrentMorphTexture;
- (id)lockCurrentMorphTexture;
- (void)addMorphTexture:(id)arg1;
@property(readonly, nonatomic) _Bool isMatched;
- (id)description;
- (void)teardown;
- (void)dealloc;
- (id)initWithMatchType:(long long)arg1 outgoingTexture:(id)arg2 incomingTexture:(id)arg3;

@end

