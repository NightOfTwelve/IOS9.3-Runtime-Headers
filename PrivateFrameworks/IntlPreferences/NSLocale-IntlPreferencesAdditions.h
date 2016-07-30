//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLocale.h>

@interface NSLocale (IntlPreferencesAdditions)
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;
+ (void)enableDefaultKeyboardForPreferredLanguages;
+ (void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2;
+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (_Bool)shouldShowPreferredLanguages;
+ (void)updateShouldShowPreferredLanguages:(_Bool)arg1;
+ (_Bool)localeLanguageMatchesPrimaryLanguage;
+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;
+ (void)setLocaleAfterRegionChange:(id)arg1;
+ (void)setLocaleAfterLanguageChange:(id)arg1;
+ (id)validateLocale:(id)arg1;
+ (void)resetTimeFormat;
+ (void)setLocaleOnly:(id)arg1;
+ (void)setLocaleAndResetTimeFormat:(id)arg1;
+ (id)renderableLanguagesFromList:(id)arg1;
+ (id)renderableLocaleLanguages;
+ (id)renderableUILanguages;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4;
+ (id)supportedCJLanguageIdentifiers;
+ (id)deviceLanguageIdentifier;
+ (id)deviceLanguageLocale;
@end
