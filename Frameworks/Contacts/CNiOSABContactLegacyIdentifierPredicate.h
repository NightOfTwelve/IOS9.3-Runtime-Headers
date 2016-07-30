//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactLegacyIdentifierPredicate : CNPredicate <CNiOSContactPredicate>
{
    int _legacyIdentifier;
}

@property(readonly) int legacyIdentifier; // @synthesize legacyIdentifier=_legacyIdentifier;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsNativeSorting;
- (id)initWithLegacyIdentifier:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

