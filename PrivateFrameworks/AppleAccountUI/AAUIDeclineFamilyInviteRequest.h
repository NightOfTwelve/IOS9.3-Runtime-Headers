//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAUIDeclineFamilyInviteRequest : AAFamilyRequest
{
    NSString *_inviteCode;
}

@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (_Bool)isUserInitiated;

@end

