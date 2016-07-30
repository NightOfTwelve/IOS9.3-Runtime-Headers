//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

#import <ContactsUI/CNPropertyBestIDSValueQueryDelegate-Protocol.h>

@class CNPropertyBestIDSValueQuery, NSArray;

__attribute__((visibility("hidden")))
@interface CNContactAddFavoriteAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate>
{
    _Bool _allowPhoneFavorites;
    _Bool _allowFaceTimeFavorites;
    _Bool _allowFaceTimeAudioFavorites;
    _Bool _hasFaceTimeFavorite;
    _Bool _hasFaceTimeAudioFavorite;
    CNPropertyBestIDSValueQuery *_bestFaceTimeQuery;
    NSArray *_filteredPhoneItems;
}

@property(nonatomic) _Bool hasFaceTimeAudioFavorite; // @synthesize hasFaceTimeAudioFavorite=_hasFaceTimeAudioFavorite;
@property(nonatomic) _Bool hasFaceTimeFavorite; // @synthesize hasFaceTimeFavorite=_hasFaceTimeFavorite;
@property(retain, nonatomic) NSArray *filteredPhoneItems; // @synthesize filteredPhoneItems=_filteredPhoneItems;
@property(retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery; // @synthesize bestFaceTimeQuery=_bestFaceTimeQuery;
@property(nonatomic) _Bool allowFaceTimeAudioFavorites; // @synthesize allowFaceTimeAudioFavorites=_allowFaceTimeAudioFavorites;
@property(nonatomic) _Bool allowFaceTimeFavorites; // @synthesize allowFaceTimeFavorites=_allowFaceTimeFavorites;
@property(nonatomic) _Bool allowPhoneFavorites; // @synthesize allowPhoneFavorites=_allowPhoneFavorites;
- (void).cxx_destruct;
- (void)_saveFavorite:(id)arg1 withType:(long long)arg2;
- (int)_propertyIDForProperty:(id)arg1;
- (void)_queryFaceTimeStatus;
- (void)_filterFavoritedItems;
- (void)queryComplete;
- (void)performActionWithSender:(id)arg1;
- (_Bool)canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;

@end

