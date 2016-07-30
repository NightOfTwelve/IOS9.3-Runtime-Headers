//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TSUNumberFormatter : NSObject
{
    struct __CFLocale *mLocale;
    struct __CFArray *mDecimalFormatters;
    struct __CFArray *mCurrencyFormatters;
    struct __CFArray *mPercentageFormatters;
    struct __CFArray *mScientificFormatters;
    struct __CFNumberFormatter *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    struct __CFString *mAdditionalCurrencyCode;
    struct __CFArray *mAdditionalCurrencyCodeFormatters;
}

+ (id)userVisibleCurrencyCodes;
+ (id)localizedPercentSymbol;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)numberFormatStringSpecialSymbols;
+ (id)currentLocaleListSeparator;
+ (id)currentNonCachedLocaleDecimalSeparator;
+ (id)currentLocaleDecimalSeparator;
+ (id)currentNonCachedLocaleCurrencyCode;
+ (id)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (id)availableCurrencyCodes;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (void)initialize;
+ (id)formatterForLocale:(struct __CFLocale *)arg1;
- (struct __CFArray *)p_scientificFormatters;
- (struct __CFArray *)p_percentageFormatters;
- (struct __CFArray *)p_currencyFormatters;
- (struct __CFArray *)p_decimalFormatters;
- (id)localizedPercentSymbol;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)currentLocaleCurrencyCode;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (id)displayNameForCurrencyCode:(id)arg1;
- (_Bool)findCurrencySymbolInString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 successTSUlString:(const struct __CFString **)arg3;
- (_Bool)valueFromString:(struct __CFString *)arg1 formatters:(struct __CFArray *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (_Bool)fractionFromString:(struct __CFString *)arg1 value:(double *)arg2;
- (_Bool)scientificFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (_Bool)percentageFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (_Bool)currencyFromString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (_Bool)decimalFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (void)numberPreferencesChanged:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale *)arg1;

@end

