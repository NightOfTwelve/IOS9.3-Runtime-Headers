//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>
{
}

+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metadataGroup;
@property(copy, nonatomic) NSNumber *selected;
@property(copy, nonatomic) NSArray *metadata;
@property(copy, nonatomic) NSString *groupTitle;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

