//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly, nonatomic) NSString *errorComment;
@property(readonly, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) long long errorStatusCode;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *date;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

