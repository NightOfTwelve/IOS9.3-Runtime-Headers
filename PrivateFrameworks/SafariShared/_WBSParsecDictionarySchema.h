//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecSchema.h>

@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema
{
    NSDictionary *_keysToSchemata;
}

@property(copy, nonatomic) NSDictionary *keysToSchemata; // @synthesize keysToSchemata=_keysToSchemata;
- (void).cxx_destruct;
- (_Bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)initWithSchemaDictionary:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;

@end

