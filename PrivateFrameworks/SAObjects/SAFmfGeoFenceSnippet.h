//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSString, NSURL, SAFmfGeoFence;

@interface SAFmfGeoFenceSnippet : SAUISnippet
{
}

+ (id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSnippet;
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSNumber *oneTimeOnly;
@property(copy, nonatomic) NSString *fenceType;
@property(copy, nonatomic) NSNumber *enable;
@property(retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

