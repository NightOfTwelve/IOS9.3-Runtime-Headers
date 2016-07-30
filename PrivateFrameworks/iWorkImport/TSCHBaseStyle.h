//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSCHStyleActAlike-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHBaseStyle : TSSStyle <TSCHStyleActAlike>
{
}

+ (id)defaultPropertyMap;
+ (id)allSpecificsForGeneric:(int)arg1;
+ (id)g_genericToSpecificPropertySetMap;
+ (int)g_tangierPropertyFromGilliganPropertyString:(id)arg1;
+ (id)g_gilliganPropertyStringFromProperty:(int)arg1;
+ (void)g_splitProperty:(int)arg1 outStyleOwner:(id *)arg2 outSpecifier:(id *)arg3 outKeyName:(id *)arg4;
+ (id)g_specificPropertyToOperationNameBimap;
+ (id)g_objectTypeForSpecific:(int)arg1;
+ (id)g_specificToGenericPropertyMap;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)shortDescription;
- (id)boxedDefaultValueForProperty:(int)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (id)properties;
- (id)allSpecificsForGeneric:(int)arg1;
- (int)g_tangierPropertyFromGilliganPropertyString:(id)arg1;
- (id)g_gilliganPropertyStringFromProperty:(int)arg1;
- (void)g_splitProperty:(int)arg1 outStyleOwner:(id *)arg2 outSpecifier:(id *)arg3 outKeyName:(id *)arg4;
- (id)g_specificPropertyToOperationNameBimap;
- (id)g_objectTypeForSpecific:(int)arg1;
- (id)g_specificToGenericPropertyMap;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;
- (void)updateForCollaborationForProperties:(id)arg1 documentRoot:(id)arg2;
- (void)updateAfterPasteForProperties:(id)arg1 documentRoot:(id)arg2 pasteboardCustomFormatList:(id)arg3;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

