//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface IDSMessageContext : NSObject
{
    NSMutableDictionary *_dict;
    id _boostContext;
}

@property(nonatomic) _Bool wantsManualAck;
@property(nonatomic) long long broadcastID;
@property(nonatomic) _Bool wantsAppAck;
@property(nonatomic) _Bool expectsPeerResponse;
@property(nonatomic) NSNumber *priority;
@property(nonatomic) NSNumber *broadcastTime;
@property(nonatomic) NSNumber *originalCommand;
@property(copy, nonatomic) NSString *originalDestinationDevice;
@property(copy, nonatomic) NSString *toID;
@property(copy, nonatomic) NSString *fromID;
@property(copy, nonatomic) NSString *storageGuid;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(copy, nonatomic) NSString *incomingResponseIdentifier;
@property(copy, nonatomic) NSString *outgoingResponseIdentifier;
@property(retain, nonatomic) id boostContext;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;

@end

