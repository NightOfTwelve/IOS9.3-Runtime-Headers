//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHPropertyValueStorageContainer.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, TSCHChartStyle, TSCHLegendStyle, TSCHReferenceLineStyle;

__attribute__((visibility("hidden")))
@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>
{
}

- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (id)semanticUsagesToParagraphStyleMap;
- (id)styleToSemanticTagsMap;
- (id)semanticTagToStyleMap;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1;
- (_Bool)otherStateIsEquivalent:(id)arg1;
- (_Bool)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(_Bool)arg2;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(_Bool)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (_Bool)paragraphStyleIndexesAreValid;
- (id)usesOfParagraphStyleProperties;
- (id)allStyles;
@property(retain, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle; // @dynamic referenceLineThemeStyle;
@property(copy, nonatomic) NSMutableDictionary *referenceLineStyles; // @dynamic referenceLineStyles;
@property(copy, nonatomic) NSMutableArray *paragraphStyles; // @dynamic paragraphStyles;
@property(copy, nonatomic) NSMutableArray *seriesPrivateStyles; // @dynamic seriesPrivateStyles;
@property(copy, nonatomic) NSMutableArray *seriesThemeStyles; // @dynamic seriesThemeStyles;
@property(copy, nonatomic) NSMutableArray *categoryAxisStyles; // @dynamic categoryAxisStyles;
@property(copy, nonatomic) NSMutableArray *valueAxisStyles; // @dynamic valueAxisStyles;
@property(retain, nonatomic) TSCHLegendStyle *legendStyle; // @dynamic legendStyle;
@property(retain, nonatomic) TSCHChartStyle *chartStyle; // @dynamic chartStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
