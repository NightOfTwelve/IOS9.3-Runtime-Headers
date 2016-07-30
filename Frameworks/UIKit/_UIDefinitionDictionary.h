//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASAsset, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionDictionary : NSObject
{
    struct __DCSDictionary *_dictionary;
    _Bool _activated;
    ASAsset *_rawAsset;
    NSString *_definitionLanguage;
}

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;
@property _Bool activated; // @synthesize activated=_activated;
@property(readonly) NSString *definitionLanguage; // @synthesize definitionLanguage=_definitionLanguage;
@property(readonly) ASAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
- (void).cxx_destruct;
- (id)description;
- (id)_definitionValueForTerm:(id)arg1;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;
- (_Bool)_hasDefinitionForTerm:(id)arg1;
@property(readonly) NSString *localizedDictionaryName;
@property(readonly) NSString *localizedLanguageName;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

