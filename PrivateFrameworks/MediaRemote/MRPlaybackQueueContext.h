//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRPlaybackQueueContext : NSObject <NSSecureCoding>
{
    NSString *_revision;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRevision:(id)arg1;

@end

