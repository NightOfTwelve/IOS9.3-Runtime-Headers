//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PFAdjustmentSerialization : NSObject
{
}

+ (id)deserializeDictionaryFromData:(id)arg1 error:(id *)arg2;
+ (id)serializeDictionary:(id)arg1 error:(id *)arg2;
+ (id)deserializeAdjustmentsFromData:(id)arg1 error:(id *)arg2;
+ (id)serializeAdjustments:(id)arg1 error:(id *)arg2;
+ (_Bool)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3;
+ (_Bool)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4;

@end

