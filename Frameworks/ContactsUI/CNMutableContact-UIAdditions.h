//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNMutableContact.h>

@class NSArray;

@interface CNMutableContact (UIAdditions)
- (void)removePhoto;
@property(copy, nonatomic) NSArray *birthdays;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;
- (void)updateContactType:(_Bool)arg1;
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (_Bool)hasNonPersistedData;
@end

