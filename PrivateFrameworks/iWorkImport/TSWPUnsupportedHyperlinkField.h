//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField
{
    NSString *_href;
}

@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
- (int)smartFieldKind;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (const struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;

@end

