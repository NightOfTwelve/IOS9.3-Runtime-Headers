//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal
{
    NSString *_reason;
    NSString *_reason2;
    unsigned int _rid;
    int _source;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *reason2; // @synthesize reason2=_reason2;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (int)defaultFamiliarity;
- (void)dealloc;

@end

