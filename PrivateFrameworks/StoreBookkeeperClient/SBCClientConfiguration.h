//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreBookkeeperClient/NSSecureCoding-Protocol.h>

@class SBCPlaybackPositionDomain;

@interface SBCClientConfiguration : NSObject <NSSecureCoding>
{
    SBCPlaybackPositionDomain *_playbackPositionDomain;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithPlaybackPositionDomain:(id)arg1;

@end

