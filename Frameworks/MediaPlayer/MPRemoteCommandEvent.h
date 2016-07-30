//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPRemoteCommand, NSDictionary, NSString;

@interface MPRemoteCommandEvent : NSObject
{
    NSDictionary *_mediaRemoteOptions;
    NSString *_contextID;
    MPRemoteCommand *_command;
    double _timestamp;
}

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) MPRemoteCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)contextID;
- (id)mediaRemoteOptions;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)init;

@end

