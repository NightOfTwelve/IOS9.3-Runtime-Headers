//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACAccountStore, NSSet, NSString;
@protocol ABGroupWrapperDelegate;

@interface ABGroupWrapper : NSObject
{
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_source;
    void *_group;
    NSString *_cachedName;
    ACAccountStore *_accountStore;
    id _delegate;
    _Bool _shouldBeSelectedWhenAllChildrenAreSelected;
    _Bool _selected;
    NSSet *_childGroupWrappers;
    ABGroupWrapper *_parentGroupWrapper;
}

+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void *)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2 excludingSearchableStores:(_Bool)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2 accountStore:(id)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2 accountStore:(id)arg3 excludingSearchableStores:(_Bool)arg4 isSoleAccount:(_Bool)arg5;
@property(nonatomic) ABGroupWrapper *parentGroupWrapper; // @synthesize parentGroupWrapper=_parentGroupWrapper;
@property(readonly, nonatomic) void *group; // @synthesize group=_group;
@property(readonly, nonatomic) void *source; // @synthesize source=_source;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) id <ABGroupWrapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldBeSelectedWhenAllChildrenAreSelected; // @synthesize shouldBeSelectedWhenAllChildrenAreSelected=_shouldBeSelectedWhenAllChildrenAreSelected;
@property(retain, nonatomic) NSSet *childGroupWrappers; // @synthesize childGroupWrappers=_childGroupWrappers;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (id)description;
@property(readonly, nonatomic) int sourceType;
- (_Bool)isEqual:(id)arg1;
- (id)copyDictionaryRepresentation;
@property(readonly, nonatomic) NSString *_accountDescriptionBasedOnIdentifier;
- (long long)compareToGroupWrapper:(id)arg1;
- (long long)score;
- (void)childGroupWrapper:(id)arg1 didBecomeSelected:(_Bool)arg2;
- (_Bool)toggleSelection;
- (id)_rootGroupWrapper;
- (void)setSelected:(_Bool)arg1 propagateSelectionToChildren:(_Bool)arg2;
@property(readonly, nonatomic) NSString *name;
- (_Bool)showLinkedPeople;
- (_Bool)isDirectoryWrapper;
- (_Bool)isContainerWrapper;
- (_Bool)isGlobalWrapper;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 accountIdentifier:(id)arg2 source:(void *)arg3 group:(void *)arg4;

@end

