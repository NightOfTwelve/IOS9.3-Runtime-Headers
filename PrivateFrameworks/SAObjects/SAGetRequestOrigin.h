//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SAGetRequestOrigin : SABaseClientBoundCommand
{
}

+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getRequestOrigin;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *searchTimeout;
@property(copy, nonatomic) NSNumber *maxAge;
@property(copy, nonatomic) NSString *desiredAccuracy;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

