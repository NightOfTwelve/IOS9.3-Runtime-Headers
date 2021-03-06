//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKPlayerCredential : GKInternalRepresentation
{
    NSString *_accountName;
    NSString *_authenticationToken;
    GKPlayerInternal *_playerInternal;
    long long _environment;
    unsigned int _scope;
    NSDate *_scopeModificationDate;
    NSString *_altDSID;
}

+ (id)secureCodedPropertyKeys;
@property(retain) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain) NSDate *scopeModificationDate; // @synthesize scopeModificationDate=_scopeModificationDate;
@property unsigned int scope; // @synthesize scope=_scope;
@property long long environment; // @synthesize environment=_environment;
@property(retain) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (id)description;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

