//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray, NSData, NSString;

@interface IMPerson : NSObject
{
    _Bool _registered;
    int _recordID;
    CNContact *_cnContact;
}

+ (void)_setCachedQueriesEnabled:(_Bool)arg1;
+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(_Bool)arg3;
+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(_Bool)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int *)arg7;
+ (void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void *)arg4;
+ (id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void *)arg2;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int *)arg6;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;
+ (id)existingABPersonForPerson:(id)arg1;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)allPeople;
@property(retain, nonatomic) CNContact *cnContact; // @synthesize cnContact=_cnContact;
@property(readonly, nonatomic) _Bool _registered; // @synthesize _registered;
@property(readonly, nonatomic) int _recordID; // @synthesize _recordID;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSData *imageDataWithoutLoading;
@property(retain, nonatomic) NSData *imageData;
- (void)_abPersonChanged:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *groups;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIMPerson:(id)arg1;
@property(readonly, retain, nonatomic) NSString *uniqueID;
- (_Bool)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (void)save;
@property(readonly, nonatomic) NSArray *mobileNumbers;
@property(nonatomic) NSArray *phoneNumbers;
- (id)allHandlesForProperty:(id)arg1;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (id)valuesForProperty:(id)arg1;
- (id)valuesForIMProperty:(id)arg1;
@property(readonly, nonatomic) _Bool isInAddressBook;
@property(copy, nonatomic) NSArray *emails;
@property(readonly, nonatomic) NSArray *allEmails;
- (id)emailHandlesForService:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(_Bool)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(readonly, retain, nonatomic) NSString *fullName;
@property(copy, nonatomic) NSString *nickname;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSString *abbreviatedName;
@property(readonly, nonatomic) NSString *companyName;
@property(readonly, nonatomic) _Bool isCompany;
- (void)dealloc;
- (void)finalize;
@property(readonly, copy, nonatomic) NSString *cnContactID;
@property(readonly, nonatomic) void *_recordRef;
@property(readonly, nonatomic) int recordID;
- (id)initWithABRecordID:(int)arg1;
- (id)init;
- (id)idsAddresses;
- (id)imHandleRegistrarGUID;

@end

