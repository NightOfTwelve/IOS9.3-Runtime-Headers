//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject
{
    NSMutableDictionary *_dict;
    PKPaper *paper;
}

+ (id)printSettingsForPrinter:(id)arg1;
+ (id)photo;
+ (id)default;
@property(retain, nonatomic) PKPaper *paper; // @synthesize paper;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)settingsDict;
- (id)init;
- (void)dealloc;

@end

