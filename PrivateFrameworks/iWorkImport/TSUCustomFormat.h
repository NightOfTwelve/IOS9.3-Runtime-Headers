//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class NSMutableArray, NSString, TSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying>
{
    NSString *mFormatName;
    NSString *mFormatNameStem;
    int mFormatType;
    TSUCustomFormatData *mDefaultFormatData;
    NSMutableArray *mConditionList;
}

@property(readonly, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=mConditionList;
@property(retain, nonatomic) NSString *formatName; // @synthesize formatName=mFormatName;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;
- (id)conditionalFormatDataForValue:(double)arg1;
@property(readonly, nonatomic) TSUCustomFormatData *defaultFormatData;
@property(readonly, nonatomic) int formatType;
- (_Bool)isEqualWithStemNameMatching:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_isEqual:(id)arg1 matchingFullName:(_Bool)arg2;
- (_Bool)p_nameStemIsEqual:(id)arg1;
- (unsigned long long)hash;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
@property(readonly, nonatomic) unsigned long long conditionCount;
- (id)customFormatWithNewName:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (id)formattedBodyStringForDoubleValue:(double)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 locale:(id)arg4;

@end

