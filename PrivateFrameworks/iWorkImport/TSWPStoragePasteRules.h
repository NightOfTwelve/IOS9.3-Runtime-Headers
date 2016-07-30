//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSPObject, TSWPColumnStyle, TSWPListStyle, TSWPParagraphStyle, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStoragePasteRules : NSObject
{
    unsigned int _flags;
    unsigned int _actionFlags[6];
    unsigned int _lastFlag;
    struct _NSRange _srcLeadRange;
    struct _NSRange _srcTrailRange;
    _Bool _mapDestTrailCS;
    TSWPStorage *_destStorage;
    unsigned long long _sourceColumnStyleCount;
    unsigned long long _sourceSectionCount;
    struct {
        TSWPParagraphStyle *parStyle;
        TSPObject *section;
        TSWPColumnStyle *columnStyle;
        TSWPListStyle *listStyle;
        struct TSWPParagraphData parData;
        struct TSWPParagraphData parStartData;
        struct TSWPParagraphData parBidiData;
    } _paragraphs[4];
}

- (id).cxx_construct;
- (void)didPasteWithIOTransaction:(struct TSWPStorageTransaction *)arg1 atDestRange:(struct _NSRange)arg2;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange)arg3 srcStylesAmbiguous:(_Bool)arg4;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange)arg3 srcStylesAmbiguous:(_Bool)arg4;
- (void)mapCharacterStyles:(int)arg1 toRange:(struct _NSRange)arg2 useParagraphProperties:(_Bool)arg3 ioTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(struct _NSRange)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)addActionFlag:(int)arg1;
- (void)dealloc;

@end

