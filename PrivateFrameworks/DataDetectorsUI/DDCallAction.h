//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

__attribute__((visibility("hidden")))
@interface DDCallAction : DDTelephoneNumberAction
{
}

+ (_Bool)isAvailable;
- (int)interactionType;
- (void)perform;
- (id)localizedName;
- (_Bool)_titleFitsInActionSheet:(id)arg1;
- (double)_systemFontSize;
- (_Bool)_retrieveNameForDestinationNumber:(id *)arg1 label:(id *)arg2;
- (id)_UIDsAndLabelsMatchingPhoneNumber:(id)arg1 inAddressBook:(void *)arg2;
- (id)_nameForPerson:(void *)arg1;

@end

