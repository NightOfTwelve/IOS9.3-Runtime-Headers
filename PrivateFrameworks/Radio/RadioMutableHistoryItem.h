//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/RadioHistoryItem.h>

@class NSDate, NSString, RadioTrack;

@interface RadioMutableHistoryItem : RadioHistoryItem
{
}

@property(nonatomic) long long type; // @dynamic type;
@property(retain, nonatomic) RadioTrack *track; // @dynamic track;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(retain, nonatomic) NSDate *datePlayed; // @dynamic datePlayed;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

