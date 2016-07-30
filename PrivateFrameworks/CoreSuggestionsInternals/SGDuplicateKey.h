//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol SGEntityKey;

@interface SGDuplicateKey : NSObject
{
    long long _entityType;
    NSObject<SGEntityKey> *_entityKey;
    SGDuplicateKey *_parentKey;
}

+ (id)duplicateKeyForSearchableItem:(id)arg1;
+ (id)duplicateKeyForUnrecognizedContactWithIdentity:(id)arg1;
+ (id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 parentKey:(id)arg4;
+ (id)duplicateKeyForPseudoEventWithDomain:(id)arg1 groupId:(id)arg2 parentKey:(id)arg3;
+ (id)duplicateKeyForCuratedEventWithExternalID:(id)arg1;
+ (id)duplicateKeyForPseudoContactWithIdentity:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForCuratedContactWithExternalId:(int)arg1;
+ (id)duplicateKeyForEmailWithSource:(id)arg1 messageId:(id)arg2;
@property(readonly, nonatomic) SGDuplicateKey *parentKey; // @synthesize parentKey=_parentKey;
@property(readonly, nonatomic) NSObject<SGEntityKey> *entityKey; // @synthesize entityKey=_entityKey;
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *compositeHash;
- (id)pseudoEventKey;
- (id)emailKey;
- (id)identityKey;
- (id)unrecognizedContactKey;
- (id)pseudoContactKey;
- (id)curatedContactKey;
- (id)contactDetailKey;
- (id)curatedEventKey;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToDuplicateKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (id)initWithSearchableItem:(id)arg1;
- (id)initWithSerializedEntityKey:(id)arg1 entityType:(long long)arg2 serializedParentKey:(id)arg3;
- (id)initWithSerialized:(id)arg1;
- (id)initWithEntityKey:(id)arg1 entityType:(long long)arg2 parentKey:(id)arg3;

@end

