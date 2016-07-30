//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/NSObject-Protocol.h>
#import <TSUtility/TSUDataFormat-Protocol.h>

@class NSArray, NSString;

@protocol TSUNumberFormatting <TSUDataFormat, NSObject>
- (_Bool)isEquivalent:(id)arg1;
- (NSString *)stringFromString:(NSString *)arg1;
- (NSString *)chartLabelStringFromDouble:(double)arg1;
- (NSString *)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (NSString *)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (NSString *)stringFromDouble:(double)arg1;
- (_Bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (_Bool)usesTabs;
- (_Bool)hasValidDecimalPlaces;
- (void)setFormatName:(NSString *)arg1;
- (_Bool)baseUseMinusSign;
- (unsigned short)basePlaces;
- (unsigned short)base;
- (_Bool)customFormatShouldAutoInsertPercentSymbol;
- (_Bool)usesTextFormatForValue:(double)arg1;
- (_Bool)canFormatText;
- (_Bool)isTextFormat;
- (double)scaleFactor;
- (_Bool)usesAccountingStyle;
- (int)fractionAccuracy;
- (_Bool)showThousandsSeparator;
- (int)negativeStyle;
- (NSString *)currencyCode;
- (NSString *)formatString;
- (NSString *)suffixString;
- (unsigned short)decimalPlaces;
- (int)valueType;
- (NSArray *)customNumberFormatTokens;
- (_Bool)isCustom;
- (NSString *)formatName;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
- (id)numberFormatBySettingUseAccountingStyle:(_Bool)arg1;
- (id)numberFormatBySettingFractionAccuracy:(int)arg1;
- (id)numberFormatBySettingShowThousandsSeparator:(_Bool)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingSuffixString:(NSString *)arg1;
- (id)numberFormatBySettingCurrencyCode:(NSString *)arg1;
- (id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
@end

